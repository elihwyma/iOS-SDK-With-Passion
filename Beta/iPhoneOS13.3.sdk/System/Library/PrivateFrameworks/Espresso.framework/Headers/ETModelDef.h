/*
 Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
 */

#import <NSObject.h>

@class NSMutableArray;

@interface ETModelDef : NSObject

{
    struct map<std::__1::basic_string<char>, std::__1::vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char>>>, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char>>>>>> layer_variable_names;
    NSMutableArray *_all_variables;
    shared_ptr_d082c67d _network;
    shared_ptr_c14ee569 _gb;
}

@property shared_ptr_d082c67d network;
@property (retain) NSMutableArray *all_variables;
@property shared_ptr_c14ee569 gb;

- (id).cxx_construct;
- (id)initWithNetwork:(id)arg1;
- (id)layerNames;
- (id)variables;
- (void)transformForTraining:(shared_ptr_d082c67d)arg1;
- (shared_ptr_210dbb06)topNamesForLayerIndex:(int)arg1;
- (struct layer *)layerForName:(id)arg1;
- (shared_ptr_966620c9)weightsForLayer:(id)arg1;
- (shared_ptr_0954c506)biasesForLayer:(id)arg1;
- (void)updateLayer:(id)arg1 withWeights:(shared_ptr_6c49034a)arg2 length:(unsigned long long)arg3;
- (void)updateLayer:(id)arg1 withBiases:(shared_ptr_6c49034a)arg2 length:(unsigned long long)arg3;
- (void)randomizeWeightsForLayer:(id)arg1 withSeed:(float)arg2;
- (void)setupVariablesDef;
- (id)variableNameForLayer:(id)arg1 kind:(unsigned long long)arg2;
- (int)configureLayersToTrain:(id)arg1 reinitializeVariables:(_Bool)arg2;
- (id)variableForLayer:(id)arg1 kind:(unsigned long long)arg2;

@end
