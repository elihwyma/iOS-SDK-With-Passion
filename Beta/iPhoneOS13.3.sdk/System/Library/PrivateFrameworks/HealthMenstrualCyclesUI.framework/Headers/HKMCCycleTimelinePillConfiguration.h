/*
 Image: /System/Library/PrivateFrameworks/HealthMenstrualCyclesUI.framework/HealthMenstrualCyclesUI
 */

#import <Foundation/NSObject.h>

@interface HKMCCycleTimelinePillConfiguration : NSObject

{
    double _width;
    double _spacing;
}

@property (nonatomic, readonly) double width;
@property (nonatomic, readonly) double spacing;

+ (id)pillConfigurationWithWidth:(double)arg1 spacing:(double)arg2;

- (double)heightWithAspectRatio:(double)arg1;

@end
