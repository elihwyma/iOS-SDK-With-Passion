/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIInterfaceAction.h>

__attribute__((visibility("hidden")))
@interface SKUIReviewInAppRatingAction : UIInterfaceAction

{
    CDUnknownBlockType _beforeDismissHandler;
    CDUnknownBlockType _afterDismissHandler;
}

@property (copy, nonatomic) CDUnknownBlockType beforeDismissHandler;
@property (copy, nonatomic) CDUnknownBlockType afterDismissHandler;

+ (id)actionWithCustomContentViewController:(id)arg1;

- (void)setEnabled:(_Bool)arg1;
- (void)setCustomEnabledState:(_Bool)arg1;

@end
