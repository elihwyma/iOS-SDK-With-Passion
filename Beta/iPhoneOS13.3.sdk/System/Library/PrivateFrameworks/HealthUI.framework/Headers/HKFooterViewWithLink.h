/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UITableViewHeaderFooterView.h>

@class NSString, UITextView;

@interface HKFooterViewWithLink : UITableViewHeaderFooterView

{
    UITextView *_footerTextView;
}

@property (retain, nonatomic) UITextView *footerTextView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultReuseIdentifier;

- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (void)_setupConstraints;
- (id)initWithReuseIdentifier:(id)arg1 bodyText:(id)arg2 linkText:(id)arg3 link:(id)arg4;
- (void)_setUpFooterTextViewWithBodyText:(id)arg1 linkText:(id)arg2 link:(id)arg3;

@end
