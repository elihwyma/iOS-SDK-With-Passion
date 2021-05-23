/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBRequest.h>

@interface NPKProtoSecureElementGetPairingInfoRequest : PBRequest

{
    _Bool _setAuthRandomIfNotPaired;
    struct {
        unsigned int setAuthRandomIfNotPaired:1;
    } _has;
}

@property (nonatomic) _Bool hasSetAuthRandomIfNotPaired;
@property (nonatomic) _Bool setAuthRandomIfNotPaired;

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
