/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewElement.h>

@class NSArray, NSString, SKUIActivityIndicatorViewElement, SKUINavigationBarViewElement;

__attribute__((visibility("hidden")))
@interface SKUIChartsTemplateViewElement : SKUIViewElement

{
    NSString *_type;
}

@property (nonatomic, readonly) SKUIActivityIndicatorViewElement *activityIndicator;
@property (nonatomic, readonly) NSArray *columns;
@property (nonatomic, readonly) SKUINavigationBarViewElement *navigationBarElement;
@property (nonatomic, readonly) NSString *type;

- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end
