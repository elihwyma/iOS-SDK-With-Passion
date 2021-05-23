/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UICollectionViewFlowLayout.h>

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiLayout : UICollectionViewFlowLayout

{
    id *_attributes;
    double *_headerWidths;
    long long _arrayLength;
}

+ (Class)invalidationContextClass;

- (void)dealloc;
- (void)invalidateLayoutWithContext:(id)arg1;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)invalidationContextForBoundsChange:(struct CGRect)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (_Bool)shouldInvalidateLayoutForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2;
- (id)invalidationContextForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2;
- (void)_setAttributes:(id)arg1 ForSection:(long long)arg2;

@end
