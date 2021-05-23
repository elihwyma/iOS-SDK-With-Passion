/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/Swift-Protocol.h>

@class MPAVController;

@protocol MPAVControllerNode <Swift>

@property (retain, nonatomic) MPAVController *player;

- (unsigned short)lockPlayer;
- (unsigned short)unlockPlayer;

@end
