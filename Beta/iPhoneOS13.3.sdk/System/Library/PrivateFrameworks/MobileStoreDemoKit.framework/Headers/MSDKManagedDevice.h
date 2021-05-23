/*
 Image: /System/Library/PrivateFrameworks/MobileStoreDemoKit.framework/MobileStoreDemoKit
 */

#import <Foundation/NSObject.h>

@protocol MSDKF200EventObserverProtocol, MSDKManagedDeviceDelegate, OS_xpc_object;

@interface MSDKManagedDevice : NSObject

{
    id <MSDKManagedDeviceDelegate> _delegate;
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_xpc_object> *_helperConnection;
    id <MSDKF200EventObserverProtocol> _F200EventObserver;
}

@property (retain) NSObject<OS_xpc_object> *connection;
@property (retain) NSObject<OS_xpc_object> *helperConnection;
@property (retain) id <MSDKF200EventObserverProtocol> F200EventObserver;
@property (weak, nonatomic) id <MSDKManagedDeviceDelegate> delegate;

+ (id)sharedInstance;

- (id)init;
- (_Bool)prepare;
- (_Bool)cancelOperation;
- (_Bool)setupConnection;
- (void)handleMessage:(id)arg1;
- (_Bool)isDeviceClassSupported;
- (int)readDemoMode;
- (id)getCacheIdentifier;
- (id)errorWithXPCDictionary:(id)arg1;
- (id)readNVRam:(id)arg1;
- (_Bool)setupHelperConnection;
- (_Bool)setupConnection:(id)arg1 withMachService:(id)arg2;
- (void)handleContentUpdateStatus:(const char *)arg1 event:(id)arg2;
- (void)handleF200EventMessage:(id)arg1;
- (_Bool)prepareWithWiFi:(id)arg1 password:(id)arg2;
- (_Bool)isEnrolled;
- (_Bool)isContentFrozen_xpc;
- (unsigned long long)typeOfDemoDevice;
- (long long)getDemoInstallState;
- (_Bool)isContentFrozen;
- (_Bool)lockDemoContent;
- (_Bool)unlockDemoContent;
- (_Bool)unenroll:(_Bool)arg1;
- (id)getDeviceOptions;
- (id)getStoreID;
- (_Bool)setStoreOpenAt:(long long)arg1 openMinute:(long long)arg2 closeHour:(long long)arg3 closeMinute:(long long)arg4;
- (_Bool)setIdleDelay:(long long)arg1;
- (_Bool)configureWiFi:(id)arg1 password:(id)arg2;
- (_Bool)checkInBlockingUI;
- (_Bool)storeDataBlob:(id)arg1;
- (id)retrieveDataBlob;
- (_Bool)deleteDataBlob;
- (id)getPersistentWiFiSsid;
- (id)fetchF200StatusInfo;
- (_Bool)registerF200EventObserver:(id)arg1;
- (_Bool)unregisterF200EventObserver;
- (_Bool)fetchF200EventsWithOptions:(id)arg1 replyQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (_Bool)sendF200EchoCommandWithOptions:(id)arg1 replyQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (_Bool)sendF200QueryCommandWithOptions:(id)arg1 replyQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (_Bool)sendF200ConfigCommandWithOptions:(id)arg1 replyQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (_Bool)sendF200ArmCommandWithOptions:(id)arg1 storePasscode:(id)arg2 replyQueue:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (_Bool)sendF200DisarmCommandWithOptions:(id)arg1 storePasscode:(id)arg2 replyQueue:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (_Bool)sendF200GenericCommandWithPayload:(id)arg1 replyQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (_Bool)needOwnershipWarning:(id *)arg1;
- (_Bool)clearOwnershipWarning;
- (id)saveStoreHour:(id)arg1;
- (id)saveScreenSaverIdleDelay:(id)arg1;
- (id)getScreenSaverConfig;
- (_Bool)saveScreenSaverConfig:(id)arg1;

@end
