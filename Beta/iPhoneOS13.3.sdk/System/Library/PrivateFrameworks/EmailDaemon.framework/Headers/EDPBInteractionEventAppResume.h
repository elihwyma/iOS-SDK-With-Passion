/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <EmailDaemon/Swift-Protocol.h>

@interface EDPBInteractionEventAppResume : PBCodable <Swift>

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)withHasher:(id)arg1 setMessage:(id)arg2 data:(id)arg3;

@end
