/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPButton.h>

@class MPAVController;

@interface MPTransportButton : MPButton

{
    MPAVController *player;
}

@property (retain, nonatomic) MPAVController *player;

- (id)_automationID;

@end
