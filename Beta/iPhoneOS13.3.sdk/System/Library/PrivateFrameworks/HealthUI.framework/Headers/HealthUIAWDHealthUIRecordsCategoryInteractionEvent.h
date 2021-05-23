/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <ProtocolBuffer/PBCodable.h>

@interface HealthUIAWDHealthUIRecordsCategoryInteractionEvent : PBCodable

{
    unsigned long long _timestamp;
    int _categoryID;
    int _type;
    struct {
        unsigned int timestamp:1;
        unsigned int categoryID:1;
        unsigned int type:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasCategoryID;
@property (nonatomic) int categoryID;
@property (nonatomic) _Bool hasType;
@property (nonatomic) int type;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)typeAsString:(int)arg1;
- (int)StringAsType:(id)arg1;
- (id)categoryIDAsString:(int)arg1;
- (int)StringAsCategoryID:(id)arg1;

@end
