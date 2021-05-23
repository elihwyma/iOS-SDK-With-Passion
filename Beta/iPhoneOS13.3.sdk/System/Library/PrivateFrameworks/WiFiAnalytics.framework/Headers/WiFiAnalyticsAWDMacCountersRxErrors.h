/*
 Image: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
 */

#import <ProtocolBuffer/PBCodable.h>

@interface WiFiAnalyticsAWDMacCountersRxErrors : PBCodable

{
    unsigned long long _rxbadfcs;
    unsigned long long _rxbadplcp;
    unsigned long long _rxcrsglitch;
    unsigned long long _rxfrmtoolong;
    unsigned long long _rxfrmtooshrt;
    unsigned long long _rxinvmachdr;
    unsigned long long _rxstrt;
    struct {
        unsigned int rxbadfcs:1;
        unsigned int rxbadplcp:1;
        unsigned int rxcrsglitch:1;
        unsigned int rxfrmtoolong:1;
        unsigned int rxfrmtooshrt:1;
        unsigned int rxinvmachdr:1;
        unsigned int rxstrt:1;
    } _has;
}

@property (nonatomic) _Bool hasRxfrmtoolong;
@property (nonatomic) unsigned long long rxfrmtoolong;
@property (nonatomic) _Bool hasRxfrmtooshrt;
@property (nonatomic) unsigned long long rxfrmtooshrt;
@property (nonatomic) _Bool hasRxinvmachdr;
@property (nonatomic) unsigned long long rxinvmachdr;
@property (nonatomic) _Bool hasRxbadfcs;
@property (nonatomic) unsigned long long rxbadfcs;
@property (nonatomic) _Bool hasRxbadplcp;
@property (nonatomic) unsigned long long rxbadplcp;
@property (nonatomic) _Bool hasRxcrsglitch;
@property (nonatomic) unsigned long long rxcrsglitch;
@property (nonatomic) _Bool hasRxstrt;
@property (nonatomic) unsigned long long rxstrt;

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
