/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@class _MRLyricsTokenProtobuf;

@interface _MRLyricsEventProtobuf : PBCodable

{
    double _endTime;
    double _startTime;
    _MRLyricsTokenProtobuf *_token;
    struct {
        unsigned int endTime:1;
        unsigned int startTime:1;
    } _has;
}

@property (nonatomic) _Bool hasStartTime;
@property (nonatomic) double startTime;
@property (nonatomic) _Bool hasEndTime;
@property (nonatomic) double endTime;
@property (nonatomic, readonly) _Bool hasToken;
@property (retain, nonatomic) _MRLyricsTokenProtobuf *token;

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
