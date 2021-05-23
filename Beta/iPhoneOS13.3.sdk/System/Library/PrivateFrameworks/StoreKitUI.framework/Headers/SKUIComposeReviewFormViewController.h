/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <iTunesStoreUI/SUViewController.h>

@class NSString, SKUIComposeReviewView, SKUIReviewMetadata;

@protocol SKUIComposeReviewFormDelegate;

__attribute__((visibility("hidden")))
@interface SKUIComposeReviewFormViewController : SUViewController

{
    SKUIComposeReviewView *_composeView;
    id <SKUIComposeReviewFormDelegate> _delegate;
    SKUIReviewMetadata *_review;
}

@property (weak, nonatomic) id <SKUIComposeReviewFormDelegate> delegate;
@property (copy, nonatomic, readonly) SKUIReviewMetadata *editedReviewMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_cancel;
- (void)setRating:(float)arg1;
- (id)initWithReviewMetadata:(id)arg1;
- (void)_submit;
- (void)composeReviewViewValidityChanged:(id)arg1;

@end
