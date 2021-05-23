/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIItemViewElement.h>

@class NSArray, SKUILabelViewElement;

__attribute__((visibility("hidden")))
@interface SKUIStackItemViewElement : SKUIItemViewElement

@property (nonatomic, readonly) NSArray *imageElements;
@property (nonatomic, readonly) SKUILabelViewElement *textElement;

- (long long)pageComponentType;

@end
