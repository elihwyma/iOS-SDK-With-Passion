/*
 Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _NMRProxiedOriginsProtobuf : PBCodable

{
    NSMutableArray *_origins;
}

@property (retain, nonatomic) NSMutableArray *origins;

+ (Class)originsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addOrigins:(id)arg1;
- (unsigned long long)originsCount;
- (void)clearOrigins;
- (id)originsAtIndex:(unsigned long long)arg1;

@end
