/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBRequest.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface CKDPCodeFunctionInvokeRequestAttestationRequest : PBRequest

{
    NSData *_entropy;
}

@property (nonatomic, readonly) _Bool hasEntropy;
@property (retain, nonatomic) NSData *entropy;

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
