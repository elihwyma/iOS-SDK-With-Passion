/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIView.h>

@class HUQuickControlViewProfile, MTMaterialView, NSString;

@protocol HUQuickControlViewInteractionDelegate;

__attribute__((visibility("hidden")))
@interface _HUQuickControlControllableHostView : UIView

{
    _Bool _userInteractionActive;
    HUQuickControlViewProfile *_profile;
    id <HUQuickControlViewInteractionDelegate> _interactionDelegate;
    id _value;
    MTMaterialView *_backgroundView;
}

@property (retain, nonatomic) id value;
@property (copy, nonatomic) HUQuickControlViewProfile *profile;
@property (retain, nonatomic) MTMaterialView *backgroundView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) id secondaryValue;
@property (nonatomic) unsigned long long reachabilityState;
@property (weak, nonatomic) id <HUQuickControlViewInteractionDelegate> interactionDelegate;
@property (nonatomic, readonly, getter=isUserInteractionActive) _Bool userInteractionActive;

- (id)initWithProfile:(id)arg1;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1;
- (id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1;

@end
