ccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc
c      written by the UFO converter
ccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc

      DOUBLE PRECISION SQRT__AS,WSU5,MSL2,WSD2,WSL5,MSU5,MSU2,WSN2
     $ ,WSU2,RME22X2,RMD22X2,RMU22X2,RUU2X2,MSL5,RRU6X3,WSD5,RRL6X6
     $ ,RRL6X3,RML22X2,RRU6X6,RRD6X6,RVV2X1,MSD5,RMQ22X2,MSD2,RRD6X3
     $ ,RVV2X2,MSN2,RUU2X1,WSL2,I39X22,I94X22,I40X55,I41X22,CONJG__RU2X
     $ 2,RL4X4,I87X11,I85X11,I19X22,CONJG__RU1X1,I6X55,I95X22,I7X22
     $ ,I62X11,CONJG__RN3X3,I101X44,I20X44,I97X22,I39X11,I96X22,I13X44
     $ ,I41X11,CONJG__RD5X5,CONJG__RL2X2,I51X11,I5X11,CONJG__RD4X4
     $ ,I33X22,I63X44,I40X44,I26X44,RD1X1,I100X44,RN3X3,RL5X5,I6X44
     $ ,I102X44,RL1X1,RU4X4,I5X22,I27X11,I19X11,CONJG__RU4X4,I92X22
     $ ,CONJG__RN2X2,I96X11,I13X55,I20X55,I98X22,CONJG__RD1X1,I12X22
     $ ,RD2X2,I93X22,ATAN__TB,BETA,CW,SQRT__2,VS,CW__EXP__2,SW
     $ ,COS__BETA,SIN__BETA,SW__EXP__2,UP1X1__EXP__2,UP1X2__EXP__2
     $ ,UP2X1__EXP__2,UP2X2__EXP__2,US1X1__EXP__2,US1X2__EXP__2
     $ ,US2X1__EXP__2,US2X2__EXP__2,US3X1__EXP__2,US3X2__EXP__2
     $ ,NML__EXP__2,NMK__EXP__2,UP1X3__EXP__2,UP2X3__EXP__2,US1X3__EXP_
     $ _3,US1X3__EXP__2,US2X3__EXP__2,US2X3__EXP__3,US3X3__EXP__2
     $ ,US3X3__EXP__3,US1X1__EXP__3,US1X2__EXP__3,US2X1__EXP__3
     $ ,US2X2__EXP__3,US3X1__EXP__3,US3X2__EXP__3,EE,GP,GW,VEV,VD,VU
     $ ,EE__EXP__2,RRD3X3,RRD3X6,TB,MA2,RMD21X1,RMD23X3,RME21X1
     $ ,RME23X3,RML21X1,RML23X3,RMX1,RMX2,RMX3,MHD2,MHU2,RMQ21X1
     $ ,RMQ23X3,RMU21X1,RMU23X3,UP1X1,UP1X2,UP1X3,UP2X1,UP2X2,UP2X3
     $ ,US1X1,US1X2,US1X3,US2X1,US2X2,US2X3,US3X1,US3X2,US3X3,RNN1X1
     $ ,RNN1X2,RNN1X3,RNN1X4,RNN1X5,RNN2X1,RNN2X2,RNN2X3,RNN2X4,RNN2X5
     $ ,RNN3X1,RNN3X2,RNN3X3,RNN3X4,RNN3X5,RNN4X1,RNN4X2,RNN4X3,RNN4X4
     $ ,RNN4X5,RNN5X1,RNN5X2,RNN5X3,RNN5X4,RNN5X5,NML,NMK,NMAL,NMAK
     $ ,MUEFF,MS2,RRL3X3,RRL3X6,AEWM1,AS,RTD3X3,RTE3X3,RTU3X3,RUU1X1
     $ ,RUU1X2,RRU3X3,RRU3X6,RVV1X1,RVV1X2,RYD3X3,RYE3X3,RYU3X3

      COMMON/PARAMS_R/ SQRT__AS,WSU5,MSL2,WSD2,WSL5,MSU5,MSU2,WSN2
     $ ,WSU2,RME22X2,RMD22X2,RMU22X2,RUU2X2,MSL5,RRU6X3,WSD5,RRL6X6
     $ ,RRL6X3,RML22X2,RRU6X6,RRD6X6,RVV2X1,MSD5,RMQ22X2,MSD2,RRD6X3
     $ ,RVV2X2,MSN2,RUU2X1,WSL2,I39X22,I94X22,I40X55,I41X22,CONJG__RU2X
     $ 2,RL4X4,I87X11,I85X11,I19X22,CONJG__RU1X1,I6X55,I95X22,I7X22
     $ ,I62X11,CONJG__RN3X3,I101X44,I20X44,I97X22,I39X11,I96X22,I13X44
     $ ,I41X11,CONJG__RD5X5,CONJG__RL2X2,I51X11,I5X11,CONJG__RD4X4
     $ ,I33X22,I63X44,I40X44,I26X44,RD1X1,I100X44,RN3X3,RL5X5,I6X44
     $ ,I102X44,RL1X1,RU4X4,I5X22,I27X11,I19X11,CONJG__RU4X4,I92X22
     $ ,CONJG__RN2X2,I96X11,I13X55,I20X55,I98X22,CONJG__RD1X1,I12X22
     $ ,RD2X2,I93X22,ATAN__TB,BETA,CW,SQRT__2,VS,CW__EXP__2,SW
     $ ,COS__BETA,SIN__BETA,SW__EXP__2,UP1X1__EXP__2,UP1X2__EXP__2
     $ ,UP2X1__EXP__2,UP2X2__EXP__2,US1X1__EXP__2,US1X2__EXP__2
     $ ,US2X1__EXP__2,US2X2__EXP__2,US3X1__EXP__2,US3X2__EXP__2
     $ ,NML__EXP__2,NMK__EXP__2,UP1X3__EXP__2,UP2X3__EXP__2,US1X3__EXP_
     $ _3,US1X3__EXP__2,US2X3__EXP__2,US2X3__EXP__3,US3X3__EXP__2
     $ ,US3X3__EXP__3,US1X1__EXP__3,US1X2__EXP__3,US2X1__EXP__3
     $ ,US2X2__EXP__3,US3X1__EXP__3,US3X2__EXP__3,EE,GP,GW,VEV,VD,VU
     $ ,EE__EXP__2,RRD3X3,RRD3X6,TB,MA2,RMD21X1,RMD23X3,RME21X1
     $ ,RME23X3,RML21X1,RML23X3,RMX1,RMX2,RMX3,MHD2,MHU2,RMQ21X1
     $ ,RMQ23X3,RMU21X1,RMU23X3,UP1X1,UP1X2,UP1X3,UP2X1,UP2X2,UP2X3
     $ ,US1X1,US1X2,US1X3,US2X1,US2X2,US2X3,US3X1,US3X2,US3X3,RNN1X1
     $ ,RNN1X2,RNN1X3,RNN1X4,RNN1X5,RNN2X1,RNN2X2,RNN2X3,RNN2X4,RNN2X5
     $ ,RNN3X1,RNN3X2,RNN3X3,RNN3X4,RNN3X5,RNN4X1,RNN4X2,RNN4X3,RNN4X4
     $ ,RNN4X5,RNN5X1,RNN5X2,RNN5X3,RNN5X4,RNN5X5,NML,NMK,NMAL,NMAK
     $ ,MUEFF,MS2,RRL3X3,RRL3X6,AEWM1,AS,RTD3X3,RTE3X3,RTU3X3,RUU1X1
     $ ,RUU1X2,RRU3X3,RRU3X6,RVV1X1,RVV1X2,RYD3X3,RYE3X3,RYU3X3


      DOUBLE COMPLEX G__EXP__2,MD21X1,MD22X2,MD23X3,ME21X1,ME22X2
     $ ,ME23X3,ML21X1,ML22X2,ML23X3,MQ21X1,MQ22X2,MQ23X3,MU21X1,MU22X2
     $ ,MU23X3,MX1,MX2,MX3,NN1X1,NN1X2,NN1X3,NN1X4,NN1X5,NN2X1,NN2X2
     $ ,NN2X3,NN2X4,NN2X5,NN3X1,NN3X2,NN3X3,NN3X4,NN3X5,NN4X1,NN4X2
     $ ,NN4X3,NN4X4,NN4X5,NN5X1,NN5X2,NN5X3,NN5X4,NN5X5,RD3X3,RD3X6
     $ ,RD6X3,RD6X6,RL3X3,RL3X6,RL6X3,RL6X6,RU3X3,RU3X6,RU6X3,RU6X6
     $ ,UU1X1,UU1X2,UU2X1,UU2X2,VV1X1,VV1X2,VV2X1,VV2X2,TD3X3,TE3X3
     $ ,TU3X3,YD3X3,YE3X3,YU3X3,CONJG__YU3X3,I1X33,CONJG__YD3X3,I10X33
     $ ,I10X36,CONJG__RD3X6,I100X33,I100X36,CONJG__RD6X6,I100X63
     $ ,I100X66,CONJG__RL3X6,I101X33,I101X36,CONJG__RL6X6,I101X63
     $ ,I101X66,CONJG__RU3X6,I102X33,I102X36,CONJG__RU6X6,I102X63
     $ ,I102X66,I11X33,I11X36,CONJG__RD3X3,I12X33,I12X36,CONJG__RD6X3
     $ ,I12X63,I12X66,I13X33,I13X36,I13X63,I13X66,I14X33,I15X33
     $ ,CONJG__YE3X3,I16X33,I17X33,I17X36,CONJG__RL3X3,I18X33
     $ ,CONJG__RL6X3,I18X36,I19X33,I19X36,I19X63,I19X66,I2X33,I20X33
     $ ,I20X36,I20X63,I20X66,I21X33,I21X36,I22X33,I22X36,I23X33,I23X36
     $ ,I24X33,I24X36,I25X33,I25X36,I25X63,I25X66,I26X33,I26X36,I26X63
     $ ,I26X66,I27X33,I27X36,I28X33,I28X36,I29X33,I29X36,I3X33,I3X36
     $ ,I30X33,I30X36,I32X33,I33X33,I33X36,I34X33,I34X36,CONJG__TE3X3
     $ ,I35X33,I35X36,I36X33,I36X36,I37X33,I37X36,CONJG__RU3X3,I38X33
     $ ,CONJG__RU6X3,I38X36,I39X33,I39X36,I39X63,I39X66,I4X33,I4X36
     $ ,I40X33,I40X36,I40X63,I40X66,I41X33,I41X36,I41X63,I41X66
     $ ,CONJG__TU3X3,I42X33,I42X36,I42X63,I42X66,I43X33,I43X36,I43X63
     $ ,I43X66,I44X33,I44X36,I44X63,I44X66,I45X33,I45X36,I45X63,I45X66
     $ ,I46X33,I46X36,I46X63,I46X66,I47X33,I47X36,I47X63,I47X66,I48X33
     $ ,I48X36,I48X63,I48X66,I49X33,I49X36,I5X33,I5X36,I5X63,I5X66
     $ ,I50X33,I50X36,I51X33,I51X36,I52X33,I52X36,I53X33,I53X36,I54X33
     $ ,I54X36,I54X63,I54X66,I55X33,I55X36,I55X63,I55X66,CONJG__TD3X3
     $ ,I56X33,I56X36,I56X63,I56X66,I57X33,I57X36,I57X63,I57X66,I58X33
     $ ,I58X36,I58X63,I58X66,I59X33,I59X36,I59X63,I59X66,I6X33,I6X36
     $ ,I6X63,I6X66,I60X33,I60X36,I60X63,I60X66,I61X33,I61X36,I61X63
     $ ,I61X66,I62X33,I62X36,I62X63,I62X66,I63X33,I63X36,I63X63,I63X66
     $ ,I64X33,I64X36,I64X63,I64X66,I65X33,I65X36,I65X63,I65X66,I66X33
     $ ,I66X36,I66X63,I66X66,I67X33,I67X36,I67X63,I67X66,I68X33,I68X36
     $ ,I68X63,I68X66,I69X33,I69X36,I69X63,I69X66,I7X33,I7X36,I70X33
     $ ,I70X36,I70X63,I70X66,I71X33,I71X36,I71X63,I71X66,I72X33,I72X36
     $ ,I72X63,I72X66,I73X33,I73X36,I73X63,I73X66,I74X33,I74X36,I74X63
     $ ,I74X66,I75X33,I75X36,I75X63,I75X66,I76X33,I76X36,I76X63,I76X66
     $ ,I77X33,I77X36,I77X63,I77X66,I78X33,I78X36,I78X63,I78X66,I79X33
     $ ,I79X36,I79X63,I79X66,I8X33,I8X36,I80X33,I80X36,I80X63,I80X66
     $ ,I81X33,I81X36,I81X63,I81X66,I82X33,I82X36,I83X33,I83X36,I84X33
     $ ,I84X36,I85X33,I85X36,I86X33,I86X36,I88X33,I89X33,I89X36,I9X33
     $ ,I9X36,I90X33,I90X36,I91X33,I91X36,I92X33,I92X36,I92X63,I92X66
     $ ,I93X33,I93X36,I94X33,I94X36,I94X63,I94X66,I95X33,I95X36,I96X33
     $ ,I96X36,I96X63,I96X66,I97X33,I97X36,I97X63,I97X66,I98X33,I98X36
     $ ,I98X63,I98X66,I99X33,COMPLEXI,NN1X5__EXP__2,NN2X5__EXP__2
     $ ,NN3X5__EXP__2,NN4X5__EXP__2,NN5X5__EXP__2,CONJG__NN1X1
     $ ,CONJG__NN1X2,CONJG__NN1X3,CONJG__NN1X4,CONJG__NN1X5,CONJG__NN2X
     $ 1,CONJG__NN2X2,CONJG__NN2X3,CONJG__NN2X4,CONJG__NN2X5,CONJG__NN3
     $ X1,CONJG__NN3X2,CONJG__NN3X3,CONJG__NN3X4,CONJG__NN3X5
     $ ,CONJG__NN4X1,CONJG__NN4X2,CONJG__NN4X3,CONJG__NN4X4,CONJG__NN4X
     $ 5,CONJG__NN5X1,CONJG__NN5X2,CONJG__NN5X3,CONJG__NN5X4,CONJG__NN5
     $ X5,CONJG__UU1X1,CONJG__UU1X2,CONJG__UU2X1,CONJG__UU2X2
     $ ,CONJG__VV1X1,CONJG__VV1X2,CONJG__VV2X1,CONJG__VV2X2

      COMMON/PARAMS_C/ G__EXP__2,MD21X1,MD22X2,MD23X3,ME21X1,ME22X2
     $ ,ME23X3,ML21X1,ML22X2,ML23X3,MQ21X1,MQ22X2,MQ23X3,MU21X1,MU22X2
     $ ,MU23X3,MX1,MX2,MX3,NN1X1,NN1X2,NN1X3,NN1X4,NN1X5,NN2X1,NN2X2
     $ ,NN2X3,NN2X4,NN2X5,NN3X1,NN3X2,NN3X3,NN3X4,NN3X5,NN4X1,NN4X2
     $ ,NN4X3,NN4X4,NN4X5,NN5X1,NN5X2,NN5X3,NN5X4,NN5X5,RD3X3,RD3X6
     $ ,RD6X3,RD6X6,RL3X3,RL3X6,RL6X3,RL6X6,RU3X3,RU3X6,RU6X3,RU6X6
     $ ,UU1X1,UU1X2,UU2X1,UU2X2,VV1X1,VV1X2,VV2X1,VV2X2,TD3X3,TE3X3
     $ ,TU3X3,YD3X3,YE3X3,YU3X3,CONJG__YU3X3,I1X33,CONJG__YD3X3,I10X33
     $ ,I10X36,CONJG__RD3X6,I100X33,I100X36,CONJG__RD6X6,I100X63
     $ ,I100X66,CONJG__RL3X6,I101X33,I101X36,CONJG__RL6X6,I101X63
     $ ,I101X66,CONJG__RU3X6,I102X33,I102X36,CONJG__RU6X6,I102X63
     $ ,I102X66,I11X33,I11X36,CONJG__RD3X3,I12X33,I12X36,CONJG__RD6X3
     $ ,I12X63,I12X66,I13X33,I13X36,I13X63,I13X66,I14X33,I15X33
     $ ,CONJG__YE3X3,I16X33,I17X33,I17X36,CONJG__RL3X3,I18X33
     $ ,CONJG__RL6X3,I18X36,I19X33,I19X36,I19X63,I19X66,I2X33,I20X33
     $ ,I20X36,I20X63,I20X66,I21X33,I21X36,I22X33,I22X36,I23X33,I23X36
     $ ,I24X33,I24X36,I25X33,I25X36,I25X63,I25X66,I26X33,I26X36,I26X63
     $ ,I26X66,I27X33,I27X36,I28X33,I28X36,I29X33,I29X36,I3X33,I3X36
     $ ,I30X33,I30X36,I32X33,I33X33,I33X36,I34X33,I34X36,CONJG__TE3X3
     $ ,I35X33,I35X36,I36X33,I36X36,I37X33,I37X36,CONJG__RU3X3,I38X33
     $ ,CONJG__RU6X3,I38X36,I39X33,I39X36,I39X63,I39X66,I4X33,I4X36
     $ ,I40X33,I40X36,I40X63,I40X66,I41X33,I41X36,I41X63,I41X66
     $ ,CONJG__TU3X3,I42X33,I42X36,I42X63,I42X66,I43X33,I43X36,I43X63
     $ ,I43X66,I44X33,I44X36,I44X63,I44X66,I45X33,I45X36,I45X63,I45X66
     $ ,I46X33,I46X36,I46X63,I46X66,I47X33,I47X36,I47X63,I47X66,I48X33
     $ ,I48X36,I48X63,I48X66,I49X33,I49X36,I5X33,I5X36,I5X63,I5X66
     $ ,I50X33,I50X36,I51X33,I51X36,I52X33,I52X36,I53X33,I53X36,I54X33
     $ ,I54X36,I54X63,I54X66,I55X33,I55X36,I55X63,I55X66,CONJG__TD3X3
     $ ,I56X33,I56X36,I56X63,I56X66,I57X33,I57X36,I57X63,I57X66,I58X33
     $ ,I58X36,I58X63,I58X66,I59X33,I59X36,I59X63,I59X66,I6X33,I6X36
     $ ,I6X63,I6X66,I60X33,I60X36,I60X63,I60X66,I61X33,I61X36,I61X63
     $ ,I61X66,I62X33,I62X36,I62X63,I62X66,I63X33,I63X36,I63X63,I63X66
     $ ,I64X33,I64X36,I64X63,I64X66,I65X33,I65X36,I65X63,I65X66,I66X33
     $ ,I66X36,I66X63,I66X66,I67X33,I67X36,I67X63,I67X66,I68X33,I68X36
     $ ,I68X63,I68X66,I69X33,I69X36,I69X63,I69X66,I7X33,I7X36,I70X33
     $ ,I70X36,I70X63,I70X66,I71X33,I71X36,I71X63,I71X66,I72X33,I72X36
     $ ,I72X63,I72X66,I73X33,I73X36,I73X63,I73X66,I74X33,I74X36,I74X63
     $ ,I74X66,I75X33,I75X36,I75X63,I75X66,I76X33,I76X36,I76X63,I76X66
     $ ,I77X33,I77X36,I77X63,I77X66,I78X33,I78X36,I78X63,I78X66,I79X33
     $ ,I79X36,I79X63,I79X66,I8X33,I8X36,I80X33,I80X36,I80X63,I80X66
     $ ,I81X33,I81X36,I81X63,I81X66,I82X33,I82X36,I83X33,I83X36,I84X33
     $ ,I84X36,I85X33,I85X36,I86X33,I86X36,I88X33,I89X33,I89X36,I9X33
     $ ,I9X36,I90X33,I90X36,I91X33,I91X36,I92X33,I92X36,I92X63,I92X66
     $ ,I93X33,I93X36,I94X33,I94X36,I94X63,I94X66,I95X33,I95X36,I96X33
     $ ,I96X36,I96X63,I96X66,I97X33,I97X36,I97X63,I97X66,I98X33,I98X36
     $ ,I98X63,I98X66,I99X33,COMPLEXI,NN1X5__EXP__2,NN2X5__EXP__2
     $ ,NN3X5__EXP__2,NN4X5__EXP__2,NN5X5__EXP__2,CONJG__NN1X1
     $ ,CONJG__NN1X2,CONJG__NN1X3,CONJG__NN1X4,CONJG__NN1X5,CONJG__NN2X
     $ 1,CONJG__NN2X2,CONJG__NN2X3,CONJG__NN2X4,CONJG__NN2X5,CONJG__NN3
     $ X1,CONJG__NN3X2,CONJG__NN3X3,CONJG__NN3X4,CONJG__NN3X5
     $ ,CONJG__NN4X1,CONJG__NN4X2,CONJG__NN4X3,CONJG__NN4X4,CONJG__NN4X
     $ 5,CONJG__NN5X1,CONJG__NN5X2,CONJG__NN5X3,CONJG__NN5X4,CONJG__NN5
     $ X5,CONJG__UU1X1,CONJG__UU1X2,CONJG__UU2X1,CONJG__UU2X2
     $ ,CONJG__VV1X1,CONJG__VV1X2,CONJG__VV2X1,CONJG__VV2X2


