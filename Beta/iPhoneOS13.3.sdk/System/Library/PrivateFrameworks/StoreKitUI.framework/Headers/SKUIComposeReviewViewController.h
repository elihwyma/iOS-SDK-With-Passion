/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <iTunesStoreUI/SUNavigationController.h>

@class NSString, SKUIComposeReviewFormViewController, SKUIReviewMetadata, SKUIWriteAReviewTemplateViewElement, SUPlaceholderViewController, UIAlertAction;

@protocol SKUIComposeReviewDelegate;

@interface SKUIComposeReviewViewController : SUNavigationController

{
    SKUIComposeReviewFormViewController *_formViewController;
    SUPlaceholderViewController *_placeholderViewController;
    NSString *_nickname;
    _Bool _nicknameShouldResetOnError;
    UIAlertAction *_nicknameOKAction;
    _Bool _edit;
    SKUIWriteAReviewTemplateViewElement *_templateViewElement;
}

@property (nonatomic, getter=isEdit) _Bool edit;
@property (weak, nonatomic) id <SKUIComposeReviewDelegate> delegate;
@property (retain, nonatomic) SKUIWriteAReviewTemplateViewElement *templateViewElement;
@property (copy, nonatomic, readonly) SKUIReviewMetadata *editedReviewMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)_preventsAppearanceProxyCustomization;

- (id)init;
- (void)dealloc;
- (long long)preferredStatusBarStyle;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)setRating:(float)arg1;
- (void)_setNickname:(id)arg1;
- (void)_cancelAction:(id)arg1;
- (void)_loadReviewWithURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_setNicknameShouldResetOnError:(_Bool)arg1;
- (void)_sendDidSubmit;
- (void)_sendDidCancel;
- (void)_promptForNickname;
- (void)_attemptReviewSubmission;
- (void)submitReview;
- (void)_finishLoadWithOutput:(id)arg1 error:(id)arg2;
- (void)composeReviewFormDidCancel:(id)arg1;
- (void)composeReviewFormDidSubmit:(id)arg1;
- (void)loadReviewWithURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end
