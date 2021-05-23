/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIActivityItemProvider.h>

@class SKUIShareTemplateViewElement;

__attribute__((visibility("hidden")))
@interface SKUIShareTemplateImageItemProvider : UIActivityItemProvider

{
    SKUIShareTemplateViewElement *_templateElement;
}

- (id)item;
- (id)initWithTemplateElement:(id)arg1;

@end
