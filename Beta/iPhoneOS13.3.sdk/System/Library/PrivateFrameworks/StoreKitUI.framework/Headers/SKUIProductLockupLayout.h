/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, SKUIViewElement, SKUIViewElementLayoutContext;

__attribute__((visibility("hidden")))
@interface SKUIProductLockupLayout : NSObject

{
    long long _bottomLeftLayoutStyle;
    NSMutableArray *_bottomLeftViewElements;
    NSMutableArray *_bottomRightViewElements;
    SKUIViewElementLayoutContext *_layoutContext;
    NSMutableArray *_middleLeftViewElements;
    SKUIViewElement *_productImageElement;
    NSMutableArray *_topLeftViewElements;
    NSMutableArray *_topRightViewElements;
}

@property (nonatomic, readonly) long long bottomLeftLayoutStyle;

- (id)initWithLockup:(id)arg1 width:(double)arg2 context:(id)arg3;
- (double)metadataWidthForWidth:(double)arg1;
- (id)viewElementsForSection:(long long)arg1;
- (struct SKUIProductLockupLayoutSizing)layoutWidthsForWidth:(double)arg1;
- (struct SKUIProductLockupLayoutSizing)sizingToFitWidth:(double)arg1;
- (void)enumerateViewElementsForWidth:(double)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (_Bool)hasBottomRightElementWithRightAlignment;
- (double)topPaddingForViewElement:(id)arg1;
- (double)bottomPaddingForViewElement:(id)arg1;
- (struct CGSize)_sizeForVerticalViewElements:(id)arg1 width:(double)arg2;
- (struct CGSize)_sizeForViewElement:(id)arg1 width:(double)arg2;
- (struct CGSize)_sizeForSegmentedControl:(id)arg1 width:(double)arg2;

@end
