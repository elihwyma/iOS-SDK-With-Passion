/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIInputViewElement.h>

@class NSString, SKUIViewElementText;

__attribute__((visibility("hidden")))
@interface SKUISearchBarViewElement : SKUIInputViewElement

{
    NSString *_accessoryText;
    SKUIViewElementText *_defaultText;
    NSString *_placeholderString;
    NSString *_searchHintsURLString;
    NSString *_trendingSearchURLString;
}

@property (nonatomic, readonly) NSString *accessoryText;
@property (nonatomic, readonly) SKUIViewElementText *defaultText;
@property (nonatomic, readonly) NSString *placeholderString;
@property (nonatomic, readonly) NSString *searchHintsURLString;
@property (nonatomic, readonly) NSString *trendingSearchURLString;

- (unsigned long long)elementType;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)applyUpdatesWithElement:(id)arg1;
- (long long)pageComponentType;

@end
