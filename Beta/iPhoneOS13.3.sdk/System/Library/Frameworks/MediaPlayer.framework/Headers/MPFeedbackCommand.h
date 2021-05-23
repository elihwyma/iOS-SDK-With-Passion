/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPRemoteCommand.h>

@class NSString;

@interface MPFeedbackCommand : MPRemoteCommand

{
    long long _presentationStyle;
    _Bool _active;
    NSString *_localizedTitle;
    NSString *_localizedShortTitle;
}

@property (nonatomic, getter=isActive) _Bool active;
@property (copy, nonatomic) NSString *localizedTitle;
@property (copy, nonatomic) NSString *localizedShortTitle;

- (void)setPresentationStyle:(long long)arg1;
- (long long)presentationStyle;
- (id)_mediaRemoteCommandInfoOptions;
- (id)newCommandEventWithState:(long long)arg1;

@end
