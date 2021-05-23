/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewElement.h>

@class SKUISearchBarViewElement;

__attribute__((visibility("hidden")))
@interface SKUICollectionListViewElement : SKUIViewElement

{
    SKUISearchBarViewElement *_searchHeader;
}

@property (nonatomic, readonly) SKUISearchBarViewElement *searchHeader;

- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end
