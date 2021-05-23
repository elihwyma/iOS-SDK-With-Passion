/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <UIKit/UIView.h>

@class NSString, NSTimer, UIImage, UIImageView, UISwipeGestureRecognizer, UITapGestureRecognizer;

@protocol CAMTransientImageWellDelegate;

@interface CAMTransientImageWell : UIView

{
    _Bool _autoStashesImages;
    _Bool __stashed;
    id <CAMTransientImageWellDelegate> _delegate;
    long long _orientation;
    UIImageView *__imageView;
    NSTimer *__autoStashTimer;
    UITapGestureRecognizer *__tapGestureRecognizer;
    UISwipeGestureRecognizer *__unstashGestureRecognizer;
    UISwipeGestureRecognizer *__stashGestureRecognizer;
}

@property (retain, nonatomic, setter=_setImageView:) UIImageView *_imageView;
@property (retain, nonatomic) NSTimer *_autoStashTimer;
@property (nonatomic, getter=_isStashed, setter=_setStashed:) _Bool _stashed;
@property (nonatomic, readonly) UITapGestureRecognizer *_tapGestureRecognizer;
@property (nonatomic, readonly) UISwipeGestureRecognizer *_unstashGestureRecognizer;
@property (nonatomic, readonly) UISwipeGestureRecognizer *_stashGestureRecognizer;
@property (weak, nonatomic) id <CAMTransientImageWellDelegate> delegate;
@property (nonatomic) long long orientation;
@property (nonatomic) _Bool autoStashesImages;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic, readonly) struct CGRect imageFrame;
@property (nonatomic) _Bool currentImageHidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setOrientation:(long long)arg1 animated:(_Bool)arg2;
- (void)_handleTap:(id)arg1;
- (void)setImage:(id)arg1 animated:(_Bool)arg2;
- (void)_handleUnstashSwipe:(id)arg1;
- (void)_handleStashSwipe:(id)arg1;
- (void)_setStashed:(_Bool)arg1 animated:(_Bool)arg2;
- (struct CGRect)_unorientedFrameForImageView:(id)arg1;
- (struct CGSize)_imageViewMaxSize;
- (struct CGPoint)_imageViewSpawnPoint;
- (struct CGPoint)_imageViewStashPoint;
- (void)_restartAutoStashTimerWithDuration:(double)arg1;
- (void)_cancelAutoStashTimer;
- (void)_handleAutoStashTimerFired:(id)arg1;
- (void)_dismissImageView:(id)arg1 animated:(_Bool)arg2;
- (void)_restartAutoStashTimer;
- (void)_dismissImageAnimated:(_Bool)arg1;
- (struct CGSize)_imageViewSizeForContentSize:(struct CGSize)arg1;
- (void)clearImageAnimated:(_Bool)arg1;

@end
