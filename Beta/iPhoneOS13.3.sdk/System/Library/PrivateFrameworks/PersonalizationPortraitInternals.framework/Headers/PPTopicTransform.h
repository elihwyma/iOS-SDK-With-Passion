/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface PPTopicTransform : NSObject

{
    NSData *_data;
    struct header_s _header;
    const float *_bias;
    const unsigned int *_qids;
    const unsigned int *_matrixIndices;
    const float *_matrixElts;
    const char *_payloads;
}

@property (nonatomic, readonly) unsigned long long outputTopicCount;

- (id)init;
- (id)initWithPath:(id)arg1;
- (void)sigmoid:(float *)arg1;
- (id)payloadForTopic:(unsigned int)arg1;
- (void)_enumerateSparseRowAtIndex:(unsigned int)arg1 block:(CDUnknownBlockType)arg2;
- (void)_enumerateSparseColumnAtIndex:(unsigned int)arg1 block:(CDUnknownBlockType)arg2;
- (void)addWeightedTopicScoreToBuffer:(float *)arg1 countNonZeroComponentsInBuffer:(unsigned short *)arg2 qid:(unsigned int)arg3 score:(float)arg4;
- (void)addWeightedTopicScoreToBuffer:(float *)arg1 qid:(unsigned int)arg2 score:(float)arg3;
- (id)QIDWeightsWithMappedTopicIdentifier:(id)arg1;
- (void)addBias:(float *)arg1;
- (void)scaleBuffer:(float *)arg1 withFactor:(float)arg2;
- (void)halfSigmoid:(float *)arg1;

@end
