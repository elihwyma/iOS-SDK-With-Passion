/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewElement.h>

@class NSArray, SKUIImageViewElement, SKUILabelViewElement;

__attribute__((visibility("hidden")))
@interface SKUIDialogTemplateViewElement : SKUIViewElement

{
    long long _dialogType;
}

@property (nonatomic, readonly) long long dialogType;
@property (nonatomic, readonly) SKUILabelViewElement *message;
@property (nonatomic, readonly) SKUILabelViewElement *title;
@property (nonatomic, readonly) NSArray *buttons;
@property (nonatomic, readonly) SKUIImageViewElement *image;

- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)applyUpdatesWithElement:(id)arg1;

@end
