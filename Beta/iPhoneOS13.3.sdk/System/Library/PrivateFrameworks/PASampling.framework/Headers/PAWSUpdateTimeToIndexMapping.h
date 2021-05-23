/*
 Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

#import <Foundation/NSObject.h>

@interface PAWSUpdateTimeToIndexMapping : NSObject

{
    unsigned long long _waitStartSampleIndex;
    unsigned long long _numWaitIndices;
    unsigned long long _deferStartSampleIndex;
    unsigned long long _numDeferIndices;
    unsigned long long _workStartSampleIndex;
    unsigned long long _numWorkIndices;
}

@property (readonly) unsigned long long frameStartSampleIndex;
@property (readonly) unsigned long long numFrameIndices;
@property (readonly) unsigned long long frameEndSampleIndex;
@property (readonly) unsigned long long waitStartSampleIndex;
@property (readonly) unsigned long long numWaitIndices;
@property (readonly) unsigned long long waitEndSampleIndex;
@property (readonly) unsigned long long deferStartSampleIndex;
@property (readonly) unsigned long long numDeferIndices;
@property (readonly) unsigned long long deferEndSampleIndex;
@property (readonly) unsigned long long workStartSampleIndex;
@property (readonly) unsigned long long numWorkIndices;
@property (readonly) unsigned long long workEndSampleIndex;

+ (id)arrayOfMappingsFromWSUpdataDataArray:(id)arg1 andSampleDataStore:(id)arg2;

- (id)initWithWSUpdateData:(id)arg1 andSampleDataStore:(id)arg2 andHintIndex:(unsigned long long)arg3;
- (void)printFrameIndexRangeToStream:(id)arg1 withTranslationDelta:(long long)arg2;
- (void)printWaitIndexRangeToStream:(id)arg1 withTranslationDelta:(long long)arg2;
- (void)printDeferIndexRangeToStream:(id)arg1 withTranslationDelta:(long long)arg2;
- (void)printWorkIndexRangeToStream:(id)arg1 withTranslationDelta:(long long)arg2;

@end
