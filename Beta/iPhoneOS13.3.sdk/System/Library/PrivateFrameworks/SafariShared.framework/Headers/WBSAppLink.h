/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class LSAppLink, LSApplicationProxy, NSURL;

@interface WBSAppLink : NSObject

{
    struct os_unfair_lock_s _ivarLock;
    _Bool _didResolveAppLink;
    LSAppLink *_cachedAppLink;
    NSURL *_url;
}

@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) LSApplicationProxy *synchronousTargetApplicationProxy;

+ (void)clearSavedSettings;

- (id)initWithURL:(id)arg1;
- (void)disable;
- (long long)synchronouslyDecideOpenStrategy;
- (void)getAppLinkLabel:(id *)arg1 name:(id *)arg2 icon:(id *)arg3;
- (void)disableWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)openExternally;
- (void)decideOpenStrategyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_synchronouslyFetchAppLinkWithError:(id *)arg1;
- (void)_getAppLinkWithCompletionHandler:(CDUnknownBlockType)arg1;
- (long long)_openStrategyForAppLink:(id)arg1;
- (void)_appLink:(id)arg1 getAppLinkLabel:(id *)arg2 name:(id *)arg3 icon:(id *)arg4;
- (void)openExternallyWithWebBrowserState:(id)arg1 referrerURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getAppLinkAttributesWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
