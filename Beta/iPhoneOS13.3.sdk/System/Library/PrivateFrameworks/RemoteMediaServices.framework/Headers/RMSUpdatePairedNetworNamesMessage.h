/*
 Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface RMSUpdatePairedNetworNamesMessage : PBCodable

{
    NSMutableArray *_pairedNetworkNames;
    int _sessionIdentifier;
    CDStruct_07a29e00 _has;
}

@property (nonatomic) _Bool hasSessionIdentifier;
@property (nonatomic) int sessionIdentifier;
@property (retain, nonatomic) NSMutableArray *pairedNetworkNames;

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
