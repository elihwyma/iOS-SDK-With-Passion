/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class NSString, SKUIColorScheme, UILabel;

__attribute__((visibility("hidden")))
@interface SKUIProductPageCopyrightView : UIView

{
    UILabel *_copyrightLabel;
    SKUIColorScheme *_colorScheme;
}

@property (retain, nonatomic) NSString *copyrightString;
@property (retain, nonatomic) SKUIColorScheme *colorScheme;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;

@end
