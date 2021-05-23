/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UITableViewHeaderFooterView.h>

@class NSLayoutConstraint, NSString, UIColor, UIImageView, UITextView;

@protocol CKDetailsDownloadAttachmentsHeaderFooterViewDelegate;

__attribute__((visibility("hidden")))
@interface CKDetailsDownloadAttachmentsHeaderFooterView : UITableViewHeaderFooterView

{
    _Bool _logoHidden;
    NSString *_titleText;
    NSString *_buttonText;
    id <CKDetailsDownloadAttachmentsHeaderFooterViewDelegate> _delegate;
    UIColor *_downloadButtonTextColor;
    UIColor *_titleTextColor;
    UIImageView *_iCloudImageView;
    UITextView *_titleTextView;
    UITextView *_buttonTextView;
    NSLayoutConstraint *_titleTextTopToLogoConstraint;
    NSLayoutConstraint *_titleTextTopToViewConstraint;
}

@property (retain, nonatomic) UIImageView *iCloudImageView;
@property (retain, nonatomic) UITextView *titleTextView;
@property (retain, nonatomic) UITextView *buttonTextView;
@property (retain, nonatomic) NSLayoutConstraint *titleTextTopToLogoConstraint;
@property (retain, nonatomic) NSLayoutConstraint *titleTextTopToViewConstraint;
@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *buttonText;
@property (weak, nonatomic) id <CKDetailsDownloadAttachmentsHeaderFooterViewDelegate> delegate;
@property (retain, nonatomic) UIColor *downloadButtonTextColor;
@property (retain, nonatomic) UIColor *titleTextColor;
@property (nonatomic) _Bool logoHidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)reuseIdentifier;

- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)handleUserTap:(id)arg1;

@end
