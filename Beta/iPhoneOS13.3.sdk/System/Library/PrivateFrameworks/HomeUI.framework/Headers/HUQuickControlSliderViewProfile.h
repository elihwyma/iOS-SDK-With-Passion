/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUQuickControlViewProfile.h>

@class HFNumberValueConstraints, NSString;

@interface HUQuickControlSliderViewProfile : HUQuickControlViewProfile

{
    _Bool _hasSecondaryValue;
    _Bool _hasOffState;
    _Bool _showGrabbers;
    HFNumberValueConstraints *_primaryValueConstraints;
    HFNumberValueConstraints *_secondaryValueConstraints;
    unsigned long long _preferredFillSection;
    unsigned long long _interactionFidelity;
}

@property (nonatomic) _Bool hasOffState;
@property (retain, nonatomic) HFNumberValueConstraints *primaryValueConstraints;
@property (retain, nonatomic) HFNumberValueConstraints *secondaryValueConstraints;
@property (nonatomic) _Bool hasSecondaryValue;
@property (nonatomic) _Bool showGrabbers;
@property (nonatomic) unsigned long long preferredFillSection;
@property (nonatomic) unsigned long long interactionFidelity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)supportsTouchContinuation;
- (double)gestureDragCoefficient;

@end
