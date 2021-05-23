/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UITextView.h>

@class NSString, UILabel;

@interface EKExpandingTextView : UITextView

{
    UILabel *_placeholderLabel;
    _Bool _allowEnclosingViewScroll;
    struct CGSize _previousIntrinsicContentSize;
    struct CGSize _previousSizeThatFits;
}

@property (copy, nonatomic) NSString *placeholder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)setContentSize:(struct CGSize)arg1;
- (void)setBackgroundColor:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setFont:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)setAttributedText:(id)arg1;
- (void)setContentOffset:(struct CGPoint)arg1;
- (_Bool)_shouldScrollEnclosingScrollView;
- (void)_updatePlaceholder;

@end
