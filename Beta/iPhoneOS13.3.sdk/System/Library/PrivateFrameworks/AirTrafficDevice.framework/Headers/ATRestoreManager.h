/*
 Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

#import <NSObject.h>

@class ATDeviceSettings, ATRestoreAssetLink, ATSession, MSVXPCTransaction, NSString;

@protocol OS_dispatch_queue;

@interface ATRestoreManager : NSObject

{
    ATRestoreAssetLink *_restoreLink;
    ATRestoreAssetLink *_applicationDataRestoreLink;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_checkRestoreStatusQueue;
    _Bool _cancelled;
    _Bool _iTunesRestoreActive;
    _Bool _iCloudRestoreActive;
    _Bool _deviceRestoreActive;
    MSVXPCTransaction *_xpcTransaction;
    ATDeviceSettings *_settings;
    ATSession *_restoreSession;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedManager;

- (id)init;
- (void)resume;
- (void)_start;
- (void)environmentMonitorDidChangeNetworkReachability:(id)arg1;
- (void)sessionDidFinish:(id)arg1;
- (void)restoreAssetLinkDidCancelRestore:(id)arg1;
- (void)restoreSessionActiveWithCompletion:(CDUnknownBlockType)arg1;
- (void)_checkActiveRestoreStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)setRestoreInProgress:(_Bool)arg1;
- (id)_dataClasses;
- (_Bool)_iCloudPhotoLibraryEnabled;

@end
