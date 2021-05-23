/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUQuickControlSingleControlViewController.h>

@class HFColorControlItem, HUQuickControlColorViewProfile, NSIndexPath, NSString;

@interface HUQuickControlColorViewController : HUQuickControlSingleControlViewController

{
    unsigned long long _mode;
    NSIndexPath *_selectedColorIndexPath;
    HUQuickControlColorViewController *_colorViewController;
    HUQuickControlColorViewController *_presentingColorViewController;
}

@property (nonatomic, readonly) HFColorControlItem *controlItem;
@property (nonatomic, readonly) HUQuickControlColorViewProfile *viewProfile;
@property (nonatomic) unsigned long long mode;
@property (retain, nonatomic) NSIndexPath *selectedColorIndexPath;
@property (retain, nonatomic) HUQuickControlColorViewController *colorViewController;
@property (weak, nonatomic) HUQuickControlColorViewController *presentingColorViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)controlItemClass;

- (struct CGSize)preferredContentSize;
- (void)cancelButtonTapped;
- (void)doneButtonTapped;
- (unsigned long long)_paletteType;
- (void)quickControlItemUpdater:(id)arg1 didUpdateResultsForControlItems:(id)arg2;
- (id)overrideStatusText;
- (void)didSelectColorAtIndexPath:(id)arg1;
- (void)interactionCoordinator:(id)arg1 colorPaletteDidChange:(id)arg2;
- (void)presentFullColorViewForInteractionCoordinator:(id)arg1 selectedColorIndexPath:(id)arg2;
- (void)interactionCoordinator:(id)arg1 didSelectColorAtIndexPath:(id)arg2;
- (id)createInteractionCoordinator;
- (id)createViewProfile;
- (id)controlToViewValueTransformer;

@end
