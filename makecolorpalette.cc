// dummy script because TPie doesn't have TH1 auto color (root 

#include <stdio.h> // for printf

void makecolorpalette(){

 gStyle->SetOptTitle(kFALSE);
 gStyle->SetOptStat(0);

 // make histos
 TH1F *h_wk24 = new TH1F ("h_wk24","wk24",1,0.,2.);
 TH1F *h_wk25 = new TH1F ("h_wk25","wk25",1,0.,2.);
 TH1F *h_wk26 = new TH1F ("h_wk26","wk26",1,0.,2.);
 TH1F *h_wk27 = new TH1F ("h_wk27","wk27",1,0.,2.);
 TH1F *h_wk28 = new TH1F ("h_wk28","wk28",1,0.,2.);
 TH1F *h_wk29 = new TH1F ("h_wk29","wk29",1,0.,2.);
 TH1F *h_wk31 = new TH1F ("h_wk31","wk31",1,0.,2.);
 TH1F *h_wk32 = new TH1F ("h_wk32","wk32",1,0.,2.);
 TH1F *h_wk33 = new TH1F ("h_wk33","wk33",1,0.,2.);
 TH1F *h_wk34 = new TH1F ("h_wk34","wk34",1,0.,2.);
 TH1F *h_wk35 = new TH1F ("h_wk35","wk35",1,0.,2.);
 TH1F *h_wk36 = new TH1F ("h_wk36","wk36",1,0.,2.);
 TH1F *h_wk37 = new TH1F ("h_wk37","wk37",1,0.,2.);
 TH1F *h_wk38 = new TH1F ("h_wk38","wk38",1,0.,2.);
 TH1F *h_wk39 = new TH1F ("h_wk39","wk39",1,0.,2.);
 TH1F *h_wk40 = new TH1F ("h_wk40","wk40",1,0.,2.);
 TH1F *h_wk41 = new TH1F ("h_wk41","wk41",1,0.,2.);
 TH1F *h_wk42 = new TH1F ("h_wk42","wk42",1,0.,2.);
 TH1F *h_wk43 = new TH1F ("h_wk43","wk43",1,0.,2.);
 TH1F *h_wk44 = new TH1F ("h_wk44","wk44",1,0.,2.);
 TH1F *h_wk45 = new TH1F ("h_wk45","wk45",1,0.,2.);
 TH1F *h_wk46 = new TH1F ("h_wk46","wk46",1,0.,2.);

 // fill histos
 h_wk24 -> Fill(1,1);
 h_wk25 -> Fill(1,1);
 h_wk26 -> Fill(1,1);
 h_wk27 -> Fill(1,1);
 h_wk28 -> Fill(1,1);
 h_wk29 -> Fill(1,1);
 h_wk31 -> Fill(1,1);
 h_wk32 -> Fill(1,1);
 h_wk33 -> Fill(1,1);
 h_wk34 -> Fill(1,1);
 h_wk35 -> Fill(1,1);
 h_wk36 -> Fill(1,1);
 h_wk37 -> Fill(1,1);
 h_wk38 -> Fill(1,1);
 h_wk39 -> Fill(1,1);
 h_wk40 -> Fill(1,1);
 h_wk41 -> Fill(1,1);
 h_wk42 -> Fill(1,1);
 h_wk43 -> Fill(1,1);
 h_wk44 -> Fill(1,1);
 h_wk45 -> Fill(1,1);
 h_wk46 -> Fill(1,1);

 THStack * hs = new THStack("hs","stack");
 hs -> Add (h_wk24);
 hs -> Add (h_wk25);
 hs -> Add (h_wk26);
 hs -> Add (h_wk27);
 hs -> Add (h_wk28);
 hs -> Add (h_wk29);
 hs -> Add (h_wk31);
 hs -> Add (h_wk32);
 hs -> Add (h_wk33);
 hs -> Add (h_wk34);
 hs -> Add (h_wk35);
 hs -> Add (h_wk36);
 hs -> Add (h_wk37);
 hs -> Add (h_wk38);
 hs -> Add (h_wk39);
 hs -> Add (h_wk40);
 hs -> Add (h_wk41);
 hs -> Add (h_wk42);
 hs -> Add (h_wk43);
 hs -> Add (h_wk44);
 hs -> Add (h_wk45);
 hs -> Add (h_wk46);
 
 // make canvas and text
 TCanvas* canvas = new TCanvas("canvas","canvas",1000,1000);
 gStyle->SetOptStat(0);
 gPad->SetTickx();
 gPad->SetTicky();
 gStyle->SetLineWidth(3);
 gStyle->SetPalette(kViridis);
 //gStyle->SetPalette(kPastel);
 //gStyle->SetPalette(kCMYK);
 //gStyle->SetPalette(kDarkRainBow);
 //gStyle->SetPalette(kBird);

 // Draw histos
 hs ->Draw("HIST PFC");

 canvas->cd();
 canvas->SaveAs("./colorpalette.png");

}
