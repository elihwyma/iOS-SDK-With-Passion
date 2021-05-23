/*
 Image: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
 */

#import <ProtocolBuffer/PBCodable.h>

@interface WiFiAnalyticsAWDRxPhyErrors : PBCodable

{
    unsigned long long _bphyBadplcp;
    unsigned long long _bphyRxcrsglitch;
    unsigned long long _rfdisable;
    struct {
        unsigned int bphyBadplcp:1;
        unsigned int bphyRxcrsglitch:1;
        unsigned int rfdisable:1;
    } _has;
}

@property (nonatomic) _Bool hasRfdisable;
@property (nonatomic) unsigned long long rfdisable;
@property (nonatomic) _Bool hasBphyRxcrsglitch;
@property (nonatomic) unsigned long long bphyRxcrsglitch;
@property (nonatomic) _Bool hasBphyBadplcp;
@property (nonatomic) unsigned long long bphyBadplcp;

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
