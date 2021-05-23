/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewElement.h>

@class NSArray;

@interface SKUIShareTemplateViewElement : SKUIViewElement

@property (nonatomic, readonly) NSArray *activities;

- (id)activityForUIActivityType:(id)arg1;
- (id)activityForShareSheetActivityType:(id)arg1;

@end
