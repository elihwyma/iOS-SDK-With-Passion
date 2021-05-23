/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <ProtocolBuffer/PBRequest.h>

@class NSString;

@interface BLTPBSetNotificationsCriticalAlertRequest : PBRequest

{
    int _criticalAlertSetting;
    NSString *_sectionID;
    struct {
        unsigned int criticalAlertSetting:1;
    } _has;
}

@property (nonatomic) _Bool hasCriticalAlertSetting;
@property (nonatomic) int criticalAlertSetting;
@property (nonatomic, readonly) _Bool hasSectionID;
@property (retain, nonatomic) NSString *sectionID;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)criticalAlertSettingAsString:(int)arg1;
- (int)StringAsCriticalAlertSetting:(id)arg1;

@end
