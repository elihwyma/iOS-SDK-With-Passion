/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewElement.h>

@class NSArray, SKUINavigationBarViewElement;

__attribute__((visibility("hidden")))
@interface SKUIExploreTemplateElement : SKUIViewElement

{
    _Bool _usesSplits;
}

@property (nonatomic, readonly) NSArray *childViewElements;
@property (nonatomic, readonly) SKUIViewElement *leftSplit;
@property (nonatomic, readonly) SKUIViewElement *rightSplit;
@property (nonatomic, readonly) SKUINavigationBarViewElement *navigationBarElement;
@property (nonatomic, readonly) _Bool usesSplits;

- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (void)_getLeftSplit:(id *)arg1 rightSplit:(id *)arg2;

@end
