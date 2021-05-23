/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface SKUISettingsFamilyViewStateCoordinator : NSObject

{
    CDUnknownBlockType _completionBlock;
}

- (void)checkSettingsFamilyViewStateWithBlock:(CDUnknownBlockType)arg1;
- (void)_getSubscriptionStatus;
- (void)_returnFamilyViewState:(long long)arg1;
- (void)_checkSubscriptionStatus:(id)arg1 isFinal:(_Bool)arg2 error:(id)arg3;

@end
