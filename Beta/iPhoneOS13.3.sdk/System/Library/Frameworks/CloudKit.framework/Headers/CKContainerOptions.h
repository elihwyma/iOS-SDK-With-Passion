/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class CKAccountOverrideInfo, CKUploadRequestConfiguration, NSString;

@interface CKContainerOptions : NSObject

{
    _Bool _captureResponseHTTPHeaders;
    _Bool _useZoneWidePCS;
    _Bool _wantsSiloedContext;
    _Bool _returnPCSMetadata;
    _Bool _bypassPCSEncryption;
    _Bool _enforceNamedOperationGroups;
    _Bool _forceEnableReadOnlyManatee;
    CKAccountOverrideInfo *_accountInfoOverride;
    unsigned long long _mmcsEncryptionSupport;
    NSString *_encryptionServiceName;
    CKUploadRequestConfiguration *_uploadRequestConfiguration;
    NSString *_personaIdentifier;
}

@property (retain, nonatomic) NSString *personaIdentifier;
@property (nonatomic) _Bool captureResponseHTTPHeaders;
@property (nonatomic) _Bool useZoneWidePCS;
@property (nonatomic) _Bool wantsSiloedContext;
@property (copy, nonatomic) CKAccountOverrideInfo *accountInfoOverride;
@property (nonatomic) _Bool returnPCSMetadata;
@property (nonatomic) unsigned long long mmcsEncryptionSupport;
@property (retain, nonatomic) NSString *encryptionServiceName;
@property (nonatomic) _Bool bypassPCSEncryption;
@property (nonatomic) _Bool enforceNamedOperationGroups;
@property (nonatomic) _Bool forceEnableReadOnlyManatee;
@property (retain, nonatomic) CKUploadRequestConfiguration *uploadRequestConfiguration;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setUseMMCSEncryptionV2:(_Bool)arg1;

@end
