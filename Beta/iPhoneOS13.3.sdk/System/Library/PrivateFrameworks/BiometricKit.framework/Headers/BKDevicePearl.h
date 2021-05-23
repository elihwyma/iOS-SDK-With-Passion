/*
 Image: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
 */

#import <BiometricKit/BKDevice.h>

@protocol BKDevicePearlDelegate;

@interface BKDevicePearl : BKDevice

@property (weak, nonatomic) id <BKDevicePearlDelegate> delegate;
@property (nonatomic, readonly) long long pearlState;

+ (_Bool)deviceAvailableWithError:(id *)arg1;

- (void)statusMessage:(unsigned int)arg1 client:(unsigned long long)arg2;
- (id)createEnrollOperationWithError:(id *)arg1;
- (id)createMatchOperationWithError:(id *)arg1;
- (id)createPresenceDetectOperationWithError:(id *)arg1;
- (long long)deviceStateWithStatus:(unsigned int)arg1;
- (long long)deviceEventWithStatus:(unsigned int)arg1;
- (id)queryIdentityMigrationFailureForUser:(unsigned int)arg1 error:(id *)arg2;
- (_Bool)clearIdentityMigrationFailureForUser:(unsigned int)arg1 error:(id *)arg2;
- (id)eligibleForAugmentation:(id)arg1 error:(id *)arg2;
- (id)generateFieldDiagnosticsNonceWithError:(id *)arg1;
- (_Bool)enableFieldDiagnosticsWithTatsuManifest:(id)arg1 error:(id *)arg2;
- (_Bool)disableFieldDiagnosticsWithError:(id *)arg1;
- (id)fieldDiagnosticsRemainingTimeWithError:(id *)arg1;
- (id)fieldDiagnosticsEncryptionKeyWithError:(id *)arg1;
- (id)fieldDiagnosticsTatsuManifestWithError:(id *)arg1;
- (_Bool)setTemplate:(id)arg1 forIdentity:(id)arg2 error:(id *)arg3;

@end
