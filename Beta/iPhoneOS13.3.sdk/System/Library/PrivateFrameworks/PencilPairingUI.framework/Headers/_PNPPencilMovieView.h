/*
 Image: /System/Library/PrivateFrameworks/PencilPairingUI.framework/PencilPairingUI
 */

#import <UIKit/UIView.h>

@class AVPlayer;

@interface _PNPPencilMovieView : UIView

{
    AVPlayer *_player;
    _Bool _repeat;
}

+ (Class)layerClass;
+ (double)_playbackRate;

- (void)teardown;
- (void)prepare;
- (id)_playerLayer;
- (void)completeRevolutionWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_applyFilterToLayer;
- (void)_playbackEnded;

@end
