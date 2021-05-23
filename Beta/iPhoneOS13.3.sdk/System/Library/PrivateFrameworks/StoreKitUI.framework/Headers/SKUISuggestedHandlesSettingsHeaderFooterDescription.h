/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUISettingsHeaderFooterDescription.h>

@class NSArray, SKUIClientContext;

@protocol SKUISuggestedHandlesSettingsHeaderFooterDescriptionDelegate;

__attribute__((visibility("hidden")))
@interface SKUISuggestedHandlesSettingsHeaderFooterDescription : SKUISettingsHeaderFooterDescription

{
    SKUIClientContext *_clientContext;
    NSArray *_suggestedHandles;
    id <SKUISuggestedHandlesSettingsHeaderFooterDescriptionDelegate> _delegate;
}

@property (weak, nonatomic) id <SKUISuggestedHandlesSettingsHeaderFooterDescriptionDelegate> delegate;

- (Class)_viewClassForSettingsHeaderFooterDescription:(id)arg1;
- (id)initWithSuggestedHandles:(id)arg1 clientContext:(id)arg2 delegate:(id)arg3;
- (id)helpText;
- (void)selectedHandleAtIndex:(unsigned long long)arg1;
- (id)suggestedHandles;

@end
