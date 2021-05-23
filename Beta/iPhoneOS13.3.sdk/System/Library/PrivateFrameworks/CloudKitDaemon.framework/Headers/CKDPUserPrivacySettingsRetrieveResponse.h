/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class CKDPUserPrivacySettings, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDPUserPrivacySettingsRetrieveResponse : PBCodable

{
    NSMutableArray *_applicationBundles;
    CKDPUserPrivacySettings *_userPrivacySettings;
}

@property (nonatomic, readonly) _Bool hasUserPrivacySettings;
@property (retain, nonatomic) CKDPUserPrivacySettings *userPrivacySettings;
@property (retain, nonatomic) NSMutableArray *applicationBundles;

+ (Class)applicationBundleType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addApplicationBundle:(id)arg1;
- (unsigned long long)applicationBundlesCount;
- (void)clearApplicationBundles;
- (id)applicationBundleAtIndex:(unsigned long long)arg1;

@end
