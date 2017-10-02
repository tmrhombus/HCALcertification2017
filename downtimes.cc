// Simple script for HCAL downtime
// calculations and pie chart plotting

#include <stdio.h> // for printf

void downtimes(){

 printf("\n\n");

 //
 //Downtimes as reported in certification reports
 // from HCAL OPS (Monday) meetings
 // thanks Pavel
 ////////////////////////
 
 ///// Individual weeks
 // Week 24
 float wk24_cmsrecorded = 1289.38;
 float  wk24_HFSEU = 27.65;
 float wk24_totalloss = wk24_HFSEU;
  // assuming all from HF SEU - probably not true
 
 // Week 25
 float wk25_cmsrecorded = 2635.9;
 float  wk25_LV_297359 = 27;  // HFM05 LV           http://cmsonline.cern.ch/cms-elog/992675
 float  wk25_HV_297432 = 2.5; // HEP18 voltage drop http://cmsonline.cern.ch/cms-elog/993024
 float  wk25_HV_297467 = 5;   // HEM05 voltage drop http://cmsonline.cern.ch/cms-elog/993047
 float  wk25_HV_297474 = 6.3; // HEM05 voltage drop http://cmsonline.cern.ch/cms-elog/993129
 float  wk25_X_297659  = 3.2; // high rate
 float  wk25_HFSEU     = 35;
 float wk25_totalloss =
        wk25_LV_297359+ 
        wk25_HV_297432+ 
        wk25_HV_297467+ 
        wk25_HV_297474+ 
        wk25_X_297659 + 
        wk25_HFSEU    ; // = 79;
 
 // Week 26
 float wk26_cmsrecorded = 564.51;
 float  wk26_HV_297656 = 18.42; // HEM05 / HEM14 HV 
           // http://cmsonline.cern.ch/cms-elog/993954
           // http://cmsonline.cern.ch/cms-elog/993971
 float  wk26_HV_297722 = 2.72;  // HEM05 HV http://cmsonline.cern.ch/cms-elog/994300
 float  wk26_HFSEU     = 23.41 ;
 float wk26_totalloss = 
        wk26_HV_297656+
        wk26_HV_297722+
        wk26_HFSEU    ; // = 44.55;

 // Week 27
 float wk27_cmsrecorded = 197.4;
 float  wk27_HFSEU = 5.03; 
 float wk27_totalloss =  wk27_HFSEU;
 
 // MD1 / TS1 week 26/27

 // Week 28
 float wk28_cmsrecorded = 1199.2;
 float  wk28_HV_299065 = 1.74; // HBM03 HV http://cmsonline.cern.ch/cms-elog/997111
 float  wk28_HFSEU     = 0.46; 
 float wk28_totalloss = 
        wk28_HV_299065+
        wk28_HFSEU    ; // = 2.2;
 
 // Week 29
 float wk29_cmsrecorded = 1158.7;
 float  wk29_HV_299443       = 30.68; // HEP04 / HEM05 HV 
 float  wk29_HV_299481       = 4.85;  // HEP04 / HEM05 HV 
 float  wk29_ngFEC_299592    = 49.2;  // peltier loss, FEC reset on HEP17
 float  wk29_HV_299649       = 33.62; // HEP04 / HEM05 HV 
 float  wk29_other           = 0.12;  // reported downtime is 118.47
 float  wk29_HFSEU           = 0.;    // NO HF SEU THIS TIME
 float wk29_totalloss    =
        wk29_HV_299443   +
        wk29_HV_299481   +
        wk29_ngFEC_299592+
        wk29_HV_299649   +
        wk29_other       +
        wk29_HFSEU       ; // = 118.47;
 
 // Week 30 MD2
 // No beam, replaced HF power supplies

 // Week 31
 float wk31_cmsrecorded = 3026.36;
 float  wk31_BD_300087 = 0.2;  // HO bad data
 float  wk31_BD_300240 = 0.46; // bad data - crates 20,24,30
 float  wk31_HV_300517 = 18.2; // HEM01 HV off
 float  wk31_HFSEU     = 0.;   // NO HF SEU
 float wk31_totalloss =
        wk31_BD_300087+ 
        wk31_BD_300240+ 
        wk31_HV_300517+ 
        wk31_HFSEU    ; // = 18.86;
 
 // Week 32
 float wk32_cmsrecorded = 1725.5;
 float  wk32_HV_299996 = 0.01; // HEP18 HV (low PU run)
 float  wk32_HV_300515 = 25.8; // HBM03 HV
 float  wk32_HV_300560 = 0.43; // HBM03 HV
 float  wk32_DCS       = 1.;   // HBHEb DCS
 float  wk32_HFSEU     = 5.11; // run 300464
 float  wk32_other     = 0.25;  // total loss is reported as 32.6
 float wk32_totalloss =
        wk32_HV_299996+
        wk32_HV_300515+
        wk32_HV_300560+
        wk32_DCS      +
        wk32_HFSEU    +
        wk32_other    ; // = 32.6;
 
  // Week 33
 float wk33_cmsrecorded = 2136.46;
 float  wk33_HV_301524 = 1.03; // HBP04 HV trip
 float  wk33_HV        = 0.62; // HBP04 HV trip
 float  wk33_HFSEU     = 0.52; // run 301447
 float wk33_totalloss =
        wk33_HV_301524+
        wk33_HV       +
        wk33_HFSEU    ; // = 2.17;

  // Week 34
 float wk34_cmsrecorded = 1825.3;
 float  wk34_HV_300785 = 2.74; // HBP05 HV trip
 float  wk34_HV_300817 = 7;    // HBP04 HV trip, bad data burst
 float  wk34_HFSEU     = 0.35; // HF SEU
 float wk34_totalloss =
        wk34_HV_300785+
        wk34_HV_300817+
        wk34_HFSEU    ; // = 10.1;

  // Week 35
 float wk35_cmsrecorded = 1735.54;
 float  wk35_HF_302031 = 0.62; // HF high amplitudes
 float  wk35_LV_302277 = 0.7;  // HF LV + CapID
 float wk35_totalloss =
        wk35_HF_302031+
        wk35_LV_302277; // = 1.32;
 
  // Week 36
 float wk36_cmsrecorded = 2493.1;
 float  wk36_HF_302344 = 0.01; // HF high amplitudes, Fed 1121 issue
 float  wk36_HV_302388 = 1.25; // HEP01 HEP18 HV trip
 float  wk36_LV_302448 = 1.6;  // LV powercycle, Fed1121
 float  wk36_HV_302479 = 0.46; // HBP07 HV trip
 float  wk36_HV_302573 = 5.42; // HEM14 HV trip
 float  wk36_HO_302596 = 0.74; // HO high amplitudes, CapID errors
 float wk36_totalloss =
        wk36_HF_302344+
        wk36_HV_302388+
        wk36_LV_302448+
        wk36_HV_302479+
        wk36_HV_302573+
        wk36_HO_302596; // = 9.48;
 
  // MD3 / TS2 week 37/38

  // Week 37 
 float wk37_cmsrecorded = 247.;
 float wk37_totalloss = 0.; // no losses this week

  // Week 38
 float wk38_cmsrecorded = 451.;
 float  wk38_LV_302634 = 0.68; 
 float wk38_totalloss = wk38_LV_302634; 


 ///// Calculate sums up to week 36
 // Total LHC delivered luminosity 
 float total_cmsrecorded =
  wk24_cmsrecorded 
  + wk25_cmsrecorded 
  + wk26_cmsrecorded 
  + wk27_cmsrecorded 
  + wk28_cmsrecorded 
  + wk29_cmsrecorded 
  + wk31_cmsrecorded 
  + wk32_cmsrecorded 
  + wk33_cmsrecorded 
  + wk34_cmsrecorded 
  + wk35_cmsrecorded 
  + wk36_cmsrecorded 
  + wk37_cmsrecorded 
  + wk38_cmsrecorded ;
 
 // HCAL total losses before ps exchange
 float total_HCALloss_before =
  wk24_totalloss 
  + wk25_totalloss 
  + wk26_totalloss 
  + wk27_totalloss 
  + wk28_totalloss 
  + wk29_totalloss ;
 // HCAL total losses after ps exchange
 float total_HCALloss_after =
  wk31_totalloss 
  + wk32_totalloss 
  + wk33_totalloss 
  + wk34_totalloss 
  + wk35_totalloss 
  + wk36_totalloss 
  + wk37_totalloss 
  + wk38_totalloss ;
 // HCAL total losses
 float total_HCALloss =
  total_HCALloss_before + total_HCALloss_after ;
 

 // HF SEU losses before ps exchange
 float HFSEU_beforereplace = 
  wk24_HFSEU  
  + wk25_HFSEU  
  + wk26_HFSEU
  + wk27_HFSEU
  + wk28_HFSEU ;
 // HF SEU losses after ps exchange
 float HFSEU_afterreplace = 
  wk32_HFSEU
  + wk33_HFSEU 
  + wk34_HFSEU ;
 // Total HF SEU losses
 float total_HFSEU = HFSEU_beforereplace + HFSEU_afterreplace;


 //  Low Voltage trips
 float total_LV =
        wk25_LV_297359    + // HFM05 LV http://cmsonline.cern.ch/cms-elog/992675
        wk35_LV_302277    + // HF LV + CapID
        wk36_LV_302448    + // LV powercycle, Fed1121
        wk38_LV_302634    ; // LV 
 //  High Voltage trips
 float total_HV =
        wk25_HV_297432    + // HEP18 HV http://cmsonline.cern.ch/cms-elog/993024
        wk25_HV_297467    + // HEM05 HV http://cmsonline.cern.ch/cms-elog/993047
        wk25_HV_297474    + // HEM05 HV http://cmsonline.cern.ch/cms-elog/993129
        wk26_HV_297656    + // HEM05 / HEM14 HV 
        wk26_HV_297722    + // HEM05 HV http://cmsonline.cern.ch/cms-elog/994300
        wk28_HV_299065    + // HBM03 HV http://cmsonline.cern.ch/cms-elog/997111
        wk29_HV_299443    + // HEP04 / HEM05 HV 
        wk29_HV_299481    + // HEP04 / HEM05 HV 
        wk29_HV_299649    + // HEP04 / HEM05 HV 
        wk31_HV_300517    + // HEM01 HV off
        wk32_HV_299996    + // HEP18 HV (low PU run)
        wk32_HV_300515    + // HBM03 HV
        wk32_HV_300560    + // HBM03 HV
        wk33_HV_301524    + // HBP04 HV trip
        wk33_HV           + // HBP04 HV trip
        wk34_HV_300785    + // HBP05 HV trip
        wk34_HV_300817    + // HBP04 HV trip, bad data burst
        wk36_HV_302388    + // HEP01 HEP18 HV trip
        wk36_HV_302479    + // HBP07 HV trip
        wk36_HV_302573    ; // HEM14 HV trip
 //   Other DCS issues
 float total_otherDCS =
        wk32_DCS          ; // HBHEb DCS
 //  Total DCS issues
 float total_DCS = total_LV + total_HV + total_otherDCS;

 //  ngFEC 
 float total_ngFEC =
        wk29_ngFEC_299592 ; // peltier loss, FEC reset on HEP17
 //  Bad Data
 float total_BadData =
        wk25_X_297659     + // high rate
        wk31_BD_300087    + // HO bad data
        wk31_BD_300240    + // bad data - crates 20,24,30
        wk35_HF_302031    + // HF high amplitudes
        wk36_HF_302344    + // HF high amplitudes, Fed 1121 issue
        wk36_HO_302596    ; // HO high amplitudes, CapID errors

 //   Other losses
 float total_Other =
        wk29_other        + // reported downtime is 118.47
        wk32_other        ;  // total loss is reported as 32.6

 
 ///// Calculations and printouts
 // Variables available---------
 // total_cmsrecorded    
 // total_HCALloss        
 // total_HCALloss_before 
 // total_HCALloss_after  
 // HFSEU_beforereplace   
 // HFSEU_afterreplace    
 // total_HFSEU           
 // total_LV              
 // total_HV              
 // total_otherDCS        
 // total_DCS             
 // total_ngFEC           
 // total_BadData         
 // total_Other           

 // LHC total integrated luminosity
 printf("CMS recorded lumi:  %5.1f /pb \n", total_cmsrecorded);

 // Total percent loss by HCAL
 float pctloss_totalHCAL_on_LHC = 100.*total_HCALloss/total_cmsrecorded ;
 printf("HCAL total loss: %5.1f /pb (%5.1f %%LHC) \n", total_HCALloss, pctloss_totalHCAL_on_LHC);

 printf("\n");

 // HF SEU Calculations
 // HFSEU losses with total HCAL loss as denominator
 float pctloss_HFSEU  = 100.*total_HFSEU / total_HCALloss;
 float pctloss_HFSEUb = 100.*HFSEU_beforereplace / total_HCALloss;
 float pctloss_HFSEUa = 100.*HFSEU_afterreplace  / total_HCALloss;
 float pctrelloss_HFSEUb = 100.*HFSEU_beforereplace / total_HCALloss_before;
 float pctrelloss_HFSEUa = 100.*HFSEU_afterreplace  / total_HCALloss_after;

 printf("HF SEU total loss: %5.1f /pb\n", total_HFSEU);
 printf(" before replacement %5.1f /pb\n after %5.1f /pb\n",
  HFSEU_beforereplace , HFSEU_afterreplace );
 printf(" All SEU losses wrt HCAL total %5.1f/%5.1f = %5.1f %%\n",
   total_HFSEU, total_HCALloss, pctloss_HFSEU );
 printf("  before replacement %5.1f/%5.1f = %5.1f%% \n",
   HFSEU_beforereplace, total_HCALloss, pctloss_HFSEUb);
 printf("  after replacement  %5.1f/%5.1f = %5.1f%% \n",
   HFSEU_afterreplace , total_HCALloss, pctloss_HFSEUa);

 // HFSEU losses with era HCAL loss as denominator
 printf(" SEU losses calculated wrt 'era'\n");
 printf("  before replacement %5.1f/%5.1f = %5.1f%% \n",
   HFSEU_beforereplace, total_HCALloss_before, pctrelloss_HFSEUb);
 printf("  after replacement  %5.1f/%5.1f = %5.1f%% \n",
   HFSEU_afterreplace , total_HCALloss_after,  pctrelloss_HFSEUa);

 printf("\n\n");

 // 

 printf("HCAL Loss breakdown  \n");
 printf(" total_HFSEU    %5.1f /pb \n", total_HFSEU    );       
 printf(" total_LV       %5.1f /pb \n", total_LV       );       
 printf(" total_HV       %5.1f /pb \n", total_HV       );       
 printf(" total_otherDCS %5.1f /pb \n", total_otherDCS );       
 printf(" total_DCS      %5.1f /pb \n", total_DCS      );       
 printf(" total_ngFEC    %5.1f /pb \n", total_ngFEC    );       
 printf(" total_BadData  %5.1f /pb \n", total_BadData  );       
 printf(" total_Other    %5.1f /pb \n", total_Other    ); 
 float total_HCALcrosscheck = 
  total_HFSEU    +       
  total_LV       +       
  total_HV       +       
  total_otherDCS +       
  total_ngFEC    +       
  total_BadData  +       
  total_Other    ; 
 printf(" Total HCAL = %5.1f = %5.1f /pb \n",
  total_HCALloss, total_HCALcrosscheck);
 printf(" DCS %5.1f = %5.1f /pb \n",
  total_DCS      ,
  total_LV       +       
  total_HV       +       
  total_otherDCS );

 printf(" Weekly Breakdown\n");
  printf("  week 24 %5.1f /pb \n", wk24_totalloss);
  printf("  week 25 %5.1f /pb \n", wk25_totalloss);
  printf("  week 26 %5.1f /pb \n", wk26_totalloss);
  printf("  week 27 %5.1f /pb \n", wk27_totalloss);
  printf("  week 28 %5.1f /pb \n", wk28_totalloss);
  printf("  week 29 %5.1f /pb \n", wk29_totalloss);
  printf("  week 31 %5.1f /pb \n", wk31_totalloss);
  printf("  week 32 %5.1f /pb \n", wk32_totalloss);
  printf("  week 33 %5.1f /pb \n", wk33_totalloss);
  printf("  week 34 %5.1f /pb \n", wk34_totalloss);
  printf("  week 35 %5.1f /pb \n", wk35_totalloss);
  printf("  week 36 %5.1f /pb \n", wk36_totalloss);
  printf("  week 37 %5.1f /pb \n", wk37_totalloss);
  printf("  week 38 %5.1f /pb \n", wk38_totalloss);


 ///// Make Pie Charts
 /////////////////////

 // Canvas 
 TCanvas* cpie = new TCanvas("canvas","canvas",1000,600);
 // Circle will be in pad1 - pad1 must be square
 TPad *pad1 = new TPad("pad1", "pad1", 0., 0., 0.6, 1.0);
 pad1->Draw();             // Draw the left pad
 cpie->cd();
 // Legend will be in pad2
 TPad *pad2 = new TPad("pad1", "pad1", 0.6, 0.0, 1.0, 1.0);
 pad2->Draw();             // Draw the right pad
 cpie->cd();

 ///// HCAL vs LHC
 float vals_hcal_cms[] = { total_cmsrecorded-total_HCALloss, total_HCALloss };
 int   cols_hcal_cms[] = { 
  TColor::GetColor("#66c2a5"),
  TColor::GetColor("#9e0142"),
 };
 int   nval_hcal_cms   = sizeof(vals_hcal_cms)/sizeof(vals_hcal_cms[0]);

 TPie *pie_hcal_cms = new TPie("pie_hcal_cms",
    "CMS recorded luminosity and HCAL losses",nval_hcal_cms,vals_hcal_cms,cols_hcal_cms);

 pie_hcal_cms->SetLabelFormat("");
 pie_hcal_cms->SetCircle(.5,.5,.4);
 pie_hcal_cms->SetEntryLabel(0,"CMS recorded lumi");
 pie_hcal_cms->SetEntryLabel(1,"HCAL total losses");
 pie_hcal_cms->SetEntryLineWidth(0,3);
 pie_hcal_cms->SetEntryLineWidth(1,3);
 TLegend *leg_hcal_cms = pie_hcal_cms->MakeLegend();

 pad1->cd();
 pie_hcal_cms->Draw("");
 pad2->cd();
 leg_hcal_cms->SetX1(0.); leg_hcal_cms->SetX2(1.);
 leg_hcal_cms->SetY1(0.5); leg_hcal_cms->SetY2(1.);
 leg_hcal_cms->SetBorderSize(0);
 leg_hcal_cms->Draw();

 cpie->cd();
 cpie->SaveAs("./pie_hcal_cms.png");
 pad1->Clear();
 pad2->Clear();

 ///// HCAL downtime by week
 float vals_hcal_totalbyweek[] = {
  wk24_totalloss,
  wk25_totalloss,
  wk26_totalloss,
  wk27_totalloss,
  wk28_totalloss,
  wk29_totalloss,
  wk31_totalloss,
  wk32_totalloss,
  wk33_totalloss,
  wk34_totalloss,
  wk35_totalloss,
  wk36_totalloss,
  wk37_totalloss,
  wk38_totalloss 
 };
 int cols_hcal_totalbyweek[] = {
  TColor::GetColor("#9e0142"), // red1
  TColor::GetColor("#d53e4f"), // red2
  TColor::GetColor("#f46d43"), // orange1
  TColor::GetColor("#fdae61"), // orange2
  TColor::GetColor("#fee08b"), // orange3
  TColor::GetColor("#ffffbf"), // yellow1
  TColor::GetColor("#e6f598"), // yellow2
  TColor::GetColor("#abdda4"), // green1
  TColor::GetColor("#66c2a5"), // green2
  TColor::GetColor("#3288bd"), // blue
  TColor::GetColor("#5e4fa2"), // purple1
  TColor::GetColor("#2d004b"), // purple2
  37,
  38
 };

 int   nval_hcal_totalbyweek   = sizeof(vals_hcal_totalbyweek)/sizeof(vals_hcal_totalbyweek[0]);

 TPie *pie_hcal_totalbyweek = new TPie("pie_hcal_totalbyweek",
    "HCAL total losses by week",
     nval_hcal_totalbyweek,
     vals_hcal_totalbyweek,
     cols_hcal_totalbyweek);

 pie_hcal_totalbyweek->SetLabelFormat("");
 pie_hcal_totalbyweek->SetCircle(.5,.5,.4);
 pie_hcal_totalbyweek->SetEntryLabel(0 ,"week 24");
 pie_hcal_totalbyweek->SetEntryLabel(1 ,"week 25");
 pie_hcal_totalbyweek->SetEntryLabel(2 ,"week 26");
 pie_hcal_totalbyweek->SetEntryLabel(3 ,"week 27");
 pie_hcal_totalbyweek->SetEntryLabel(4 ,"week 28");
 pie_hcal_totalbyweek->SetEntryLabel(5 ,"week 29");
 pie_hcal_totalbyweek->SetEntryLabel(6 ,"week 31");
 pie_hcal_totalbyweek->SetEntryLabel(7 ,"week 32");
 pie_hcal_totalbyweek->SetEntryLabel(8 ,"week 33");
 pie_hcal_totalbyweek->SetEntryLabel(9 ,"week 34");
 pie_hcal_totalbyweek->SetEntryLabel(10,"week 35");
 pie_hcal_totalbyweek->SetEntryLabel(11,"week 36");
 pie_hcal_totalbyweek->SetEntryLabel(12,"week 37");
 pie_hcal_totalbyweek->SetEntryLabel(13,"week 38");
 pie_hcal_totalbyweek->SetEntryLineWidth(0 , 3);
 pie_hcal_totalbyweek->SetEntryLineWidth(1 , 3);
 pie_hcal_totalbyweek->SetEntryLineWidth(2 , 3);
 pie_hcal_totalbyweek->SetEntryLineWidth(3 , 3);
 pie_hcal_totalbyweek->SetEntryLineWidth(4 , 3);
 pie_hcal_totalbyweek->SetEntryLineWidth(5 , 3);
 pie_hcal_totalbyweek->SetEntryLineWidth(6 , 3);
 pie_hcal_totalbyweek->SetEntryLineWidth(7 , 3);
 pie_hcal_totalbyweek->SetEntryLineWidth(8 , 3);
 pie_hcal_totalbyweek->SetEntryLineWidth(9 , 3);
 pie_hcal_totalbyweek->SetEntryLineWidth(10, 3);
 pie_hcal_totalbyweek->SetEntryLineWidth(11, 3);
 pie_hcal_totalbyweek->SetEntryLineWidth(12, 3);
 pie_hcal_totalbyweek->SetEntryLineWidth(13, 3);

 TLegend *leg_hcal_totalbyweek = pie_hcal_totalbyweek->MakeLegend();

 pad1->cd();
 pie_hcal_totalbyweek->Draw("");
 pad2->cd();
 leg_hcal_totalbyweek->SetX1(0.); leg_hcal_totalbyweek->SetX2(1.);
 leg_hcal_totalbyweek->SetY1(0.); leg_hcal_totalbyweek->SetY2(1.);
 leg_hcal_totalbyweek->SetBorderSize(0);
 leg_hcal_totalbyweek->Draw();

 cpie->cd();
 cpie->SaveAs("./pie_hcal_totalbyweek.png");
 pad1->Clear();
 pad2->Clear();

 ///// HCAL downtime by type
 float vals_hcal_totalbytype[] = {
  total_HFSEU   ,
  total_LV      ,
  total_HV      ,
  total_otherDCS,
  total_ngFEC   ,
  total_BadData ,
  total_Other    
 };
 int cols_hcal_totalbytype[] = {
  TColor::GetColor("#d53e4f"),
  TColor::GetColor("#fc8d59"),
  TColor::GetColor("#fee08b"),
  TColor::GetColor("#ffffbf"),
  TColor::GetColor("#e6f598"),
  TColor::GetColor("#99d594"),
  TColor::GetColor("#3288bd"),
 };

 int   nval_hcal_totalbytype   = sizeof(vals_hcal_totalbytype)/sizeof(vals_hcal_totalbytype[0]);

 TPie *pie_hcal_totalbytype = new TPie("pie_hcal_totalbytype",
    "HCAL total losses by type",
     nval_hcal_totalbytype,
     vals_hcal_totalbytype,
     cols_hcal_totalbytype);

 pie_hcal_totalbytype->SetLabelFormat("");
 pie_hcal_totalbytype->SetCircle(.5,.5,.4);
 pie_hcal_totalbytype->SetEntryLabel(0 ,"HFSEU   ");
 pie_hcal_totalbytype->SetEntryLabel(1 ,"LV      ");
 pie_hcal_totalbytype->SetEntryLabel(2 ,"HV      ");
 pie_hcal_totalbytype->SetEntryLabel(3 ,"otherDCS");
 pie_hcal_totalbytype->SetEntryLabel(4 ,"ngFEC   ");
 pie_hcal_totalbytype->SetEntryLabel(5 ,"BadData ");
 pie_hcal_totalbytype->SetEntryLabel(6 ,"Other   ");
 pie_hcal_totalbytype->SetEntryLineWidth(0 ,3);
 pie_hcal_totalbytype->SetEntryLineWidth(1 ,3);
 pie_hcal_totalbytype->SetEntryLineWidth(2 ,3);
 pie_hcal_totalbytype->SetEntryLineWidth(3 ,3);
 pie_hcal_totalbytype->SetEntryLineWidth(4 ,3);
 pie_hcal_totalbytype->SetEntryLineWidth(5 ,3);
 pie_hcal_totalbytype->SetEntryLineWidth(6 ,3);

 TLegend *leg_hcal_totalbytype = pie_hcal_totalbytype->MakeLegend();

 pad1->cd();
 pie_hcal_totalbytype->Draw("");
 pad2->cd();
 leg_hcal_totalbytype->SetX1(0.); leg_hcal_totalbytype->SetX2(1.);
 leg_hcal_totalbytype->SetY1(0.); leg_hcal_totalbytype->SetY2(1.);
 leg_hcal_totalbytype->SetBorderSize(0);
 leg_hcal_totalbytype->Draw();

 cpie->cd();
 cpie->SaveAs("./pie_hcal_totalbytype.png");
 pad1->Clear();
 pad2->Clear();


 ///// HCAL DCS downtime by type
 float vals_hcal_dcsbytype[] = {
  total_HFSEU,
  total_LV ,
  total_HV ,
  total_otherDCS
 };
 int cols_hcal_dcsbytype[] = {
  TColor::GetColor("#d7191c"),
  TColor::GetColor("#fdae61"), // orange2
  TColor::GetColor("#a6d96a"),
  TColor::GetColor("#1a9641")
 };

 int   nval_hcal_dcsbytype   = sizeof(vals_hcal_dcsbytype)/sizeof(vals_hcal_dcsbytype[0]);

 TPie *pie_hcal_dcsbytype = new TPie("pie_hcal_dcsbytype",
    "HCAL DCS losses by type",
     nval_hcal_dcsbytype,
     vals_hcal_dcsbytype,
     cols_hcal_dcsbytype);

 pie_hcal_dcsbytype->SetLabelFormat("");
 pie_hcal_dcsbytype->SetCircle(.5,.5,.4);
 pie_hcal_dcsbytype->SetEntryLabel(0 ,"HFSEU   ");
 pie_hcal_dcsbytype->SetEntryLabel(1 ,"LV      ");
 pie_hcal_dcsbytype->SetEntryLabel(2 ,"HV      ");
 pie_hcal_dcsbytype->SetEntryLabel(3 ,"otherDCS");
 pie_hcal_dcsbytype->SetEntryLineWidth(0 ,3);
 pie_hcal_dcsbytype->SetEntryLineWidth(1 ,3);
 pie_hcal_dcsbytype->SetEntryLineWidth(2 ,3);
 pie_hcal_dcsbytype->SetEntryLineWidth(3 ,3);

 TLegend *leg_hcal_dcsbytype = pie_hcal_dcsbytype->MakeLegend();

 pad1->cd();
 pie_hcal_dcsbytype->Draw("");
 pad2->cd();
 leg_hcal_dcsbytype->SetX1(0.); leg_hcal_dcsbytype->SetX2(1.);
 leg_hcal_dcsbytype->SetY1(0.); leg_hcal_dcsbytype->SetY2(1.);
 leg_hcal_dcsbytype->SetBorderSize(0);
 leg_hcal_dcsbytype->Draw();

 cpie->cd();
 cpie->SaveAs("./pie_hcal_dcsbytype.png");
 pad1->Clear();
 pad2->Clear();



 ///// HCAL SEU downtime by era
 float vals_hcal_seubyera[] = {
  HFSEU_beforereplace   ,
  HFSEU_afterreplace    
 };
 int cols_hcal_seubyera[] = {
  //TColor::GetColor("#fc8d59"),
  //TColor::GetColor("#91cf60")
//  TColor::GetColor("#66c2a5"), // green2
//  TColor::GetColor("#2d004b")  // purple2

  TColor::GetColor("#abdda4"), // green1
  TColor::GetColor("#5e4fa2"), // purple1
//
//
//
//  TColor::GetColor("#9e0142"), // red1
//  TColor::GetColor("#d53e4f"), // red2
//  TColor::GetColor("#f46d43"), // orange1
//  TColor::GetColor("#fdae61"), // orange2
//  TColor::GetColor("#fee08b"), // orange3
//  TColor::GetColor("#ffffbf"), // yellow1
//  TColor::GetColor("#e6f598"), // yellow2
//  TColor::GetColor("#abdda4"), // green1
//  TColor::GetColor("#66c2a5"), // green2
//  TColor::GetColor("#3288bd"), // blue
//  TColor::GetColor("#5e4fa2"), // purple1
//  TColor::GetColor("#2d004b")  // purple2
 };

 int   nval_hcal_seubyera   = sizeof(vals_hcal_seubyera)/sizeof(vals_hcal_seubyera[0]);

 TPie *pie_hcal_seubyera = new TPie("pie_hcal_seubyera",
    "HF SEU before/after power supply replacement",
     nval_hcal_seubyera,
     vals_hcal_seubyera,
     cols_hcal_seubyera);

 pie_hcal_seubyera->SetLabelFormat("");
 pie_hcal_seubyera->SetCircle(.5,.5,.4);
 pie_hcal_seubyera->SetEntryLabel(0 ,"HF SEU before PS replacement ");
 pie_hcal_seubyera->SetEntryLabel(1 ,"HF SEU after PS replacement ");
 pie_hcal_seubyera->SetEntryLineWidth(0 ,3);
 pie_hcal_seubyera->SetEntryLineWidth(1 ,3);

 TLegend *leg_hcal_seubyera = pie_hcal_seubyera->MakeLegend();

 pad1->cd();
 pie_hcal_seubyera->Draw("");
 pad2->cd();
 leg_hcal_seubyera->SetX1(0.); leg_hcal_seubyera->SetX2(1.);
 leg_hcal_seubyera->SetY1(0.6); leg_hcal_seubyera->SetY2(1.);
 leg_hcal_seubyera->SetBorderSize(0);
 leg_hcal_seubyera->Draw();

 cpie->cd();
 cpie->SaveAs("./pie_hcal_seubyera.png");
 pad1->Clear();
 pad2->Clear();












}
