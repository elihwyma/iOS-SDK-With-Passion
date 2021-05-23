/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <CloudDocsDaemon/Swift-Protocol.h>

@class NSData, NSPersonNameComponents;

@interface BRFieldUserIdentity : PBCodable <Swift>

{
    NSData *_serializedNameComponents;
}

@property (retain, nonatomic) NSPersonNameComponents *nameComponents;
@property (nonatomic, readonly) _Bool hasSerializedNameComponents;
@property (retain, nonatomic) NSData *serializedNameComponents;

+ (id)unknownPersonNameComponents;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)initWithCKUserIdentity:(id)arg1;
- (id)nameComponentsAcceptUnknownUser:(_Bool)arg1;

@end
