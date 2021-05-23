/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <AVFoundation/AVMediaSelectionOption.h>

@interface AVMediaSelectionOption (MPNowPlayingInfoLanguageOptionAdditions)

@property (nonatomic, readonly) _Bool mpIsOnlyAC3;
@property (nonatomic, readonly) _Bool mpIsSDH;

- (id)makeNowPlayingInfoLanguageOption;
- (id)_languageOptionIdentifier;

@end
