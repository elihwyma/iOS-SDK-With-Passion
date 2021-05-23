/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUICollectionViewCell.h>

@class NSArray, NSMapTable, SKUIViewReusePool;

__attribute__((visibility("hidden")))
@interface SKUIViewReuseCollectionViewCell : SKUICollectionViewCell

{
    NSMapTable *_allViewTextProperties;
    SKUIViewReusePool *_viewPool;
    NSArray *_allExistingViews;
    struct UIEdgeInsets _contentInset;
}

@property (nonatomic) struct UIEdgeInsets contentInset;
@property (nonatomic, readonly) NSArray *allExistingViews;

- (void)dealloc;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)applyLayoutAttributes:(id)arg1;
- (void)modifyUsingBlock:(CDUnknownBlockType)arg1;
- (void)registerClass:(Class)arg1 forViewWithReuseIdentifier:(id)arg2;
- (void)enumerateExistingViewsForReuseIdentifier:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)textPropertiesForView:(id)arg1;
- (id)existingViewForIndex:(long long)arg1;
- (id)existingViewsForReuseIdentifier:(id)arg1;

@end
