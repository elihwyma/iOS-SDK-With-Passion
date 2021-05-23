/*
 Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

#import <CarPlaySupport/CPSInheritedBackgroundColorView.h>

@class UIActivityIndicatorView, UILabel;

@interface CPSPausedCardView : CPSInheritedBackgroundColorView

{
    UILabel *_title;
    UIActivityIndicatorView *_spinner;
}

@property (nonatomic, readonly) UILabel *title;
@property (nonatomic, readonly) UIActivityIndicatorView *spinner;

- (id)backgroundColor;
- (struct CGSize)intrinsicContentSize;
- (void)traitCollectionDidChange:(id)arg1;
- (void)backgroundColorDidChange;
- (id)initWithTitle:(id)arg1 showsSpinner:(_Bool)arg2 backgroundColor:(id)arg3;

@end
