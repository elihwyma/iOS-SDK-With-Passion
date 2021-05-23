/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIView.h>

@class NSString, UIButton, UILabel, UITextView;

@protocol PUPhotoCommentEntryViewDelegate;

__attribute__((visibility("hidden")))
@interface PUPhotoCommentEntryView : UIView

{
    UILabel *placeholderLabel;
    UILabel *_placeholderLabel;
    UITextView *_textView;
    UIButton *_postButton;
    id <PUPhotoCommentEntryViewDelegate> _delegate;
}

@property (retain, nonatomic, readonly) UITextView *textView;
@property (retain, nonatomic, readonly) UILabel *placeholderLabel;
@property (retain, nonatomic, readonly) UIButton *postButton;
@property (weak, nonatomic) id <PUPhotoCommentEntryViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)setText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (double)preferredHeight;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)clearText;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (_Bool)textViewShouldEndEditing:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (id)trimmedText;

@end
