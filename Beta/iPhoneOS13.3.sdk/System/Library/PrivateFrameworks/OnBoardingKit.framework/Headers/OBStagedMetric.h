/*
 Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
 */

#import <Foundation/NSObject.h>

@class PBCodable;

__attribute__((visibility("hidden")))
@interface OBStagedMetric : NSObject

{
    unsigned int _metricId;
    PBCodable *_metric;
}

@property unsigned int metricId;
@property (retain) PBCodable *metric;

- (void)commit;
- (id)initWithMetricID:(unsigned int)arg1 metric:(id)arg2;

@end
