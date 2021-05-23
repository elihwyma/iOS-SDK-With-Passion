/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class CKDPLocationBound, CKDPRecordFieldIdentifier, CKDPRecordFieldValue;

__attribute__((visibility("hidden")))
@interface CKDPQueryFilter : PBCodable

{
    CKDPLocationBound *_bounds;
    CKDPRecordFieldIdentifier *_fieldName;
    CKDPRecordFieldValue *_fieldValue;
    int _type;
    CDStruct_f953fb60 _has;
}

@property (nonatomic, readonly) _Bool hasFieldName;
@property (retain, nonatomic) CKDPRecordFieldIdentifier *fieldName;
@property (nonatomic, readonly) _Bool hasFieldValue;
@property (retain, nonatomic) CKDPRecordFieldValue *fieldValue;
@property (nonatomic, readonly) _Bool hasBounds;
@property (retain, nonatomic) CKDPLocationBound *bounds;
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

@end
