/*
 Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface RMSSeekToPlaybackTimeMessage : PBCodable

{
    int _playbackTime;
    int _sessionIdentifier;
    struct {
        unsigned int playbackTime:1;
        unsigned int sessionIdentifier:1;
    } _has;
}

@property (nonatomic) _Bool hasSessionIdentifier;
@property (nonatomic) int sessionIdentifier;
@property (nonatomic) _Bool hasPlaybackTime;
@property (nonatomic) int playbackTime;

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
