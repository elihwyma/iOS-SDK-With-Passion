/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@interface _MRReceivedCommandAppOptionsProtobuf : PBCodable

{
    _Bool _launchApplication;
    struct {
        unsigned int launchApplication:1;
    } _has;
}

@property (nonatomic) _Bool hasLaunchApplication;
@property (nonatomic) _Bool launchApplication;

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
