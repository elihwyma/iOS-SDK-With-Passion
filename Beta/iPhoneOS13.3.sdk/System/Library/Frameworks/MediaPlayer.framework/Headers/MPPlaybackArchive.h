/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

#import <MediaPlayer/Swift-Protocol.h>

@class MPPlaybackArchiveDisplayProperties, NSData, NSMutableDictionary, NSString;

@interface MPPlaybackArchive : NSObject <Swift>

{
    MPPlaybackArchiveDisplayProperties *_displayProperties;
    NSString *_bundleIdentifier;
    unsigned long long _supportedOptions;
    unsigned long long _copyOptions;
    unsigned long long _queueControlOptions;
    NSMutableDictionary *_storage;
    long long _type;
    NSString *_playbackSessionIdentifier;
    NSString *_playbackSessionType;
    NSData *_playbackSessionData;
}

@property (nonatomic) unsigned long long copyOptions;
@property (nonatomic) unsigned long long queueControlOptions;
@property (retain, nonatomic) NSMutableDictionary *storage;
@property (nonatomic, readonly) long long type;
@property (copy, nonatomic, readonly) NSString *playbackSessionIdentifier;
@property (copy, nonatomic, readonly) NSString *playbackSessionType;
@property (copy, nonatomic, readonly) NSData *playbackSessionData;
@property (nonatomic, readonly) MPPlaybackArchiveDisplayProperties *displayProperties;
@property (copy, nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) unsigned long long supportedOptions;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithOptions:(unsigned long long)arg1;
- (id)initWithType:(long long)arg1 sessionIdentifier:(id)arg2 data:(id)arg3 dataType:(id)arg4 bundleIdentifier:(id)arg5 supportedOptions:(unsigned long long)arg6 displayProperties:(id)arg7;
- (void)setBOOLValue:(_Bool)arg1 forOption:(long long)arg2;
- (_Bool)boolValueForOption:(long long)arg1;
- (id)initWithPlaybackSessionIdentifier:(id)arg1 playbackSessionData:(id)arg2 playbackSessionType:(id)arg3 bundleIdentifier:(id)arg4 displayProperties:(id)arg5;

@end
