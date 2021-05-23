/*
 Image: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
 */

#import <UIView.h>

@class MSPieImageView, NSObject, SUPlayerStatus, UIImageView;

@protocol OS_dispatch_source;

@interface MSAudioProgressView : UIView

{
    UIImageView *_bufferingImageView;
    NSObject<OS_dispatch_source> *_bufferingTimer;
    _Bool _highlighted;
    SUPlayerStatus *_playerStatus;
    MSPieImageView *_progressView;
    UIImageView *_stopImageView;
}

@property (copy, nonatomic) SUPlayerStatus *playerStatus;
@property (nonatomic, getter=isHighlighted) _Bool highlighted;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)_newProgressView;
- (void)_cancelBufferingTimer;
- (void)_showBufferingImageView;
- (id)_newBufferingImageView;

@end
