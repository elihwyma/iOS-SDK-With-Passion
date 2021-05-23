/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface NTPBCacheCoordinatorHints : PBCodable

{
    long long _version;
    NSMutableArray *_cacheHints;
    CDStruct_f20694ce _has;
}

@property (nonatomic) _Bool hasVersion;
@property (nonatomic) long long version;
@property (retain, nonatomic) NSMutableArray *cacheHints;

+ (Class)cacheHintsType;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)addCacheHints:(id)arg1;
- (void)clearCacheHints;
- (unsigned long long)cacheHintsCount;
- (id)cacheHintsAtIndex:(unsigned long long)arg1;

@end
