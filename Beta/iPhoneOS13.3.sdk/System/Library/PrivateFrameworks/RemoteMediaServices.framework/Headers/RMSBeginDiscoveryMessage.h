/*
 Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface RMSBeginDiscoveryMessage : PBCodable

{
    int _discoveryTypes;
    NSMutableArray *_pairedNetworkNames;
    _Bool _hasPairedNetworkNames;
    struct {
        unsigned int discoveryTypes:1;
        unsigned int hasPairedNetworkNames:1;
    } _has;
}

@property (nonatomic) _Bool hasDiscoveryTypes;
@property (nonatomic) int discoveryTypes;
@property (retain, nonatomic) NSMutableArray *pairedNetworkNames;
@property (nonatomic) _Bool hasHasPairedNetworkNames;
@property (nonatomic) _Bool hasPairedNetworkNames;

+ (Class)pairedNetworkNamesType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addPairedNetworkNames:(id)arg1;
- (unsigned long long)pairedNetworkNamesCount;
- (void)clearPairedNetworkNames;
- (id)pairedNetworkNamesAtIndex:(unsigned long long)arg1;

@end
