//
//  VariableTrainingRelation.h
//  elly
//
//  Created by Ce Zhang on 8/8/12.
//  Copyright (c) 2012 University of Wisconsin-Madison. All rights reserved.
//

#ifndef elly_VariableTrainingRelation_h
#define elly_VariableTrainingRelation_h


namespace mia{
    namespace elly{
        namespace dstruct{
            
            class VariableTrainingRelation{
                
            public:
                
                std::string filename;
                std::string filetype;
                
                mia::sm::KeyValue_fl<mia::sm::Buffer_mm, int> kv;
                
                int nvariable;
                
                int lookup(int vid){
                    return kv.get(vid);
                }
                                
                void prepare(){
                    
                    nvariable = 0;
                    
                    if(filetype.compare("tsv") == 0){
                        
                        int vid, nfactor, crid, fid, vtrain;
                        std::ifstream fin( filename.c_str() );
                        
                        while(fin >> vid >> vtrain){
                            
                            kv.set(vid, vtrain);
                            
                            nvariable ++;
                            
                        }
                        
                        mia::elly::utils::log() << "    + # variables = " << nvariable << std::endl;
                        
                    }
                    
                }
                
            };
            
            
            
        }
    }
}



#endif