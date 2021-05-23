/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, NTPBRecordBase;

@interface NTPBArticleListRecord : PBCodable

{
    NSMutableArray *_articleIDs;
    NTPBRecordBase *_base;
    NSString *_metadata;
    int _type;
    CDStruct_f953fb60 _has;
}

@property (nonatomic, readonly) _Bool hasBase;
@property (retain, nonatomic) NTPBRecordBase *base;
@property (nonatomic) _Bool hasType;
@property (nonatomic) int type;
@property (retain, nonatomic) NSMutableArray *articleIDs;
@property (nonatomic, readonly) _Bool hasMetadata;
@property (retain, nonatomic) NSString *metadata;

+ (Class)articleIDsType;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)addArticleIDs:(id)arg1;
- (void)clearArticleIDs;
- (unsigned long long)articleIDsCount;
- (id)articleIDsAtIndex:(unsigned long long)arg1;

@end
