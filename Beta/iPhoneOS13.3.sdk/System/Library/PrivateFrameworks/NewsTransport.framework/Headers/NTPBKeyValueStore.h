/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray;

@interface NTPBKeyValueStore : PBCodable

{
    long long _clientVersion;
    long long _version;
    NSMutableArray *_keyValuePairs;
    NSData *_plistSidecar;
    struct {
        unsigned int clientVersion:1;
        unsigned int version:1;
    } _has;
}

@property (nonatomic) _Bool hasVersion;
@property (nonatomic) long long version;
@property (nonatomic) _Bool hasClientVersion;
@property (nonatomic) long long clientVersion;
@property (retain, nonatomic) NSMutableArray *keyValuePairs;
@property (nonatomic, readonly) _Bool hasPlistSidecar;
@property (retain, nonatomic) NSData *plistSidecar;

+ (Class)keyValuePairsType;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)addKeyValuePairs:(id)arg1;
- (unsigned long long)keyValuePairsCount;
- (void)clearKeyValuePairs;
- (id)keyValuePairsAtIndex:(unsigned long long)arg1;

@end
