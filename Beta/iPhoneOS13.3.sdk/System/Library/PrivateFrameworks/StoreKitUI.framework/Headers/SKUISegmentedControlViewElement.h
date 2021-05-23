/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewElement.h>

@class NSArray, NSString, SKUIDividerViewElement;

__attribute__((visibility("hidden")))
@interface SKUISegmentedControlViewElement : SKUIViewElement

{
    long long _maximumNumberOfVisibleItems;
    NSString *_moreListTitle;
}

@property (nonatomic, readonly) SKUIDividerViewElement *bottomDivider;
@property (nonatomic, readonly) long long initialSelectedItemIndex;
@property (nonatomic, readonly) long long maximumNumberOfVisibleItems;
@property (nonatomic, readonly) NSString *moreListTitle;
@property (nonatomic, readonly) NSArray *segmentItemTitles;

- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)applyUpdatesWithElement:(id)arg1;
- (long long)pageComponentType;
- (void)dispatchEventOfType:(unsigned long long)arg1 forItemAtIndex:(long long)arg2;
- (void)_enumerateItemElementsUsingBlock:(CDUnknownBlockType)arg1;

@end
