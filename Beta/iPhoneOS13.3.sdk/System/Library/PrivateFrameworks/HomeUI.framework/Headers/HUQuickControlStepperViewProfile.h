/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUQuickControlViewProfile.h>

@class NSArray;

@interface HUQuickControlStepperViewProfile : HUQuickControlViewProfile

{
    _Bool _showSegmentTitles;
    unsigned long long _numberOfSegments;
    unsigned long long _stepperBehavior;
    unsigned long long _stepperStyle;
    NSArray *_segmentTitles;
}

@property (nonatomic) unsigned long long numberOfSegments;
@property (nonatomic) unsigned long long stepperBehavior;
@property (nonatomic) _Bool showSegmentTitles;
@property (nonatomic) unsigned long long stepperStyle;
@property (copy, nonatomic) NSArray *segmentTitles;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)supportsTouchContinuation;

@end
