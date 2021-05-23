/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <ProtocolBuffer/PBCodable.h>

#import <NewsCore/Swift-Protocol.h>

@class NSMutableArray;

@interface FCCKPRequestedFields : PBCodable <Swift>

{
    NSMutableArray *_fields;
}

@property (retain, nonatomic) NSMutableArray *fields;

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
- (void)addFields:(id)arg1;
- (unsigned long long)fieldsCount;
- (void)clearFields;
- (id)fieldsAtIndex:(unsigned long long)arg1;

@end
