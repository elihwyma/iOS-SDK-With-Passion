/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, PBUnknownFields;

@interface MSPCollectionItemReplicaStorage : PBCodable

{
    PBUnknownFields *_unknownFields;
    NSString *_clientIdentifier;
    NSMutableArray *_records;
}

@property (nonatomic, readonly) _Bool hasClientIdentifier;
@property (retain, nonatomic) NSString *clientIdentifier;
@property (retain, nonatomic) NSMutableArray *records;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)recordsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addRecords:(id)arg1;
- (unsigned long long)recordsCount;
- (void)clearRecords;
- (id)recordsAtIndex:(unsigned long long)arg1;

@end
