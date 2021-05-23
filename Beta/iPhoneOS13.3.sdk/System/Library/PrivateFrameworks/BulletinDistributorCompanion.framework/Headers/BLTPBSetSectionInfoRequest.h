/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <ProtocolBuffer/PBRequest.h>

@class BLTPBSectionInfo;

@interface BLTPBSetSectionInfoRequest : PBRequest

{
    BLTPBSectionInfo *_sectionInfo;
}

@property (nonatomic, readonly) _Bool hasSectionInfo;
@property (retain, nonatomic) BLTPBSectionInfo *sectionInfo;

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
