/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUQuickControlSingleControlViewController.h>

@class HFTVInputControlItem;

@interface HUQuickControlTVInputSourceViewController : HUQuickControlSingleControlViewController

@property (nonatomic, readonly) HFTVInputControlItem *controlItem;

+ (id)controlItemPredicate;
+ (Class)controlItemClass;

- (id)createInteractionCoordinator;
- (id)createViewProfile;
- (id)controlToViewValueTransformer;
- (id)_filterInputValues:(id)arg1;
- (id)_toPickerViewItems:(id)arg1;
- (_Bool)_shouldWriteInputValue:(id)arg1;

@end
