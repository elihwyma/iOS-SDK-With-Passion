/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <ProtocolBuffer/PBRequest.h>

@class NSString;

@interface BLTPBCancelBulletinRequest : PBRequest

{
    double _date;
    unsigned int _feed;
    NSString *_publisherMatchID;
    NSString *_universalSectionID;
    struct {
        unsigned int date:1;
        unsigned int feed:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasUniversalSectionID;
@property (retain, nonatomic) NSString *universalSectionID;
@property (nonatomic, readonly) _Bool hasPublisherMatchID;
@property (retain, nonatomic) NSString *publisherMatchID;
@property (nonatomic) _Bool hasFeed;
@property (nonatomic) unsigned int feed;
@property (nonatomic) _Bool hasDate;
@property (nonatomic) double date;

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
