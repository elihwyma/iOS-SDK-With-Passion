/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUQuickControlViewProfile.h>

@class HFNumberValueConstraints, NSArray, NSString;

@interface HUQuickControlRingSliderViewProfile : HUQuickControlViewProfile

{
    _Bool _hasSecondaryValue;
    _Bool _isHandleViewVisible;
    _Bool _hasOffState;
    _Bool _shouldShowSupplementaryValue;
    _Bool _shouldShowGradationMarking;
    unsigned long long _handleViewStyle;
    HFNumberValueConstraints *_primaryValueConstraints;
    HFNumberValueConstraints *_secondaryValueConstraints;
    unsigned long long _style;
    NSArray *_gradationMarkingValues;
}

@property (nonatomic) _Bool isHandleViewVisible;
@property (nonatomic) unsigned long long handleViewStyle;
@property (nonatomic) _Bool hasOffState;
@property (retain, nonatomic) HFNumberValueConstraints *primaryValueConstraints;
@property (retain, nonatomic) HFNumberValueConstraints *secondaryValueConstraints;
@property (nonatomic) _Bool hasSecondaryValue;
@property (nonatomic) unsigned long long style;
@property (nonatomic) _Bool shouldShowSupplementaryValue;
@property (nonatomic) _Bool shouldShowGradationMarking;
@property (retain, nonatomic) NSArray *gradationMarkingValues;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
