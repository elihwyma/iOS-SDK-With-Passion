/*
 Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
 */

#import <UIKit/UIView.h>

@class UITapGestureRecognizer, UITextView;

@protocol HRLinkTextViewDelegate;

@interface HRLinkTextView : UIView

{
    UITextView *_textView;
    long long _URLIdentifier;
    id <HRLinkTextViewDelegate> _delegate;
    UITapGestureRecognizer *_tapGestureRecognizer;
    long long _currentUserInterfaceStyle;
    CDUnknownBlockType _userInterfaceStyleChanged;
    struct _NSRange _linkRange;
}

@property (nonatomic) struct _NSRange linkRange;
@property (nonatomic) long long URLIdentifier;
@property (weak, nonatomic) id <HRLinkTextViewDelegate> delegate;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (nonatomic) long long currentUserInterfaceStyle;
@property (copy, nonatomic) CDUnknownBlockType userInterfaceStyleChanged;
@property (retain, nonatomic) UITextView *textView;

- (void)layoutSubviews;
- (id)lastBaselineAnchor;
- (id)firstBaselineAnchor;
- (void)_setUpConstraints;
- (void)_setUpUI;
- (void)_updateCurrentUserInterfaceStyleIfNeeded;
- (id)initWithLinkRange:(struct _NSRange)arg1 URLIdentifier:(long long)arg2 delegate:(id)arg3 userInterfaceStyleChanged:(CDUnknownBlockType)arg4;
- (void)linkTextViewTapped:(id)arg1;
- (id)initWithLinkRange:(struct _NSRange)arg1 URLIdentifier:(long long)arg2 delegate:(id)arg3;

@end
