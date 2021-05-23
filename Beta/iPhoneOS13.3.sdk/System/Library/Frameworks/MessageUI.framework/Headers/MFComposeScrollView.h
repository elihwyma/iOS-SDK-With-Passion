/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <UIKit/UIScrollView.h>

@class NSMutableSet;

@interface MFComposeScrollView : UIScrollView

{
    NSMutableSet *_disabledSubviews;
    long long _scrollBlocked;
    _Bool _subviewsDisabled;
    _Bool _shouldScrollToFirstResponder;
}

@property (nonatomic) _Bool subviewsDisabled;
@property (nonatomic) _Bool shouldScrollToFirstResponder;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)didAddSubview:(id)arg1;
- (void)willRemoveSubview:(id)arg1;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (_Bool)_scrollsToMakeFirstResponderVisible;
- (void)disableSubview:(id)arg1;
- (void)enableSubview:(id)arg1;
- (void)beginBlockingScroll;
- (void)endBlockingScroll;

@end
