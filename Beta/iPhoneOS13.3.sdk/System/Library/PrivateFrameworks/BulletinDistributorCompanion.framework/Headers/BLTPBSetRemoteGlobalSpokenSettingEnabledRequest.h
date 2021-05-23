/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <ProtocolBuffer/PBRequest.h>

@interface BLTPBSetRemoteGlobalSpokenSettingEnabledRequest : PBRequest

{
    double _settingDate;
    _Bool _settingEnabled;
    struct {
        unsigned int settingDate:1;
        unsigned int settingEnabled:1;
    } _has;
}

@property (nonatomic) _Bool hasSettingEnabled;
@property (nonatomic) _Bool settingEnabled;
@property (nonatomic) _Bool hasSettingDate;
@property (nonatomic) double settingDate;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
