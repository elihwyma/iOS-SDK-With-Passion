/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class ATXHistogramBundleIdTable, ATXHistogramData, NSString;

@interface _APRParzenHistogram : NSObject

{
    ATXHistogramData *_arg1Hist;
    ATXHistogramData *_arg2Hist;
    ATXHistogramData *_arg12Hist;
    ATXHistogramBundleIdTable *_arg1Table;
    ATXHistogramBundleIdTable *_arg2Table;
    ATXHistogramBundleIdTable *_arg12Table;
    NSString *_prevKey;
    unsigned short _prevIndex;
    unsigned short _maxIndex;
}

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (float)predict:(id)arg1;
- (void)addEvent:(id)arg1;
- (id)initWithArg1Hist:(id)arg1 arg2Hist:(id)arg2 arg12Hist:(id)arg3 arg1Table:(id)arg4 arg2Table:(id)arg5 arg12Table:(id)arg6;
- (void)pruneHistogram:(id)arg1 threshold:(float)arg2;
- (void)removeHistoryForAllBundleIds:(id)arg1;
- (void)pruneWithEvents:(id)arg1;
- (void)getIndicesForEvent:(id)arg1 intoBlock:(CDUnknownBlockType)arg2;
- (void)pruneABHistogramForEvent:(id)arg1;

@end
