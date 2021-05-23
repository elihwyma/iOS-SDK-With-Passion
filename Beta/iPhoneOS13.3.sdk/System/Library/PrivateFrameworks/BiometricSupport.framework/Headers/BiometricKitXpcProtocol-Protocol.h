/*
 Image: /System/Library/PrivateFrameworks/BiometricSupport.framework/BiometricSupport
 */

#import <BiometricSupport/Swift-Protocol.h>

@protocol BiometricKitXpcProtocol <Swift>

- (unsigned short)connect:client:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)disconnect:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)registerDelegate:client:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)notifyAppIsBackground:client: /* Error: Ran out of types for this method. */;
- (unsigned short)notifyAppIsInactive:client: /* Error: Ran out of types for this method. */;
- (unsigned short)enroll:user:options:client:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)match:options:client:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)detectPresenceWithOptions:client:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)cancel:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)updateIdentity:options:client:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)removeIdentity:options:client:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)removeAllIdentitiesForUser:options:client:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)getIdentityFromUUID:client:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)identities:client:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)registerDSID:options:client:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)registerStoreToken:client:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)getCountersignedStoreToken:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)diagnostics:options:client:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)timestampEvent:absoluteTime:client:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)getMaxIdentityCount:client:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)getFreeIdentityCount:user:client:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)setUserDSID:options:client:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)getIdentitiesDatabaseUUIDForUser:client:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)getIdentitiesDatabaseHashForUser:client:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)dropUnlockToken:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)forceBioLockoutForUser:options:client:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)enrollContinue:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)resetAppleConnectCounter:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)pullAlignmentData:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)pullMatchPolicyInfoData:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)getNodeTopologyForIdentity:client:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)getProtectedConfigurationForUser:client:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)getSystemProtectedConfiguration:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)setProtectedConfiguration:user:options:client:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)setSystemProtectedConfiguration:options:client:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)getProvisioningState:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)getBioLockoutStateForUser:client:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)getSensorCalibrationStatus:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)getCalibrationDataInfo:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)getSensorInfo:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)setDebugImages:client:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)pullCalibrationData:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)pullCaptureBuffer:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)pullDebugImageData:rotated:client:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)getLogs:client:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)fileRadarWithLogs:description:client:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)isFingerOn:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)enableBackgroundFdet:client:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)isAriadneSignpostsEnabled:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)isXARTAvailable:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)getDeviceState:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)startNewMatchAttempt:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)getBiometryAvailabilityForUser:client:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)completeEnrollment:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)suspendEnrollment:client:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)setTemplate:forIdentity:client:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)getAugmentationEligibilityForIdentity:client:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)fieldDiagnosticsControl:inData:client:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)queryIdentityMigrationFailureForUser:clear:client:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)logEventOrCode: /* Error: Ran out of types for this method. */;
- (unsigned short)enableMatchAutoRetry:client:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)pauseFaceDetectTimer:client:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)getLastMatchEvent:replyBlock: /* Error: Ran out of types for this method. */;

@end
