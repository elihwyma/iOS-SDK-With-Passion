/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthUI/HKLineSeries.h>

__attribute__((visibility("hidden")))
@interface WDTestingLineSeries : HKLineSeries

{
    double _referenceLineOffset;
}

@property (nonatomic) double referenceLineOffset;

- (id)init;

@end
