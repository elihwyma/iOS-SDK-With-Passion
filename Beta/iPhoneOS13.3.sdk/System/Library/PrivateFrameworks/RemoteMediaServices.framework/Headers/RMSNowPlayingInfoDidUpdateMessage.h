/*
 Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

#import <ProtocolBuffer/PBCodable.h>

@class RMSNowPlayingInfoMessage;

__attribute__((visibility("hidden")))
@interface RMSNowPlayingInfoDidUpdateMessage : PBCodable

{
    RMSNowPlayingInfoMessage *_nowPlayingInfo;
    int _sessionIdentifier;
    CDStruct_07a29e00 _has;
}

@property (nonatomic) _Bool hasSessionIdentifier;
@property (nonatomic) int sessionIdentifier;
@property (nonatomic, readonly) _Bool hasNowPlayingInfo;
@property (retain, nonatomic) RMSNowPlayingInfoMessage *nowPlayingInfo;

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
