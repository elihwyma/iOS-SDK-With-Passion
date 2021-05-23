/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUQuickControlSingleControlViewController.h>

@class HFMultiStateControlItem;

@interface HUQuickControlMultiStateViewController : HUQuickControlSingleControlViewController

@property (nonatomic, readonly) HFMultiStateControlItem *controlItem;

+ (Class)controlItemClass;

- (void)viewWillAppear:(_Bool)arg1;
- (id)overrideStatusText;
- (id)createInteractionCoordinator;
- (id)createViewProfile;
- (id)controlToViewValueTransformer;
- (void)modelValueDidChange;
- (_Bool)_isCharacteristicTypeRotationDirection;
- (_Bool)_useOverrideStatusText;
- (_Bool)_shouldUseWheelPickerView;

@end
