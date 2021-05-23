/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class ATXHistogramData;

@interface ATXGuardedHistData : NSObject

{
    ATXHistogramData *_histogramData;
    unsigned short _bucketCount;
    _Bool _filter;
}

- (id)initWithHistogramData:(id)arg1 bucketCount:(unsigned short)arg2 filter:(_Bool)arg3;

@end
