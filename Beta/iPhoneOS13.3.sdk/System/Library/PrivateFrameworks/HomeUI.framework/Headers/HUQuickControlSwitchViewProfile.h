/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUQuickControlViewProfile.h>

@class HFNumberValueConstraints, NSString;

@interface HUQuickControlSwitchViewProfile : HUQuickControlViewProfile

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) HFNumberValueConstraints *primaryValueConstraints;
@property (nonatomic, readonly) HFNumberValueConstraints *secondaryValueConstraints;
@property (nonatomic, readonly) _Bool hasSecondaryValue;

- (_Bool)supportsTouchContinuation;
- (double)gestureDragCoefficient;

@end
