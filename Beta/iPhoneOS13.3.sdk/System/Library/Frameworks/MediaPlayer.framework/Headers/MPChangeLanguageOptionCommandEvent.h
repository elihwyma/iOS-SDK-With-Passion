/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPRemoteCommandEvent.h>

@class MPNowPlayingInfoLanguageOption;

@interface MPChangeLanguageOptionCommandEvent : MPRemoteCommandEvent

{
    MPNowPlayingInfoLanguageOption *_languageOption;
    long long _setting;
}

@property (nonatomic, readonly) MPNowPlayingInfoLanguageOption *languageOption;
@property (nonatomic, readonly) long long setting;

- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;

@end
