/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <ProtocolBuffer/PBRequest.h>

@class NSString;

@interface BLTPBSetNotificationsAlertLevelRequest : PBRequest

{
    int _level;
    NSString *_sectionID;
    _Bool _mirror;
    struct {
        unsigned int level:1;
        unsigned int mirror:1;
    } _has;
}

@property (nonatomic) _Bool hasLevel;
@property (nonatomic) int level;
@property (nonatomic, readonly) _Bool hasSectionID;
@property (retain, nonatomic) NSString *sectionID;
@property (nonatomic) _Bool hasMirror;
@property (nonatomic) _Bool mirror;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)levelAsString:(int)arg1;
- (int)StringAsLevel:(id)arg1;

@end
