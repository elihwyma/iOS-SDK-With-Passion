/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewElement.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface SKUIRowViewElement : SKUIViewElement

{
    NSString *_type;
}

@property (nonatomic, readonly) NSArray *columns;
@property (nonatomic, readonly) NSString *type;

- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (long long)pageComponentType;

@end
