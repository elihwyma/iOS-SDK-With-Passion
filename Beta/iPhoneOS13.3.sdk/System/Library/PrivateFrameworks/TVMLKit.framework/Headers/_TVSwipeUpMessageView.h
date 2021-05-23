/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UIView.h>

@class NSString, UILabel, _TVImageView;

@interface _TVSwipeUpMessageView : UIView

{
    int _swipeUpMessageState;
    _Bool _enabled;
    NSString *_message;
    _TVImageView *_chevronView;
    UILabel *_messageView;
}

@property (nonatomic, readonly) _TVImageView *chevronView;
@property (nonatomic, readonly) UILabel *messageView;
@property (copy, nonatomic) NSString *message;
@property (nonatomic, getter=isEnabled) _Bool enabled;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_processSwipeUpMessageEvent:(int)arg1;

@end
