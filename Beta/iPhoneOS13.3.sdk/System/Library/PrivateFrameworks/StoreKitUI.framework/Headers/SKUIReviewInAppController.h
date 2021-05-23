/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSString, SKUIComposeReviewViewController, SKUIProductReviewURLProvider, SKUIReviewInAppConfiguration, SKUIReviewInAppRatingViewController, SKUIStarRatingQueue, SKUIStoreDialogController;

@interface SKUIReviewInAppController : NSObject

{
    CDUnknownBlockType _completion;
    SKUIReviewInAppConfiguration *_configuration;
    SKUIReviewInAppRatingViewController *_ratingViewController;
    SKUIComposeReviewViewController *_composeViewController;
    SKUIStoreDialogController *_dialogController;
    SKUIProductReviewURLProvider *_reviewURLProvider;
    SKUIStarRatingQueue *_starRatingQueue;
}

@property (copy, nonatomic) SKUIReviewInAppConfiguration *configuration;
@property (retain, nonatomic) SKUIReviewInAppRatingViewController *ratingViewController;
@property (retain, nonatomic) SKUIComposeReviewViewController *composeViewController;
@property (retain, nonatomic) SKUIStoreDialogController *dialogController;
@property (retain, nonatomic) SKUIProductReviewURLProvider *reviewURLProvider;
@property (retain, nonatomic) SKUIStarRatingQueue *starRatingQueue;
@property (copy, nonatomic) CDUnknownBlockType completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)start;
- (id)initWithConfiguration:(id)arg1;
- (_Bool)composeReviewViewController:(id)arg1 shouldSubmitReview:(id)arg2;
- (void)composeReviewViewController:(id)arg1 didFailWithDialog:(id)arg2;
- (void)composeReviewViewControllerDidSubmit:(id)arg1;
- (void)composeReviewViewControllerDidCancel:(id)arg1;
- (void)_presentRatingPrompt;
- (void)_finishWithResult:(unsigned long long)arg1 error:(id)arg2;
- (void)_presentAlertForDialog:(id)arg1;
- (void)_promptForStarRatingDuringCompose:(id)arg1;
- (void)_composeReviewViewControllerDidFinish:(id)arg1 result:(unsigned long long)arg2;
- (void)_submitRating:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_presentWriteReview;
- (void)composeReviewViewController:(id)arg1 presentDialog:(id)arg2;

@end
