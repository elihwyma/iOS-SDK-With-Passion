/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface _MRCryptoPairingMessageProtobuf : PBCodable

{
    NSData *_pairingData;
    int _state;
    int _status;
    _Bool _isRetrying;
    _Bool _isUsingSystemPairing;
    struct {
        unsigned int state:1;
        unsigned int status:1;
        unsigned int isRetrying:1;
        unsigned int isUsingSystemPairing:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasPairingData;
@property (retain, nonatomic) NSData *pairingData;
@property (nonatomic) _Bool hasStatus;
@property (nonatomic) int status;
@property (nonatomic) _Bool hasIsRetrying;
@property (nonatomic) _Bool isRetrying;
@property (nonatomic) _Bool hasIsUsingSystemPairing;
@property (nonatomic) _Bool isUsingSystemPairing;
@property (nonatomic) _Bool hasState;
@property (nonatomic) int state;

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
