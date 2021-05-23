/*
 Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
 */

#import <ProtocolBuffer/PBRequest.h>

@class NSString;

@interface ASCodableWithdrawInviteRequest : PBRequest

{
    NSString *_handshakeToken;
}

@property (nonatomic, readonly) _Bool hasHandshakeToken;
@property (retain, nonatomic) NSString *handshakeToken;

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
