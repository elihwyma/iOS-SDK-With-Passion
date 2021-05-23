/*
 Image: /System/Library/Frameworks/HealthKitUI.framework/HealthKitUI
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _HKActivityRingViewSizingDirective : NSObject

{
    NSString *_identifier;
    double _width;
    double _outerRingOffset;
    double _ringThickness;
    double _ringInterspacing;
}

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) double width;
@property (nonatomic) double outerRingOffset;
@property (nonatomic) double ringThickness;
@property (nonatomic) double ringInterspacing;

+ (id)activityRingSizingDirectiveWithIdentifier:(id)arg1 width:(double)arg2 outerRingOffset:(double)arg3 ringThickness:(double)arg4 ringInterspacing:(double)arg5;
+ (id)sortedRingRatioDirectives;

- (id)description;

@end
