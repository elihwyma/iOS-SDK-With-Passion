/*
 Image: /System/Library/PrivateFrameworks/NLP.framework/NLP
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface QuickTypePFLTrainer : NSObject

{
    unsigned long long _batchSize;
    NSNumber *_learningRate;
    unsigned long long _maxSequenceLength;
    NSString *_updatedModelPath;
}

@property (nonatomic) unsigned long long batchSize;
@property (copy, nonatomic) NSNumber *learningRate;
@property (nonatomic, readonly) unsigned long long maxSequenceLength;
@property (copy, nonatomic, readonly) NSString *updatedModelPath;

- (void)reset;
- (id)initWithSeedModelPath:(id)arg1;
- (void)trainOn:(id)arg1 forNEpochs:(unsigned long long)arg2;
- (void)trainAndKeepInMemory:(id)arg1 forNEpochs:(unsigned long long)arg2;
- (void)trainOn:(id)arg1 forNEpochs:(unsigned long long)arg2 andKeepInMemory:(_Bool)arg3;
- (id)evaluateOn:(id)arg1;
- (float *)copyWeightUpdates:(unsigned long long *)arg1;

@end
