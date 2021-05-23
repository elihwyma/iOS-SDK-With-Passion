/*
 Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface _MPUProtoBufUserActivityContext : PBCodable

{
    NSMutableArray *_containerItems;
    int _originatorType;
    int _originatorVersion;
    struct {
        unsigned int originatorType:1;
        unsigned int originatorVersion:1;
    } _has;
}

@property (retain, nonatomic) NSMutableArray *containerItems;
@property (nonatomic) _Bool hasOriginatorType;
@property (nonatomic) int originatorType;
@property (nonatomic) _Bool hasOriginatorVersion;
@property (nonatomic) int originatorVersion;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addContainerItems:(id)arg1;
- (unsigned long long)containerItemsCount;
- (void)clearContainerItems;
- (id)containerItemsAtIndex:(unsigned long long)arg1;

@end
