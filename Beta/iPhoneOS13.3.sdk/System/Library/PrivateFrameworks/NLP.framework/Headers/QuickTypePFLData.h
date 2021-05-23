/*
 Image: /System/Library/PrivateFrameworks/NLP.framework/NLP
 */

#import <Foundation/NSObject.h>

@interface QuickTypePFLData : NSObject

{
    unsigned long long _maxSequenceLength;
}

@property (nonatomic, readonly) unsigned long long maxSequenceLength;
@property (nonatomic, readonly) unsigned long long numTrainingSamples;
@property (nonatomic, readonly) unsigned long long numTrainingTokens;

- (id)initWithMaxSequenceLength:(unsigned long long)arg1;
- (_Bool)loadFromFile:(id)arg1 error:(id *)arg2;
- (void)shuffle;
- (void)enumerateDataInBatches:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;

@end
