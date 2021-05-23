/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewElement.h>

@class NSArray, NSMutableArray, SKUIIndexBarViewElement, SKUINavigationBarViewElement, SKUIToolbarViewElement;

@interface SKUIStackTemplateElement : SKUIViewElement

{
    NSMutableArray *_collectionElements;
    SKUIViewElement *_collectionHeaderViewElement;
    _Bool _needsStateReset;
}

@property (nonatomic, readonly) NSArray *collectionElements;
@property (nonatomic, readonly) SKUIViewElement *collectionHeaderViewElement;
@property (nonatomic, readonly) SKUIIndexBarViewElement *indexBarViewElement;
@property (nonatomic, readonly) SKUINavigationBarViewElement *navigationBarElement;
@property (nonatomic, readonly) SKUIToolbarViewElement *toolbarElement;
@property (nonatomic, readonly) long long numberOfSplits;
@property (nonatomic, readonly) _Bool needsStateReset;

- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)applyUpdatesWithElement:(id)arg1;

@end
