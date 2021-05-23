/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUQuickControlSingleControlViewController.h>

@class HFControlItem;

@protocol HFPrimaryStateWriter;

@interface HUQuickControlPrimaryStateViewController : HUQuickControlSingleControlViewController

@property (nonatomic, readonly) HFControlItem<HFPrimaryStateWriter> *controlItem;

+ (id)controlItemPredicate;
+ (Class)controlItemClass;

- (void)viewWillAppear:(_Bool)arg1;
- (id)createInteractionCoordinator;
- (id)createViewProfile;
- (id)controlToViewValueTransformer;
- (_Bool)_isCharacteristicTypeRotationDirection;

@end
