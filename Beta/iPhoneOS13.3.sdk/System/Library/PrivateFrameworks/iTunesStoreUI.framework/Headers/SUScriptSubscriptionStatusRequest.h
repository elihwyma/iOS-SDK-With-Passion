/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString;

@interface SUScriptSubscriptionStatusRequest : SUScriptObject

{
    long long _carrierBundleProvisioningStyle;
    _Bool _ignoreCache;
    long long _reason;
    long long _service;
    _Bool _wantsPartialResults;
}

@property (copy) NSString *carrierBundleProvisioningStyleName;
@property id ignoreCache;
@property (copy) NSString *reasonName;
@property (copy) NSString *serviceName;
@property id wantsPartialResults;
@property (readonly) NSString *reasonNameDeepLink;
@property (readonly) NSString *serviceNameAppleMusic;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;

- (id)init;
- (id)_className;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (void)_handleRequestCompletionWithSubscriptionStatus:(id)arg1 isFinal:(_Bool)arg2 scriptCallbackFunction:(id)arg3;
- (void)performRequestWithCallbackFunction:(id)arg1;

@end
