/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUQuickControlSimpleInteractionCoordinator.h>

@class HFColorPalette, HUQuickControlColorView, NSString;

@protocol HUQuickControlColorInteractionCoordinatorDelegate;

@interface HUQuickControlColorInteractionCoordinator : HUQuickControlSimpleInteractionCoordinator

{
    _Bool _hasPendingColorPaletteChangeDelegateNotification;
    HFColorPalette *_colorPalette;
}

@property (retain, nonatomic) HFColorPalette *colorPalette;
@property (nonatomic) _Bool hasPendingColorPaletteChangeDelegateNotification;
@property (weak, nonatomic) id <HUQuickControlColorInteractionCoordinatorDelegate> delegate;
@property (nonatomic, readonly) HUQuickControlColorView *controlView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithControlView:(id)arg1 colorPalette:(id)arg2 delegate:(id)arg3;
- (void)cancelButtonTappedToDismissColorViewController;
- (void)controlView:(id)arg1 interactionStateDidChange:(_Bool)arg2 forFirstTouch:(_Bool)arg3;
- (void)presentFullColorViewForControlView:(id)arg1 selectedColorIndexPath:(id)arg2;
- (void)controlView:(id)arg1 didSelectColorAtIndexPath:(id)arg2;
- (void)controlView:(id)arg1 colorPaletteDidChange:(id)arg2;
- (void)controlView:(id)arg1 showAuxiliaryView:(id)arg2;
- (void)hideAuxiliaryViewForControlView:(id)arg1;
- (void)_notifyDelegateOfColorPaletteChangeIfNecessary;

@end
