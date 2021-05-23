/*
 Image: /System/Library/PrivateFrameworks/KeychainCircle.framework/KeychainCircle
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface OTSOSMessage : PBCodable

{
    NSData *_circleBlob;
    NSData *_credential;
    NSData *_initialSyncItems;
    NSData *_peerInfo;
}

@property (nonatomic, readonly) _Bool hasCredential;
@property (retain, nonatomic) NSData *credential;
@property (nonatomic, readonly) _Bool hasPeerInfo;
@property (retain, nonatomic) NSData *peerInfo;
@property (nonatomic, readonly) _Bool hasCircleBlob;
@property (retain, nonatomic) NSData *circleBlob;
@property (nonatomic, readonly) _Bool hasInitialSyncItems;
@property (retain, nonatomic) NSData *initialSyncItems;

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
