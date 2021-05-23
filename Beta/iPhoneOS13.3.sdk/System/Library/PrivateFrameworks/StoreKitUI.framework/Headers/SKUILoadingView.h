/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class NSString, SKUIColorScheme, UIActivityIndicatorView, UILabel;

@interface SKUILoadingView : UIView

{
    SKUIColorScheme *_colorScheme;
    UILabel *_label;
    UIActivityIndicatorView *_spinner;
}

@property (copy, nonatomic) SKUIColorScheme *colorScheme;
@property (copy, nonatomic) NSString *loadingText;

+ (id)defaultLoadingTextWithClientContext:(id)arg1;

- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)willMoveToSuperview:(id)arg1;

@end
