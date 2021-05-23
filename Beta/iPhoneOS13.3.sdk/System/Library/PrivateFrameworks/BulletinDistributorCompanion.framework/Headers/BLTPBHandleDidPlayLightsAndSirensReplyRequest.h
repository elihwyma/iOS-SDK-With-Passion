/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <ProtocolBuffer/PBRequest.h>

@class NSString;

@interface BLTPBHandleDidPlayLightsAndSirensReplyRequest : PBRequest

{
    double _date;
    NSString *_phoneSectionID;
    NSString *_publisherMatchID;
    NSString *_replyToken;
    _Bool _didPlayLightsAndSirens;
    struct {
        unsigned int date:1;
        unsigned int didPlayLightsAndSirens:1;
    } _has;
}

@property (nonatomic) _Bool hasDidPlayLightsAndSirens;
@property (nonatomic) _Bool didPlayLightsAndSirens;
@property (nonatomic, readonly) _Bool hasPublisherMatchID;
@property (retain, nonatomic) NSString *publisherMatchID;
@property (nonatomic, readonly) _Bool hasPhoneSectionID;
@property (retain, nonatomic) NSString *phoneSectionID;
@property (nonatomic) _Bool hasDate;
@property (nonatomic) double date;
@property (nonatomic, readonly) _Bool hasReplyToken;
@property (retain, nonatomic) NSString *replyToken;

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
