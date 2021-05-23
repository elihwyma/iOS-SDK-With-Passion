/*
 Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import <UIView.h>

@class NSString, UIButton, UIImageView, _UIActionSlider;

@protocol TPSlidingButtonDelegateProtocol;

@interface TPSlidingButton : UIView

{
    int _type;
    _UIActionSlider *_acceptButton;
    UIButton *_sideButtonRight;
    id <TPSlidingButtonDelegateProtocol> _delegate;
    UIImageView *_dialImageView;
}

@property (retain) UIImageView *dialImageView;
@property (retain) _UIActionSlider *acceptButton;
@property (retain) UIButton *sideButtonRight;
@property int type;
@property id <TPSlidingButtonDelegateProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)actionSlider:(id)arg1 didUpdateSlideWithValue:(double)arg2;
- (void)actionSliderDidCompleteSlide:(id)arg1;
- (id)initWithSlidingButtonType:(int)arg1;

@end
