/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUICardLayout.h>

__attribute__((visibility("hidden")))
@interface SKUIProgrammedCardLayout : SKUICardLayout

+ (_Bool)allowsViewElement:(id)arg1;

- (long long)layoutStyle;
- (double)horizontalContentInset;
- (id)attributedStringForButton:(id)arg1;
- (id)attributedStringForLabel:(id)arg1;
- (double)topInsetForViewElement:(id)arg1 previousViewElement:(id)arg2 width:(double)arg3;
- (double)bottomInsetForLastViewElement:(id)arg1 width:(double)arg2;
- (id)_fontForButton:(id)arg1;
- (id)_fontForLabel:(id)arg1;
- (id)_stringLayoutForViewElement:(id)arg1 width:(double)arg2;

@end
