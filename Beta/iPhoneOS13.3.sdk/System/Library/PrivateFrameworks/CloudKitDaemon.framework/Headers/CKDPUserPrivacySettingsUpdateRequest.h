/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBRequest.h>

@class CKDPUserPrivacySettings, NSString;

__attribute__((visibility("hidden")))
@interface CKDPUserPrivacySettingsUpdateRequest : PBRequest

{
    NSString *_bundleIdentifier;
    CKDPUserPrivacySettings *_userPrivacySettings;
}

@property (nonatomic, readonly) _Bool hasBundleIdentifier;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (nonatomic, readonly) _Bool hasUserPrivacySettings;
@property (retain, nonatomic) CKDPUserPrivacySettings *userPrivacySettings;

+ (id)options;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;

@end
