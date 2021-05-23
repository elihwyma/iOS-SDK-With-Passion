/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUTableCell.h>

@class NSString, SUTextContentView, UIScrollView;

@protocol SUTextViewCellDelegate;

@interface SUTextViewCell : SUTableCell

{
    id <SUTextViewCellDelegate> _delegate;
    UIScrollView *_scrollView;
    SUTextContentView *_textContentView;
}

@property (nonatomic) id <SUTextViewCellDelegate> delegate;
@property (nonatomic, readonly) SUTextContentView *textContentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)setBackgroundColor:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (_Bool)resignFirstResponder;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)textContentViewShouldBeginEditing:(id)arg1;
- (_Bool)textContentViewShouldEndEditing:(id)arg1;
- (_Bool)textContentView:(id)arg1 shouldScrollForPendingContentSize:(struct CGSize)arg2;
- (_Bool)textContentView:(id)arg1 shouldChangeSizeForContentSize:(struct CGSize)arg2;
- (void)textContentView:(id)arg1 didChangeSize:(struct CGSize)arg2;
- (void)textContentViewDidChange:(id)arg1;

@end
