/*
 Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

#import <Foundation/NSObject.h>

@interface MCDGlyph : NSObject

+ (id)nowPlayingEllipsis;
+ (id)nowPlayingShuffle;
+ (id)nowPlayingAdd;
+ (id)nowPlayingPauseWithSize:(double)arg1;
+ (id)nowPlayingBackWithSize:(double)arg1;
+ (id)nowPlayingForwardWithSize:(double)arg1;
+ (id)imageNamed:(id)arg1 ofSize:(double)arg2;
+ (id)playbackProgressCompleteWithSize:(double)arg1;
+ (id)glyphFactory:(id)arg1 pointSize:(double)arg2 weight:(long long)arg3 scale:(long long)arg4;
+ (id)nowPlayingRepeat;
+ (id)nowPlayingRepeatOne;

@end
