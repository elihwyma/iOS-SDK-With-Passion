/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class NSMutableArray;

@interface HDCodableMetadataDictionary : PBCodable <Swift>

{
    NSMutableArray *_keyValuePairs;
}

@property (retain, nonatomic) NSMutableArray *keyValuePairs;

+ (Class)keyValuePairsType;
+ (id)decodeMetadataFromData:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addKeyValuePairs:(id)arg1;
- (unsigned long long)keyValuePairsCount;
- (void)clearKeyValuePairs;
- (id)keyValuePairsAtIndex:(unsigned long long)arg1;

@end
