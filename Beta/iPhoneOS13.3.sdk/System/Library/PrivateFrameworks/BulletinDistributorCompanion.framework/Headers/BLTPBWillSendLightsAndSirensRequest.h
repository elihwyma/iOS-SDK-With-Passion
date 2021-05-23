/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <ProtocolBuffer/PBRequest.h>

@class NSString;

@interface BLTPBWillSendLightsAndSirensRequest : PBRequest

{
    NSString *_publisherBulletinID;
    NSString *_recordID;
    NSString *_sectionID;
    _Bool _systemApp;
    struct {
        unsigned int systemApp:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasPublisherBulletinID;
@property (retain, nonatomic) NSString *publisherBulletinID;
@property (nonatomic, readonly) _Bool hasRecordID;
@property (retain, nonatomic) NSString *recordID;
@property (nonatomic, readonly) _Bool hasSectionID;
@property (retain, nonatomic) NSString *sectionID;
@property (nonatomic) _Bool hasSystemApp;
@property (nonatomic) _Bool systemApp;

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
