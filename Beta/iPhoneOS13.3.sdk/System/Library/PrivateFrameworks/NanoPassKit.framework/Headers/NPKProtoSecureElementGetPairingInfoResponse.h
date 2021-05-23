/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface NPKProtoSecureElementGetPairingInfoResponse : PBCodable

{
    NSData *_challengeResponse;
    NSData *_cryptogram;
    _Bool _authRandomSet;
    _Bool _pending;
    _Bool _success;
    struct {
        unsigned int authRandomSet:1;
        unsigned int pending:1;
        unsigned int success:1;
    } _has;
}

@property (nonatomic) _Bool hasPending;
@property (nonatomic) _Bool pending;
@property (nonatomic) _Bool hasSuccess;
@property (nonatomic) _Bool success;
@property (nonatomic, readonly) _Bool hasCryptogram;
@property (retain, nonatomic) NSData *cryptogram;
@property (nonatomic, readonly) _Bool hasChallengeResponse;
@property (retain, nonatomic) NSData *challengeResponse;
@property (nonatomic) _Bool hasAuthRandomSet;
@property (nonatomic) _Bool authRandomSet;

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
