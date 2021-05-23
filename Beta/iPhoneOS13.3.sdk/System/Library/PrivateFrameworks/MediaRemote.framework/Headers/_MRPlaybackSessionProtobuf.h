/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface _MRPlaybackSessionProtobuf : PBCodable

{
    NSString *_identifier;
    NSData *_playbackSessionData;
    NSString *_type;
}

@property (nonatomic, readonly) _Bool hasPlaybackSessionData;
@property (retain, nonatomic) NSData *playbackSessionData;
@property (nonatomic, readonly) _Bool hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic, readonly) _Bool hasType;
@property (retain, nonatomic) NSString *type;

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
