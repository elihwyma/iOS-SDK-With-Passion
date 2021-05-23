/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSObject.h>

@class ACAccount, NSArray, NSString;

@protocol OS_dispatch_semaphore;

@interface ICDeviceListRequest : NSObject

{
    _Bool _didGetICloudDeviceList;
    NSArray *_devices;
    ACAccount *_account;
    NSObject<OS_dispatch_semaphore> *_workSemaphore;
    NSString *_name;
    NSString *_model;
    NSString *_modelDisplayName;
    NSString *_softwareVersion;
}

@property (retain, nonatomic) ACAccount *account;
@property (retain) NSArray *devices;
@property (retain) NSObject<OS_dispatch_semaphore> *workSemaphore;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) NSString *modelDisplayName;
@property (copy, nonatomic) NSString *softwareVersion;
@property _Bool didGetICloudDeviceList;

+ (id)combineICloudDevices:(id)arg1 withCloudKitDevices:(id)arg2;
+ (id)filteredDevices:(id)arg1;
+ (id)setOfDeviceNamesFromDevices:(id)arg1;

- (id)init;
- (id)initWithAccount:(id)arg1;
- (void)fetchWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)fetchCloudKitDevicesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)fetchICloudDevicesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)anyDeviceNeedsUpgrade;
- (_Bool)anyDeviceNotUpgradable;
- (_Bool)anyOSXDeviceNotUpgraded;
- (_Bool)waitForFetchWithTimeout:(double)arg1;

@end
