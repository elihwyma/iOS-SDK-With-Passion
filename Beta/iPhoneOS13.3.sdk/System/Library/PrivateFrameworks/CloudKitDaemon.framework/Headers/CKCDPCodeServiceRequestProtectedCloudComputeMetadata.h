/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKCDPCodeServiceRequestProtectedCloudComputeMetadata : PBCodable

{
    NSMutableArray *_cryptoSessions;
}

@property (retain, nonatomic) NSMutableArray *cryptoSessions;

+ (Class)cryptoSessionsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addCryptoSessions:(id)arg1;
- (unsigned long long)cryptoSessionsCount;
- (void)clearCryptoSessions;
- (id)cryptoSessionsAtIndex:(unsigned long long)arg1;

@end
