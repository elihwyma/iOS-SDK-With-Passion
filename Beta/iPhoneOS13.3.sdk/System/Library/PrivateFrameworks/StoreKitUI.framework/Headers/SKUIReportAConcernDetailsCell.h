/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UITableViewCell.h>

@class NSString, UITextView;

__attribute__((visibility("hidden")))
@interface SKUIReportAConcernDetailsCell : UITableViewCell

{
    NSString *_placeholderText;
    UITextView *_textView;
}

@property (retain, nonatomic) UITextView *textView;
@property (copy, nonatomic) NSString *placeholderText;
@property (copy, nonatomic, readonly) NSString *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)updatePlaceholderText:(_Bool)arg1;

@end
