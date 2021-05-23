/*
 Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

#import <UIKit/UIView.h>

@class ISAnimatedImage, ISAnimatedImagePlayer, NSString, UIImageView;

@interface ISAnimatedImageView : UIView

{
    UIImageView *_placeholderImageView;
    ISAnimatedImagePlayer *_player;
}

@property (nonatomic) UIImageView *placeholderImageView;
@property (retain, nonatomic) ISAnimatedImagePlayer *player;
@property (retain, nonatomic) ISAnimatedImage *image;
@property (nonatomic, getter=isPlaying) _Bool playing;
@property (nonatomic) unsigned long long displayedFrameIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)setHidden:(_Bool)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setAlpha:(double)arg1;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)displayLayer:(id)arg1;
- (id)initWithAnimatedImage:(id)arg1;
- (_Bool)isReadyToDisplay;
- (void)frameDidChange;
- (void)didBeginAnimating;
- (id)initWithAnimatedImagePlayer:(id)arg1;

@end
