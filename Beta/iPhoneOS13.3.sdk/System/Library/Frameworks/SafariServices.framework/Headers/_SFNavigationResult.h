/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class LSApplicationProxy, NSURL, WBSAppLink;

@interface _SFNavigationResult : NSObject

{
    _Bool _loadWasUserDriven;
    LSApplicationProxy *_externalApplication;
    long long _externalApplicationCategory;
    long long _type;
    NSURL *_URL;
    WBSAppLink *_appLink;
}

@property (nonatomic, readonly) _Bool appliesOneTimeUserInitiatedActionPolicy;
@property (nonatomic, readonly) LSApplicationProxy *externalApplication;
@property (nonatomic, readonly) long long externalApplicationCategory;
@property (nonatomic, readonly) _Bool isRedirectToAppleServices;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) WBSAppLink *appLink;
@property (nonatomic) _Bool loadWasUserDriven;

+ (id)resultOfLoadingRequest:(id)arg1 isMainFrame:(_Bool)arg2 disallowRedirectToExternalApps:(_Bool)arg3 preferredApplicationBundleIdentifier:(id)arg4 redirectDecisionHandler:(CDUnknownBlockType)arg5;
+ (id)resultOfType:(long long)arg1 withURL:(id)arg2;
+ (id)resultWithRedirectToExternalURL:(id)arg1 preferredApplicationBundleIdentifier:(id)arg2;
+ (id)resultWithAppLink:(id)arg1;

- (_Bool)shouldPromptWithPolicy:(long long)arg1 telephonyNavigationPolicy:(id)arg2 userAction:(id)arg3 inBackground:(_Bool)arg4;
- (id)_initWithType:(long long)arg1 URL:(id)arg2 externalApplication:(id)arg3 appLink:(id)arg4;

@end
