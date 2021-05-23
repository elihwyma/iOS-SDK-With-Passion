/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <AVFoundation/AVAsset.h>

@interface AVAsset (MPNowPlayingInfoLanguageOptionGroupAdditions)

- (id)createLanguageOptionGroups;
- (void)mpLoadValuesAsynchronouslyForKeys:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
