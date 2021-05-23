/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class CKAccountOverrideInfo, CKContainerID, NSDictionary, NSString;

@interface CKContainerSetupInfo : NSObject

{
    _Bool _captureResponseHTTPHeaders;
    _Bool _wantsSiloedContext;
    _Bool _useZoneWidePCS;
    _Bool _holdAllOperations;
    _Bool _returnPCSMetadata;
    _Bool _bypassPCSEncryption;
    _Bool _forceEnableReadOnlyManatee;
    _Bool _masqueradeAsThirdPartyApp;
    unsigned int _clientSDKVersion;
    CKContainerID *_containerID;
    NSString *_sourceApplicationBundleIdentifier;
    CKAccountOverrideInfo *_accountInfoOverride;
    NSDictionary *_fakeEntitlements;
    unsigned long long _mmcsEncryptionSupport;
    NSString *_containerEncryptionServiceName;
    NSString *_personaIdentifier;
}

@property (retain, nonatomic) CKContainerID *containerID;
@property (retain, nonatomic) NSString *sourceApplicationBundleIdentifier;
@property (retain, nonatomic) CKAccountOverrideInfo *accountInfoOverride;
@property (nonatomic) _Bool captureResponseHTTPHeaders;
@property (nonatomic) _Bool wantsSiloedContext;
@property (nonatomic) _Bool useZoneWidePCS;
@property (retain, nonatomic) NSDictionary *fakeEntitlements;
@property (nonatomic) _Bool holdAllOperations;
@property (nonatomic) _Bool returnPCSMetadata;
@property (nonatomic) unsigned long long mmcsEncryptionSupport;
@property (retain, nonatomic) NSString *containerEncryptionServiceName;
@property (nonatomic) _Bool bypassPCSEncryption;
@property (nonatomic) _Bool forceEnableReadOnlyManatee;
@property (nonatomic) unsigned int clientSDKVersion;
@property (nonatomic) _Bool masqueradeAsThirdPartyApp;
@property (retain, nonatomic) NSString *personaIdentifier;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
