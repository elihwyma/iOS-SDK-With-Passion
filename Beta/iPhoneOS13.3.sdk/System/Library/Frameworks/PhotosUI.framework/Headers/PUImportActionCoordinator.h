/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSNumberFormatter, PXImportController, UIViewController;

@protocol PUImportActionCoordinatorDelegate;

@interface PUImportActionCoordinator : NSObject

{
    _Bool _presentsAdditionalDeleteAllConfirmation;
    _Bool _ppt_alwaysImportDuplicatesNoPrompt;
    _Bool _ppt_alwaysPreferSelected;
    id <PUImportActionCoordinatorDelegate> _delegate;
    UIViewController *_viewController;
    PXImportController *_importController;
    NSNumberFormatter *_percentageNumberFormatter;
}

@property (weak, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) PXImportController *importController;
@property (retain, nonatomic) NSNumberFormatter *percentageNumberFormatter;
@property (nonatomic) _Bool ppt_alwaysImportDuplicatesNoPrompt;
@property (nonatomic) _Bool ppt_alwaysPreferSelected;
@property (weak, nonatomic) id <PUImportActionCoordinatorDelegate> delegate;
@property (nonatomic) _Bool presentsAdditionalDeleteAllConfirmation;

+ (id)deleteAllConfirmationMessageForItems:(id)arg1 importSource:(id)arg2;
+ (long long)importBehaviorForBatteryState:(long long)arg1 batteryLevel:(float)arg2;
+ (void)retrieveBatteryState:(long long *)arg1 batteryLevel:(float *)arg2;
+ (float)lowBatteryLevelThresholdForDevice;

- (void)stopImport;
- (id)initWithViewController:(id)arg1 importController:(id)arg2;
- (void)beginImportFromBarButtonItem:(id)arg1;
- (void)importAllFromBarButtonItem:(id)arg1;
- (void)checkBatteryLevelWithCompletion:(CDUnknownBlockType)arg1;
- (void)_importItems:(id)arg1 allowDuplicates:(_Bool)arg2;
- (void)_commitImportingItems:(id)arg1;
- (void)notifyDelegateOfImportCancellation;
- (void)deleteItemsFromBarButtonItem:(id)arg1;
- (void)deleteItemsFromBarButtonItem:(id)arg1 withOneUpHintItems:(id)arg2;
- (void)deleteItemsWithoutConfirmation:(id)arg1;
- (void)_deleteItems:(id)arg1;

@end
