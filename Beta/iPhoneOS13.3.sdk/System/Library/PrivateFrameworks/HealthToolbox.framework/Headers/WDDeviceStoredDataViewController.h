/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthToolbox/WDStoredDataByCategoryViewController.h>

@class HKDevice, NSString;

__attribute__((visibility("hidden")))
@interface WDDeviceStoredDataViewController : WDStoredDataByCategoryViewController

{
    HKDevice *_device;
    NSString *_displayName;
}

@property (retain, nonatomic) HKDevice *device;
@property (retain, nonatomic) NSString *displayName;

- (id)storedDataPredicate;
- (id)storedDataDisplayName;
- (_Bool)shouldShowDeleteAllDataButton;
- (void)deleteAllStoredData;

@end
