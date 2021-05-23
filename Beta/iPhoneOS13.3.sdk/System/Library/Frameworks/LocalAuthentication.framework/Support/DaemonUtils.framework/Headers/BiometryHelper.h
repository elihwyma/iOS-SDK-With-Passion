/*
 Image: /System/Library/Frameworks/LocalAuthentication.framework/Support/DaemonUtils.framework/DaemonUtils
 */

#import <Foundation/NSObject.h>

@class BKDevice, NSDictionary, NSMutableDictionary;

@interface BiometryHelper : NSObject

{
    NSMutableDictionary *_databaseHashesByUserId;
    _Bool _biometryRunning;
    NSDictionary *_identities;
    BKDevice *_device;
    long long _biometryType;
}

@property (nonatomic, readonly, getter=isBiometryRunning) _Bool biometryRunning;
@property (nonatomic, readonly) NSDictionary *identities;
@property (nonatomic, readonly) BKDevice *device;
@property (nonatomic, readonly) long long biometryType;

+ (id)sharedInstance;
+ (id)touchIdInstance;
+ (id)pearlInstance;
+ (id)_enumerateAvailableDevices;
+ (_Bool)_loadBiometricKit;
+ (Class)biometricKitClassFromString:(id)arg1;

- (void)dealloc;
- (_Bool)isEnrolled:(id)arg1 error:(id *)arg2;
- (id)initWithBiometryType:(long long)arg1;
- (_Bool)deviceHasBiometryWithError:(id *)arg1;
- (id)_identitiesForUser:(id)arg1;
- (_Bool)_isEnrolled:(id)arg1 error:(id *)arg2;
- (_Bool)isBiometryOnForUnlock:(id)arg1;
- (unsigned int)_uidFromUserId:(id)arg1;
- (id)_biolockoutStateForUser:(id)arg1 request:(id)arg2 error:(id *)arg3;
- (id)_lockoutErrorForExtendedState:(long long)arg1 userId:(id)arg2;
- (_Bool)_protectedConfigrationBoolForUser:(id)arg1 queryBlock:(CDUnknownBlockType)arg2;
- (void)_refreshIdentities;
- (_Bool)isAnyUserEnrolledWithError:(id *)arg1;
- (id)lockoutErrorForState:(long long)arg1 userId:(id)arg2;
- (_Bool)isLockedOutForUser:(id)arg1 request:(id)arg2 error:(id *)arg3;
- (id)biometryDatabaseHashForUser:(id)arg1;
- (void)_clearHashes;
- (_Bool)userPresent:(_Bool *)arg1 error:(id *)arg2;
- (_Bool)isBiometryOnForStockholm:(id)arg1;
- (_Bool)isIdentificationEnabled:(id)arg1;
- (id)catacombUUID:(id)arg1;
- (void)resetBiometry;

@end
