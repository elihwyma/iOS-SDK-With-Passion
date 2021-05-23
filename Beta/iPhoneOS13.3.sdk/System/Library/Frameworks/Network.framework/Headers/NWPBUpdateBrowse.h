/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface NWPBUpdateBrowse : PBCodable

{
    NSString *_clientUUID;
    NSMutableArray *_discoveredEndpoints;
}

@property (nonatomic, readonly) _Bool hasClientUUID;
@property (retain, nonatomic) NSString *clientUUID;
@property (retain, nonatomic) NSMutableArray *discoveredEndpoints;

+ (Class)discoveredEndpointsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)clearDiscoveredEndpoints;
- (void)addDiscoveredEndpoints:(id)arg1;
- (unsigned long long)discoveredEndpointsCount;
- (id)discoveredEndpointsAtIndex:(unsigned long long)arg1;

@end
