/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <ProtocolBuffer/PBRequest.h>

@class NSString;

@interface BLTPBSetNotificationsSoundRequest : PBRequest

{
    NSString *_sectionID;
    int _sound;
    struct {
        unsigned int sound:1;
    } _has;
}

@property (nonatomic) _Bool hasSound;
@property (nonatomic) int sound;
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
- (id)soundAsString:(int)arg1;
- (int)StringAsSound:(id)arg1;

@end
