/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class NSMutableArray, UIResponder;

@protocol SKUIComposeTextFieldListViewDelegate;

__attribute__((visibility("hidden")))
@interface SKUIComposeTextFieldListView : UIView

{
    id <SKUIComposeTextFieldListViewDelegate> _delegate;
    NSMutableArray *_fields;
    _Bool _isValid;
    long long _style;
}

@property (nonatomic, readonly) long long composeReviewStyle;
@property (weak, nonatomic) id <SKUIComposeTextFieldListViewDelegate> delegate;
@property (nonatomic, readonly) double height;
@property (nonatomic, readonly) UIResponder *initialFirstResponder;

- (void)dealloc;
- (_Bool)isValid;
- (void)layoutSubviews;
- (void)reloadData;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (id)textForFieldAtIndex:(unsigned long long)arg1;
- (void)composeTextFieldValidityChanged:(id)arg1;
- (void)_updateValidity;

@end
