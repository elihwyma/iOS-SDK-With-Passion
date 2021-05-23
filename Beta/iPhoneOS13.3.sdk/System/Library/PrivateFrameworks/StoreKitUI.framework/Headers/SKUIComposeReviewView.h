/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class NSString, SKUIComposeReviewHeaderView, SKUIReviewMetadata, SULoadingView, SUTextContentView, UIScrollView;

@protocol SKUIComposeReviewViewDelegate;

__attribute__((visibility("hidden")))
@interface SKUIComposeReviewView : UIView

{
    long long _currentBodyLength;
    id <SKUIComposeReviewViewDelegate> _delegate;
    SKUIComposeReviewHeaderView *_headerView;
    struct CGRect _keyboardFrame;
    struct CGRect _remoteKeyboardFrame;
    unsigned int _loading:1;
    SULoadingView *_loadingView;
    SKUIReviewMetadata *_review;
    UIScrollView *_scrollView;
    long long _style;
    SUTextContentView *_textContentView;
}

@property (nonatomic, readonly) long long composeReviewStyle;
@property (weak, nonatomic) id <SKUIComposeReviewViewDelegate> delegate;
@property (nonatomic, getter=isLoading) _Bool loading;
@property (nonatomic) float rating;
@property (nonatomic, readonly, getter=isValid) _Bool valid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)reloadData;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)_body;
- (void)_updateContentSize;
- (_Bool)textContentView:(id)arg1 shouldScrollForPendingContentSize:(struct CGSize)arg2;
- (_Bool)textContentView:(id)arg1 shouldChangeSizeForContentSize:(struct CGSize)arg2;
- (void)textContentView:(id)arg1 didChangeSize:(struct CGSize)arg2;
- (_Bool)textContentView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textContentViewDidChange:(id)arg1;
- (void)setReview:(id)arg1;
- (void)_keyboardVisibilityDidChangeNotification:(id)arg1;
- (id)copyReview;
- (void)composeHeaderViewValidityDidChange:(id)arg1;
- (void)composeHeaderViewValuesDidChange:(id)arg1;
- (void)_showComposeView;
- (void)_remoteKeyboardVisibilityDidChangeNotification:(id)arg1;
- (void)_layoutLoadingView;
- (void)_layoutComposeView;
- (void)_showLoadingView;
- (id)_reviewPlaceholder;
- (void)_delayedUpdateReviewLength;
- (_Bool)_isReviewTextOptional;

@end
