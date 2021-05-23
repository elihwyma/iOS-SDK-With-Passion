/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@class NSString, TUCallProviderManager;

@interface CNTUCallProviderManager : NSObject

{
    TUCallProviderManager *_callProviderManager;
}

@property (copy, nonatomic) TUCallProviderManager *callProviderManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)providerManagerQueue;
- (id)observableForCallProvidersChangedWithSchedulerProvider:(id)arg1;
- (id)thirdPartyCallProvidersForActionType:(id)arg1;
- (id)thirdPartyCallProviderWithBundleIdentifier:(id)arg1;

@end
