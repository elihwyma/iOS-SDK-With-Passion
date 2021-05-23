/*
 Image: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString, TPPBDisposition;

@interface TPPBDispositionEntry : PBCodable

{
    TPPBDisposition *_disposition;
    NSString *_peerID;
}

@property (nonatomic, readonly) _Bool hasPeerID;
@property (retain, nonatomic) NSString *peerID;
@property (nonatomic, readonly) _Bool hasDisposition;
@property (retain, nonatomic) TPPBDisposition *disposition;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
