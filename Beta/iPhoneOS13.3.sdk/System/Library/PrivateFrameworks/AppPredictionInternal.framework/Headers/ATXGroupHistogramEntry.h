/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@interface ATXGroupHistogramEntry : NSObject

{
    int _count;
    double _score;
}

@property (nonatomic, readonly) int count;
@property (nonatomic, readonly) double score;

- (id)initWithScore:(double)arg1;
- (void)addScore:(double)arg1;

@end
