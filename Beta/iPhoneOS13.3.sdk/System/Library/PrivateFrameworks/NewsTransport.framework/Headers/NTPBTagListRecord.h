/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NTPBRecordBase;

@interface NTPBTagListRecord : PBCodable

{
    NTPBRecordBase *_base;
    NSMutableArray *_tagIDs;
}

@property (nonatomic, readonly) _Bool hasBase;
@property (retain, nonatomic) NTPBRecordBase *base;
@property (retain, nonatomic) NSMutableArray *tagIDs;

+ (Class)tagIDsType;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)addTagIDs:(id)arg1;
- (void)clearTagIDs;
- (unsigned long long)tagIDsCount;
- (id)tagIDsAtIndex:(unsigned long long)arg1;

@end
