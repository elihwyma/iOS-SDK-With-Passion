/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <UIKit/UIView.h>

@protocol WKColorMatrixViewDelegate;

__attribute__((visibility("hidden")))
@interface WKColorMatrixView : UIView

{
    struct RetainPtr<NSArray<NSArray<UIColor *>*>> _colorMatrix;
    struct RetainPtr<NSArray<NSArray<WKColorButton *>*>> _colorButtons;
    id <WKColorMatrixViewDelegate> _delegate;
}

@property (weak, nonatomic) id <WKColorMatrixViewDelegate> delegate;

- (id).cxx_construct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 colorMatrix:(id)arg2;
- (void)colorButtonTapped:(id)arg1;

@end
