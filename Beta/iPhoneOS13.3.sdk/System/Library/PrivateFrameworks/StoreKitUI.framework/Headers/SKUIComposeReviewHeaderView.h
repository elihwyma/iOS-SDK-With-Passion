/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class NSString, SKStarRatingControl, SKUIComposeTextFieldListView, SKUIReviewMetadata, UIResponder;

@protocol SKUIComposeReviewHeaderDelegate;

__attribute__((visibility("hidden")))
@interface SKUIComposeReviewHeaderView : UIView

{
    id <SKUIComposeReviewHeaderDelegate> _delegate;
    SKStarRatingControl *_ratingControl;
    SKUIReviewMetadata *_review;
    long long _style;
    SKUIComposeTextFieldListView *_textFieldListView;
}

@property (nonatomic, readonly) long long composeReviewStyle;
@property (weak, nonatomic) id <SKUIComposeReviewHeaderDelegate> delegate;
@property (retain, nonatomic) SKUIReviewMetadata *review;
@property (nonatomic, readonly) UIResponder *initialFirstResponder;
@property (nonatomic) float rating;
@property (nonatomic, readonly) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)layoutSubviews;
- (void)sizeToFit;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (long long)numberOfColumnsInTextFieldList:(id)arg1;
- (long long)numberOfFieldsInTextFieldList:(id)arg1;
- (id)textFieldList:(id)arg1 configurationForFieldAtIndex:(unsigned long long)arg2;
- (void)textFieldListValidityDidChange:(id)arg1;
- (void)textFieldListValuesDidChange:(id)arg1;

@end
