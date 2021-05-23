/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <ProtocolBuffer/PBCodable.h>

@interface NNMKProtoWebKitStatusNotification : PBCodable

{
    _Bool _supportsWebKit;
    struct {
        unsigned int supportsWebKit:1;
    } _has;
}

@property (nonatomic) _Bool hasSupportsWebKit;
@property (nonatomic) _Bool supportsWebKit;

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
