/*==============================================================*/
/* Nom de SGBD :  MySQL 5.0                                     */
/* Date de création :  13/12/2012 15:07:25                      */
/*==============================================================*/


drop table if exists ARMOIRE;

drop table if exists COMMANDE;

drop table if exists CONTACT;

drop table if exists FAMILLE_MED;

drop table if exists FOURNISSEUR;

drop table if exists LIGNE_COMMANDE;

drop table if exists MEDICAMENT;

drop table if exists RESPONSABLE;

drop table if exists TYPE_CONTACT;

drop table if exists VENTE;

/*==============================================================*/
/* Table : ARMOIRE                                              */
/*==============================================================*/
create table ARMOIRE
(
   ID_ARM               varchar(10) not null,
   LIBELLE              varchar(10),
   CAPACITE             int,
   primary key (ID_ARM)
);

/*==============================================================*/
/* Table : FOURNISSEUR                                          */
/*==============================================================*/
create table FOURNISSEUR
(
   ID_FOUR              varchar(10) not null,
   RAISON_SOCIAL        varchar(30),
   primary key (ID_FOUR)
);

/*==============================================================*/
/* Table : COMMANDE                                             */
/*==============================================================*/
create table COMMANDE
(
   NUM_COMM             varchar(10) not null,
   ID_FOUR              varchar(10),
   DATE                 date,
   primary key (NUM_COMM),
   constraint FK_REFERENCE_6 foreign key (ID_FOUR)
      references FOURNISSEUR (ID_FOUR) on delete restrict on update restrict
);

/*==============================================================*/
/* Table : TYPE_CONTACT                                         */
/*==============================================================*/
create table TYPE_CONTACT
(
   ID                   varchar(10) not null,
   LIBELLE              varchar(30),
   primary key (ID)
);

/*==============================================================*/
/* Table : RESPONSABLE                                          */
/*==============================================================*/
create table RESPONSABLE
(
   MATRICULE            varchar(10) not null,
   NOM                  varchar(30),
   PRENOM               varchar(30),
   LOGIN                varchar(30),
   MOT_DE_PASSE         varchar(30),
   primary key (MATRICULE)
);

/*==============================================================*/
/* Table : CONTACT                                              */
/*==============================================================*/
create table CONTACT
(
   MATRICULE            varchar(10) not null,
   ID                   varchar(10) not null,
   CONTACT_RESP         varchar(50),
   primary key (MATRICULE, ID),
   constraint FK_REFERENCE_7 foreign key (ID)
      references TYPE_CONTACT (ID) on delete restrict on update restrict,
   constraint FK_REFERENCE_8 foreign key (MATRICULE)
      references RESPONSABLE (MATRICULE) on delete restrict on update restrict
);

/*==============================================================*/
/* Table : FAMILLE_MED                                          */
/*==============================================================*/
create table FAMILLE_MED
(
   CODE_FAMILLE         varchar(10) not null,
   DSEIGNATION_FAMILLE  varchar(20),
   primary key (CODE_FAMILLE)
);

/*==============================================================*/
/* Table : MEDICAMENT                                           */
/*==============================================================*/
create table MEDICAMENT
(
   CODE_FAMILLE         varchar(10) not null,
   ID_MED               varchar(10) not null,
   ID_ARM               varchar(10),
   LIBELLE              varchar(10),
   QTE                  int,
   CATEGORIE            varchar(10),
   PRIX_VENTE           int,
   primary key (ID_MED),
   constraint FK_REFERENCE_1 foreign key (CODE_FAMILLE)
      references FAMILLE_MED (CODE_FAMILLE) on delete restrict on update restrict,
   constraint FK_REFERENCE_2 foreign key (ID_ARM)
      references ARMOIRE (ID_ARM) on delete restrict on update restrict
);

/*==============================================================*/
/* Table : LIGNE_COMMANDE                                       */
/*==============================================================*/
create table LIGNE_COMMANDE
(
   NUM_COMM             varchar(10) not null,
   ID_MED               varchar(10),
   QTE                  int,
   PRIX_VENTE           int,
   primary key (NUM_COMM),
   constraint FK_REFERENCE_4 foreign key (NUM_COMM)
      references COMMANDE (NUM_COMM) on delete restrict on update restrict,
   constraint FK_REFERENCE_5 foreign key (ID_MED)
      references MEDICAMENT (ID_MED) on delete restrict on update restrict
);

/*==============================================================*/
/* Table : VENTE                                                */
/*==============================================================*/
create table VENTE
(
   ID_VENTE             varchar(10) not null,
   ID_MED               varchar(10),
   QTE                  int,
   DATE                 date,
   primary key (ID_VENTE),
   constraint FK_REFERENCE_3 foreign key (ID_MED)
      references MEDICAMENT (ID_MED) on delete restrict on update restrict
);

