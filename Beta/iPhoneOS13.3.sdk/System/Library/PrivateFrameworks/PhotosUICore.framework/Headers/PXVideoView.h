/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIView.h>

@class ISAVPlayerLayer, ISWrappedAVPlayer, NSString, NSTimer;

@protocol PXVideoViewDelegate;

@interface PXVideoView : UIView

{
    ISWrappedAVPlayer *_player;
    struct {
        _Bool readinessDidChange;
    } _delegateRespondsTo;
    NSTimer *_readinessTimer;
    ISAVPlayerLayer *_playerLayer;
    _Bool _videoIsReadyForDisplay;
    id <PXVideoViewDelegate> _delegate;
}

@property (nonatomic) _Bool videoIsReadyForDisplay;
@property (weak, nonatomic) id <PXVideoViewDelegate> delegate;
@property (retain, nonatomic) ISWrappedAVPlayer *player;
@property (copy, nonatomic) NSString *videoGravity;

+ (Class)layerClass;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_startReadinessTimerIfNeeded;
- (void)_stopReadinessTimer;
- (void)_updateReadyForDisplay;

@end
