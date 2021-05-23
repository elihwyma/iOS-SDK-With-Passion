/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <ProtocolBuffer/PBRequest.h>

@class BLTPBSectionIcon, NSString;

@interface BLTPBSetSectionSubtypeParametersIconRequest : PBRequest

{
    unsigned long long _subtypeID;
    BLTPBSectionIcon *_icon;
    NSString *_sectionID;
    _Bool _defaultSubtype;
    struct {
        unsigned int subtypeID:1;
        unsigned int defaultSubtype:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasSectionID;
@property (retain, nonatomic) NSString *sectionID;
@property (nonatomic) _Bool hasSubtypeID;
@property (nonatomic) unsigned long long subtypeID;
@property (nonatomic) _Bool hasDefaultSubtype;
@property (nonatomic) _Bool defaultSubtype;
@property (nonatomic, readonly) _Bool hasIcon;
@property (retain, nonatomic) BLTPBSectionIcon *icon;

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
