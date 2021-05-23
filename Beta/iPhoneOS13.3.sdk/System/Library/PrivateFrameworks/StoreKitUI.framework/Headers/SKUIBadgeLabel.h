/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UILabel.h>

__attribute__((visibility("hidden")))
@interface SKUIBadgeLabel : UILabel

+ (id)defaultTextColor;
+ (id)defaultBackgroundColor;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)drawTextInRect:(struct CGRect)arg1;

@end
