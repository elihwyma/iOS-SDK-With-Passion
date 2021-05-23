/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class CKDPLocationCoordinate, CKDPRecordFieldIdentifier;

__attribute__((visibility("hidden")))
@interface CKDPQuerySort : PBCodable

{
    CKDPLocationCoordinate *_coordinate;
    CKDPRecordFieldIdentifier *_fieldName;
    int _order;
    struct {
        unsigned int order:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasFieldName;
@property (retain, nonatomic) CKDPRecordFieldIdentifier *fieldName;
@property (nonatomic) _Bool hasOrder;
@property (nonatomic) int order;
@property (nonatomic, readonly) _Bool hasCoordinate;
@property (retain, nonatomic) CKDPLocationCoordinate *coordinate;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)orderAsString:(int)arg1;
- (int)StringAsOrder:(id)arg1;

@end
