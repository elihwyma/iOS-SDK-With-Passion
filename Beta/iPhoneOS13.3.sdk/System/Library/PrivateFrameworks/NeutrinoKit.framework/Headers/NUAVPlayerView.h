/*
 Image: /System/Library/PrivateFrameworks/NeutrinoKit.framework/NeutrinoKit
 */

#import <UIView.h>

@class AVPlayer;

@protocol NUAVPlayerViewDelegate;

@interface NUAVPlayerView : UIView

{
    _Atomic int _updateReadyForDisplayID;
    _Bool _observerDetached;
    _Bool _readyForDisplay;
    AVPlayer *_player;
    id <NUAVPlayerViewDelegate> _delegate;
}

@property (nonatomic, getter=isReadyForDisplay, setter=_setReadyForDisplay:) _Bool readyForDisplay;
@property (retain, nonatomic) AVPlayer *player;
@property (weak, nonatomic) id <NUAVPlayerViewDelegate> delegate;

+ (Class)layerClass;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dispose;
- (void)_updateReadyForDisplayWithID:(_Atomic int)arg1;

@end
