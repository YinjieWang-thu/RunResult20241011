void runjobs_1()
{
	TChain *chain = new TChain("mkcands/X_data","");
	TString inputFile;
	chain->Add("/home/storage2/users/wangyinjie/Ntuple-Processor-main-copy/ntuple/ntuple_data_2017_mine/Run2017B/Charmonium/crab_jpsix3872_data_2017B_UL_skimple/220928_155818/0000/*.root");
	myntuple a(chain);
	a.Loop("/home/storage2/users/wangyinjie/Ntuple-Processor-main-copy/Data/Data2/__220928_155818.root");
        //Delete all things to save memory
	a.~myntuple();
	delete chain;
}
