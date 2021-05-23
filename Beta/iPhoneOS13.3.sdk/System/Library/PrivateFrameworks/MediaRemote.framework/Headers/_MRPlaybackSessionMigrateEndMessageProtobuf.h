/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString, _MRNowPlayingPlayerPathProtobuf, _MRPlaybackSessionRequestProtobuf;

@interface _MRPlaybackSessionMigrateEndMessageProtobuf : PBCodable

{
    long long _errorCode;
    NSString *_errorDescription;
    _MRNowPlayingPlayerPathProtobuf *_playerPath;
    _MRPlaybackSessionRequestProtobuf *_request;
    CDStruct_70a7dc3e _has;
}

@property (nonatomic, readonly) _Bool hasRequest;
@property (retain, nonatomic) _MRPlaybackSessionRequestProtobuf *request;
@property (nonatomic, readonly) _Bool hasPlayerPath;
@property (retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath;
@property (nonatomic) _Bool hasErrorCode;
@property (nonatomic) long long errorCode;
@property (nonatomic, readonly) _Bool hasErrorDescription;
@property (retain, nonatomic) NSString *errorDescription;

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
