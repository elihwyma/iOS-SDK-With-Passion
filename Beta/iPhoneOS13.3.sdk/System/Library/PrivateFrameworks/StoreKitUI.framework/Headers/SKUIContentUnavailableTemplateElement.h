/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewElement.h>

@class SKUIButtonViewElement, SKUIImageViewElement, SKUILabelViewElement;

__attribute__((visibility("hidden")))
@interface SKUIContentUnavailableTemplateElement : SKUIViewElement

@property (nonatomic, readonly) SKUIButtonViewElement *button;
@property (nonatomic, readonly) SKUIImageViewElement *image;
@property (nonatomic, readonly) SKUILabelViewElement *messageLabel;
@property (nonatomic, readonly) SKUILabelViewElement *titleLabel;

- (long long)pageComponentType;

@end
