/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CKDApplicationMetadata : NSObject

{
    _Bool _isCKSystemService;
    _Bool _canMasquerade;
    _Bool _canSetEnvironment;
    _Bool _allowCustomAccounts;
    _Bool _canAccessProtectionData;
    _Bool _canAccessZoneProtectionData;
    _Bool _canSetDeviceIdentifier;
    _Bool _hasAccessDuringBuddy;
    _Bool _hasLightweightPCS;
    _Bool _hasTCCAuthorization;
    _Bool _allowsPowerNapScheduling;
    _Bool _isOOPUI;
    _Bool _allowsParticipantPII;
    _Bool _displaysSystemAcceptPrompt;
    _Bool _canUseNonLegacyShareURL;
    _Bool _allowUnverifiedAccount;
    _Bool _canSetExplicitCodeOperationURL;
    NSString *_apsEnvironmentString;
    long long _isApplication;
    NSString *_entitlementSpecifiedPCSServiceName;
    NSString *_applicationIdentifier;
    NSString *_clientPrefix;
    NSString *_pushBundleID;
    NSString *_associatedApplicationBundleID;
    NSString *_applicationContainerPath;
}

@property (retain, nonatomic) NSString *apsEnvironmentString;
@property (nonatomic) long long isApplication;
@property (nonatomic) _Bool isCKSystemService;
@property (nonatomic) _Bool canMasquerade;
@property (nonatomic) _Bool canSetEnvironment;
@property (nonatomic) _Bool allowCustomAccounts;
@property (nonatomic) _Bool canAccessProtectionData;
@property (nonatomic) _Bool canAccessZoneProtectionData;
@property (nonatomic) _Bool canSetDeviceIdentifier;
@property (nonatomic) _Bool hasAccessDuringBuddy;
@property (nonatomic) _Bool hasLightweightPCS;
@property (nonatomic) _Bool hasTCCAuthorization;
@property (nonatomic) _Bool allowsPowerNapScheduling;
@property (nonatomic) _Bool isOOPUI;
@property (nonatomic) _Bool allowsParticipantPII;
@property (nonatomic) _Bool displaysSystemAcceptPrompt;
@property (retain, nonatomic) NSString *entitlementSpecifiedPCSServiceName;
@property (retain, nonatomic) NSString *applicationIdentifier;
@property (retain, nonatomic) NSString *clientPrefix;
@property (retain, nonatomic) NSString *pushBundleID;
@property (retain, nonatomic) NSString *associatedApplicationBundleID;
@property (retain, nonatomic) NSString *applicationContainerPath;
@property (nonatomic) _Bool canUseNonLegacyShareURL;
@property (nonatomic) _Bool allowUnverifiedAccount;
@property (nonatomic) _Bool canSetExplicitCodeOperationURL;

- (id)init;

@end
