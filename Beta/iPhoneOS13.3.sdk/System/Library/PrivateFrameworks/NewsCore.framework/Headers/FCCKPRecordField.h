/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <ProtocolBuffer/PBCodable.h>

#import <NewsCore/Swift-Protocol.h>

@class FCCKPRecordFieldIdentifier, FCCKPRecordFieldValue;

@interface FCCKPRecordField : PBCodable <Swift>

{
    FCCKPRecordFieldIdentifier *_identifier;
    FCCKPRecordFieldValue *_value;
}

@property (nonatomic, readonly) _Bool hasIdentifier;
@property (retain, nonatomic) FCCKPRecordFieldIdentifier *identifier;
@property (nonatomic, readonly) _Bool hasValue;
@property (retain, nonatomic) FCCKPRecordFieldValue *value;

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
