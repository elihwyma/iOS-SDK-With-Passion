/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDPCodeFunctionInvokeResponseAttestationResponse : PBCodable

{
    NSMutableArray *_attestations;
}

@property (retain, nonatomic) NSMutableArray *attestations;

+ (Class)attestationsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addAttestations:(id)arg1;
- (unsigned long long)attestationsCount;
- (void)clearAttestations;
- (id)attestationsAtIndex:(unsigned long long)arg1;

@end
