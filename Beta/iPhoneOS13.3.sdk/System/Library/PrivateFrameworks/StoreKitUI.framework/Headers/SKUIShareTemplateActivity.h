/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIActivity.h>

@class SKUIClientContext, SKUIShareSheetActivityViewElement;

__attribute__((visibility("hidden")))
@interface SKUIShareTemplateActivity : UIActivity

{
    SKUIClientContext *_clientContext;
    SKUIShareSheetActivityViewElement *_viewElement;
}

- (id)activityType;
- (id)activityTitle;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)activityImage;
- (void)performActivity;
- (id)_beforeActivity;
- (id)initWithActivityViewElement:(id)arg1 clientContext:(id)arg2;

@end
