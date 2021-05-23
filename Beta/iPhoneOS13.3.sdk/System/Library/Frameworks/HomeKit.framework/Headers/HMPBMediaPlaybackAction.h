/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray;

@interface HMPBMediaPlaybackAction : PBCodable

{
    NSData *_actionUUID;
    int _mediaPlaybackState;
    NSMutableArray *_mediaProfiles;
    NSData *_playbackArchive;
    NSData *_volume;
    struct {
        unsigned int mediaPlaybackState:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasActionUUID;
@property (retain, nonatomic) NSData *actionUUID;
@property (retain, nonatomic) NSMutableArray *mediaProfiles;
@property (nonatomic) _Bool hasMediaPlaybackState;
@property (nonatomic) int mediaPlaybackState;
@property (nonatomic, readonly) _Bool hasVolume;
@property (retain, nonatomic) NSData *volume;
@property (nonatomic, readonly) _Bool hasPlaybackArchive;
@property (retain, nonatomic) NSData *playbackArchive;

+ (Class)mediaProfilesType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addMediaProfiles:(id)arg1;
- (unsigned long long)mediaProfilesCount;
- (void)clearMediaProfiles;
- (id)mediaProfilesAtIndex:(unsigned long long)arg1;

@end
