/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIActivityItemProvider.h>

@class SKUIClientContext, SKUIShareTemplateViewElement;

__attribute__((visibility("hidden")))
@interface SKUIShareTemplateTextItemProvider : UIActivityItemProvider

{
    SKUIClientContext *_clientContext;
    SKUIShareTemplateViewElement *_templateElement;
}

- (id)item;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)initWithTemplateElement:(id)arg1 clientContext:(id)arg2;

@end
