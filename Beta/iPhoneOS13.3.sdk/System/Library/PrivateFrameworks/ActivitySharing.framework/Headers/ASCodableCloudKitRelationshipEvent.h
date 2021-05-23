/*
 Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
 */

#import <ProtocolBuffer/PBCodable.h>

@interface ASCodableCloudKitRelationshipEvent : PBCodable

{
    long long _anchor;
    double _date;
    long long _type;
    struct {
        unsigned int anchor:1;
        unsigned int date:1;
        unsigned int type:1;
    } _has;
}

@property (nonatomic) _Bool hasAnchor;
@property (nonatomic) long long anchor;
@property (nonatomic) _Bool hasType;
@property (nonatomic) long long type;
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
