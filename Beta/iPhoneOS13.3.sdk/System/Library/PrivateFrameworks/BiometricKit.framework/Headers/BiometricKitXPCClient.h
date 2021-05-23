/*
 Image: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
 */

#import <NSObject.h>

@class BiometricKitXPCClientConnection;

@protocol BiometricKitDelegateXpcProtocol;

__attribute__((visibility("hidden")))
@interface BiometricKitXPCClient : NSObject

{
    unsigned long long _clientID;
    unsigned long long _connectionID;
    long long _clientType;
    BiometricKitXPCClientConnection *_connection;
    _Bool _connectionInitialized;
    _Bool _connectionInvalidated;
    id <BiometricKitDelegateXpcProtocol> _delegate;
}

@property (weak, nonatomic) id <BiometricKitDelegateXpcProtocol> delegate;
@property (nonatomic, readonly) unsigned long long clientID;
@property (nonatomic, readonly) unsigned long long connectionId;

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (void)cancel;
- (void)disconnect;
- (int)connect;
- (id)identities:(id)arg1;
- (long long)getMaxIdentityCount:(int)arg1;
- (void)logEventOrCode:(unsigned long long)arg1;
- (void)interruptConnection;
- (int)initializeConnection;
- (id)initWithDeviceType:(long long)arg1 clientType:(long long)arg2;
- (void)invalidateConnection;
- (void)registerDelegateCall:(_Bool)arg1;
- (void)registerDelegate:(_Bool)arg1;
- (void)notifyAppIsBackground:(_Bool)arg1;
- (void)notifyAppIsInactive:(_Bool)arg1;
- (void)enroll:(int)arg1 forUser:(unsigned int)arg2 withOptions:(id)arg3 async:(_Bool)arg4 withReply:(CDUnknownBlockType)arg5;
- (void)match:(id)arg1 withOptions:(id)arg2 async:(_Bool)arg3 withReply:(CDUnknownBlockType)arg4;
- (void)detectPresenceWithOptions:(id)arg1 async:(_Bool)arg2 withReply:(CDUnknownBlockType)arg3;
- (int)updateIdentity:(id)arg1 withOptions:(id)arg2;
- (int)removeIdentity:(id)arg1 withOptions:(id)arg2;
- (int)removeAllIdentitiesForUser:(unsigned int)arg1 withOptions:(id)arg2;
- (id)getIdentityFromUUID:(id)arg1;
- (long long)getFreeIdentityCount:(int)arg1 forUser:(unsigned int)arg2;
- (int)enrollContinue;
- (id)pullAlignmentData;
- (id)pullMatchPolicyInfoData;
- (id)getNodeTopologyForIdentity:(id)arg1;
- (id)getProtectedConfigurationForUser:(unsigned int)arg1;
- (id)getSystemProtectedConfiguration;
- (int)setProtectedConfiguration:(id)arg1 forUser:(unsigned int)arg2 withOptions:(id)arg3;
- (int)setSystemProtectedConfiguration:(id)arg1 withOptions:(id)arg2;
- (int)getBioLockoutState:(long long *)arg1 forUser:(unsigned int)arg2;
- (long long)getProvisioningState;
- (int)dropUnlockToken;
- (int)forceBioLockoutForUser:(unsigned int)arg1 withOptions:(id)arg2;
- (int)registerDSID:(unsigned long long)arg1 withOptions:(id)arg2;
- (int)resetAppleConnectCounter;
- (int)registerStoreToken:(id)arg1;
- (int)getCountersignedStoreToken:(id *)arg1;
- (id)getIdentitiesDatabaseUUIDForUser:(unsigned int)arg1;
- (id)getIdentitiesDatabaseHashForUser:(unsigned int)arg1;
- (int)diagnostics:(int)arg1 withOptions:(id)arg2 passed:(_Bool *)arg3 withDetails:(id *)arg4;
- (void)timestampEvent:(unsigned long long)arg1 absoluteTime:(unsigned long long)arg2;
- (int)setUserDSID:(unsigned long long)arg1 withOptions:(id)arg2;
- (long long)getSensorCalibrationStatus;
- (id)getCalibrationDataInfo;
- (id)getSensorInfo;
- (id)pullCalibrationData;
- (id)pullCaptureBuffer;
- (id)pullDebugImageData:(_Bool)arg1 rotated:(_Bool)arg2 imageWidth:(unsigned int *)arg3 imageHeight:(unsigned int *)arg4;
- (void)setDebugImages:(_Bool)arg1;
- (id)getLogs:(_Bool)arg1 withDetails:(id *)arg2;
- (_Bool)fileRadarWithLogs:(id)arg1 withDescription:(id)arg2;
- (_Bool)isFingerOn;
- (int)enableBackgroundFdet:(_Bool)arg1;
- (_Bool)isAriadneSignpostsEnabled;
- (_Bool)isXARTAvailable;
- (long long)getDeviceState;
- (int)startNewMatchAttempt;
- (int)getBiometryAvailability:(long long *)arg1 forUser:(unsigned int)arg2;
- (int)completeEnrollment;
- (int)suspendEnrollment:(_Bool)arg1;
- (int)setTemplate:(id)arg1 forIdentity:(id)arg2;
- (int)getAugmentationEligibility:(_Bool *)arg1 forIdentity:(id)arg2;
- (int)fieldDiagnosticsControl:(unsigned int)arg1 inData:(id)arg2 outData:(id *)arg3;
- (int)queryIdentityMigrationFailureForUser:(unsigned int)arg1 failed:(_Bool *)arg2 clear:(_Bool)arg3;
- (int)enableMatchAutoRetry:(_Bool)arg1;
- (int)pauseFaceDetectTimer:(_Bool)arg1;
- (int)getLastMatchEvent:(id *)arg1;

@end
