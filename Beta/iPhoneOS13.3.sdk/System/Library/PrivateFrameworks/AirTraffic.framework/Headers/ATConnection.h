/*
 Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, NSXPCConnection;

@protocol ATConnectionDelegate;

@interface ATConnection : NSObject

{
    NSXPCConnection *_xpcConnection;
    _Bool _registerForStatus;
    NSMutableArray *_registeredDataclasses;
    int _atcRunningToken;
    _Bool _atcRunning;
    NSObject<ATConnectionDelegate> *_delegate;
}

@property (weak, nonatomic) NSObject<ATConnectionDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)cancelSync;
- (void)prioritizeAsset:(id)arg1 forDataclass:(id)arg2;
- (void)connectionWasInterrupted:(id)arg1;
- (void)_sendStatusRegistrationWithCompletion:(CDUnknownBlockType)arg1;
- (void)initiateAssetDownloadSessionsWithCompletion:(CDUnknownBlockType)arg1;
- (void)connection:(id)arg1 updatedProgress:(id)arg2;
- (void)connection:(id)arg1 updatedAssets:(id)arg2;
- (void)_handleDisconnect;
- (void)_sendStatusRegistration;
- (void)openDeviceMessageLinkWithPriority:(int)arg1;
- (void)requestSyncForLibrary:(id)arg1;
- (void)requestSyncForPairedDeviceWithPriority:(int)arg1;
- (void)requestKeybagSyncToPairedDevice;
- (void)purgePartialAsset:(id)arg1 forDataclass:(id)arg2;
- (void)registerForStatus;
- (void)unregisterForStatus;
- (void)registerForAssetProgressForDataclass:(id)arg1;
- (void)clearSyncData;
- (void)lowBatteryNotification;
- (void)keepATCAlive:(_Bool)arg1;
- (_Bool)isSyncing:(_Bool *)arg1 automatically:(_Bool *)arg2 wirelessly:(_Bool *)arg3;
- (void)openDeviceMessageLink;
- (id)restoreDeviceWithIdentifier:(id)arg1;
- (id)getAssetMetrics;
- (_Bool)getDataRestoreIsComplete;

@end
