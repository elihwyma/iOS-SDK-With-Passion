/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUQuickControlSingleControlViewController.h>

@class HFIncrementalStateControlItem;

@interface HUQuickControlIncrementalStateViewController : HUQuickControlSingleControlViewController

@property (nonatomic, readonly) HFIncrementalStateControlItem *controlItem;

+ (Class)controlItemClass;

- (void)viewWillAppear:(_Bool)arg1;
- (id)createInteractionCoordinator;
- (id)createViewProfile;
- (id)controlToViewValueTransformer;
- (id)_createControlView;

@end
