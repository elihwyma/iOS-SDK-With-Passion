/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIView.h>

@class CAAnimation, NSString, UIImageView, UITapGestureRecognizer, UITextView;

@protocol CKAvatarNotificationCalloutViewDelegate;

@interface CKAvatarNotificationCalloutView : UIView

{
    id <CKAvatarNotificationCalloutViewDelegate> _delegate;
    UITextView *_textView;
    UIImageView *_tailImageView;
    CAAnimation *_starterAniamtion;
    CAAnimation *_finisherAnimation;
    UITapGestureRecognizer *_tapGestureRecognizer;
    long long _mode;
}

@property (retain, nonatomic) UITextView *textView;
@property (retain, nonatomic) UIImageView *tailImageView;
@property (retain, nonatomic) CAAnimation *starterAniamtion;
@property (retain, nonatomic) CAAnimation *finisherAnimation;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (nonatomic) long long mode;
@property (weak, nonatomic) id <CKAvatarNotificationCalloutViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)_shouldShowShadow;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;
- (void)animateIn;
- (void)_handleTap:(id)arg1;
- (void)animateOut;
- (id)initWithFrame:(struct CGRect)arg1 previewText:(id)arg2 mode:(long long)arg3;

@end
