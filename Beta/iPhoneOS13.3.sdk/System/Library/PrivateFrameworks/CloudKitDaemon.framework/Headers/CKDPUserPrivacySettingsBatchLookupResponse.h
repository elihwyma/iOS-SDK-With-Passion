/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDPUserPrivacySettingsBatchLookupResponse : PBCodable

{
    NSMutableArray *_containerPrivacySettings;
}

@property (retain, nonatomic) NSMutableArray *containerPrivacySettings;

+ (Class)containerPrivacySettingsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addContainerPrivacySettings:(id)arg1;
- (unsigned long long)containerPrivacySettingsCount;
- (void)clearContainerPrivacySettings;
- (id)containerPrivacySettingsAtIndex:(unsigned long long)arg1;

@end
