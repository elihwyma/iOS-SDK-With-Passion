/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIActivityItemProvider.h>

@class SKUIShareTemplateViewElement;

__attribute__((visibility("hidden")))
@interface SKUIShareTemplateURLItemProvider : UIActivityItemProvider

{
    SKUIShareTemplateViewElement *_templateElement;
}

- (id)item;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(struct CGSize)arg3;
- (id)initWithTemplateElement:(id)arg1;

@end
