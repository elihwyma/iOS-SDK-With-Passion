/*
 Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

#import <Foundation/NSObject.h>

@class AVHapticPlayer;

__attribute__((visibility("hidden")))
@interface MediaControlsHapticPlayer : NSObject

{
    AVHapticPlayer *_player;
}

@property (retain, nonatomic) AVHapticPlayer *player;

- (void)dealloc;
- (void)prepare;
- (void)tearDown;
- (void)expandedButtonChanged;
- (void)checkError:(id)arg1;

@end
