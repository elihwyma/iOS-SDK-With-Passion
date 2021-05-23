/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class SKUICardViewElement, SKUIViewElementLayoutContext;

__attribute__((visibility("hidden")))
@interface SKUICardLayout : NSObject

{
    SKUICardViewElement *_cardViewElement;
    SKUIViewElementLayoutContext *_layoutContext;
    _Bool _hasBackground;
}

@property (nonatomic, readonly) SKUICardViewElement *cardViewElement;
@property (nonatomic, readonly) SKUIViewElementLayoutContext *layoutContext;
@property (nonatomic, readonly) double horizontalContentInset;
@property (nonatomic, readonly) long long layoutStyle;

+ (id)layoutWithCardViewElement:(id)arg1 context:(id)arg2;
+ (_Bool)allowsViewElement:(id)arg1;

- (struct CGSize)sizeForViewElement:(id)arg1 width:(double)arg2;
- (id)attributedStringForButton:(id)arg1;
- (id)attributedStringForLabel:(id)arg1;
- (double)topInsetForViewElement:(id)arg1 previousViewElement:(id)arg2 width:(double)arg3;
- (double)bottomInsetForLastViewElement:(id)arg1 width:(double)arg2;

@end
