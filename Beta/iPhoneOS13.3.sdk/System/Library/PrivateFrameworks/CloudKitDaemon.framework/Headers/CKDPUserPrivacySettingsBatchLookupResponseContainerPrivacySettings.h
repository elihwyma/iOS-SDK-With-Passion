/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class CKDPUserPrivacySettings, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CKDPUserPrivacySettingsBatchLookupResponseContainerPrivacySettings : PBCodable

{
    NSMutableArray *_applicationBundles;
    NSString *_applicationContainer;
    int _applicationContainerEnvironment;
    CKDPUserPrivacySettings *_userPrivacySettings;
    struct {
        unsigned int applicationContainerEnvironment:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasApplicationContainer;
@property (retain, nonatomic) NSString *applicationContainer;
@property (nonatomic) _Bool hasApplicationContainerEnvironment;
@property (nonatomic) int applicationContainerEnvironment;
@property (retain, nonatomic) NSMutableArray *applicationBundles;
@property (nonatomic, readonly) _Bool hasUserPrivacySettings;
@property (retain, nonatomic) CKDPUserPrivacySettings *userPrivacySettings;

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
- (id)applicationContainerEnvironmentAsString:(int)arg1;
- (int)StringAsApplicationContainerEnvironment:(id)arg1;

@end
