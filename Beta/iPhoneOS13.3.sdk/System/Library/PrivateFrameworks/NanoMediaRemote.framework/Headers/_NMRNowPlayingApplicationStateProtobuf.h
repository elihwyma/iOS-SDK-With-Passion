/*
 Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface _NMRNowPlayingApplicationStateProtobuf : PBCodable

{
    NSString *_companionBundleIdentifier;
    NSData *_iconDigest;
    NSString *_localizedDisplayName;
    unsigned int _playbackState;
    int _processID;
    NSString *_watchBundleIdentifier;
    struct {
        unsigned int playbackState:1;
        unsigned int processID:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasCompanionBundleIdentifier;
@property (retain, nonatomic) NSString *companionBundleIdentifier;
@property (nonatomic, readonly) _Bool hasLocalizedDisplayName;
@property (retain, nonatomic) NSString *localizedDisplayName;
@property (nonatomic) _Bool hasPlaybackState;
@property (nonatomic) unsigned int playbackState;
@property (nonatomic, readonly) _Bool hasWatchBundleIdentifier;
@property (retain, nonatomic) NSString *watchBundleIdentifier;
@property (nonatomic, readonly) _Bool hasIconDigest;
@property (retain, nonatomic) NSData *iconDigest;
@property (nonatomic) _Bool hasProcessID;
@property (nonatomic) int processID;

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
