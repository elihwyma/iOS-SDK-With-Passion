/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIViewController.h>

#import <ChatKit/Swift-Protocol.h>

@class CKConversation, NSString, UIImageView, UILabel, UIScrollView, UIView;

__attribute__((visibility("hidden")))
@interface CKSentWithSiriViewController : UIViewController <Swift>

{
    CKConversation *_conversation;
    UIScrollView *_scrollView;
    UIView *_contentView;
    UILabel *_contextDescriptionLabel;
    UIImageView *_heroImageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_detailLabel;
}

@property (retain, nonatomic) CKConversation *conversation;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *contextDescriptionLabel;
@property (retain, nonatomic) UIImageView *heroImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)scrollViewDidScroll:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)canBecomeFirstResponder;
- (id)inputAccessoryViewController;
- (id)initWithConversation:(id)arg1;
- (id)_titleLabelText;
- (id)localizedStringWithLanguageCode:(id)arg1 format:(id)arg2;

@end
