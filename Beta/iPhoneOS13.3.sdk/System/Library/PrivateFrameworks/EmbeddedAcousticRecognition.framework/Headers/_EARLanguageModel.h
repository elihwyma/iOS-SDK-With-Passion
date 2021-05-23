/*
 Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

#import <NSObject.h>

@interface _EARLanguageModel : NSObject

{
    struct vector<std::__1::pair<id<_EARLanguageModelDataSource>, float>, std::__1::allocator<std::__1::pair<id<_EARLanguageModelDataSource>, float>>> _dataSources;
    float _totalWeight;
}

@property (nonatomic, readonly) float totalWeight;

- (id).cxx_construct;
- (void)enumerateDataSourcesAndWeightsUsingBlock:(CDUnknownBlockType)arg1;
- (void)addDataSource:(id)arg1 weight:(float)arg2;

@end
