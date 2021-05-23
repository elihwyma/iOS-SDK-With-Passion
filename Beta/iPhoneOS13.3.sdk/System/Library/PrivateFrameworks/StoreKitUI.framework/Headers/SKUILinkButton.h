/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIButton.h>

@interface SKUILinkButton : UIButton

{
    long long _arrowStyle;
}

@property (nonatomic, readonly) long long arrowStyle;

+ (id)buttonWithArrowStyle:(long long)arg1;

- (void)setTitleColor:(id)arg1 forState:(unsigned long long)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)sizeToFit;
- (void)tintColorDidChange;
- (id)initWithArrowStyle:(long long)arg1;
- (void)_reloadIcons;
- (double)_linkImagePaddingLeft;

@end
