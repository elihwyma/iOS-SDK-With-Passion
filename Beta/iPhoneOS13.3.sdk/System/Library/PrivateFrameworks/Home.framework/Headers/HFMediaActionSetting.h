/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class HFMediaPlaybackActionBuilder, HFPlaybackArchive;

@interface HFMediaActionSetting : NSObject

{
    HFMediaPlaybackActionBuilder *_mediaActionBuilder;
    long long _originalHMNonPausePlaybackState;
    HFPlaybackArchive *_playbackArchive;
}

@property (nonatomic, readonly) HFMediaPlaybackActionBuilder *mediaActionBuilder;
@property (nonatomic) long long originalHMNonPausePlaybackState;
@property (retain, nonatomic) HFPlaybackArchive *playbackArchive;

- (void)updatePlaybackState:(long long)arg1;
- (id)initWithActionBuilder:(id)arg1;

@end
