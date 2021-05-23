/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <ProtocolBuffer/PBCodable.h>

#import <NewsCore/Swift-Protocol.h>

@class FCCKPRecordFieldIdentifier;

@interface FCCKPQuerySort : PBCodable <Swift>

{
    FCCKPRecordFieldIdentifier *_fieldName;
    int _order;
    struct {
        unsigned int order:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasFieldName;
@property (retain, nonatomic) FCCKPRecordFieldIdentifier *fieldName;
@property (nonatomic) _Bool hasOrder;
@property (nonatomic) int order;

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
