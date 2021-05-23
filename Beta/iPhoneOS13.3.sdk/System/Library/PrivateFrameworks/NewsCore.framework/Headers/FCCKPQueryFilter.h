/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <ProtocolBuffer/PBCodable.h>

#import <NewsCore/Swift-Protocol.h>

@class FCCKPRecordFieldIdentifier, FCCKPRecordFieldValue;

@interface FCCKPQueryFilter : PBCodable <Swift>

{
    FCCKPRecordFieldIdentifier *_fieldName;
    FCCKPRecordFieldValue *_fieldValue;
    int _type;
    CDStruct_f953fb60 _has;
}

@property (nonatomic, readonly) _Bool hasFieldName;
@property (retain, nonatomic) FCCKPRecordFieldIdentifier *fieldName;
@property (nonatomic, readonly) _Bool hasFieldValue;
@property (retain, nonatomic) FCCKPRecordFieldValue *fieldValue;
@property (nonatomic) _Bool hasType;
@property (nonatomic) int type;

- (void)dealloc;
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
