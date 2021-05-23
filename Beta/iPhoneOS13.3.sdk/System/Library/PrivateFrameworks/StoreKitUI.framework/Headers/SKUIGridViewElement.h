/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewElement.h>

@class SKUICollectionDOMFeature;

__attribute__((visibility("hidden")))
@interface SKUIGridViewElement : SKUIViewElement

{
    id _persistenceKey;
    _Bool _showsEditMode;
}

@property (nonatomic, readonly) _Bool allowsMultipleSelectionDuringEditing;
@property (nonatomic, readonly) _Bool showsEditMode;
@property (nonatomic, readonly) SKUICollectionDOMFeature *collectionFeature;

+ (id)supportedFeatures;

- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)applyUpdatesWithElement:(id)arg1;
- (void)enumerateChildrenUsingBlock:(CDUnknownBlockType)arg1;
- (long long)pageComponentType;
- (id)persistenceKey;
- (long long)_countOfInputCheckboxesWithBaseElement:(id)arg1 limit:(long long)arg2;

@end
