void runjobs_6()
{
	TChain *chain = new TChain("mkcands/X_data","");
	TString inputFile;
	chain->Add("/home/storage2/users/wangyinjie/Ntuple-Processor-main-copy/ntuple/ntuple_data_2016_mine/Run2016B_v2/Charmonium/crab_jpsix3872_data_2016B_v2_UL_skimple/220927_162739/0002/*.root");
	myntuple a(chain);
	a.Loop("/home/storage2/users/wangyinjie/Ntuple-Processor-main-copy/Data/Data1/__220927_162739.root");
        //Delete all things to save memory
	a.~myntuple();
	delete chain;
}
