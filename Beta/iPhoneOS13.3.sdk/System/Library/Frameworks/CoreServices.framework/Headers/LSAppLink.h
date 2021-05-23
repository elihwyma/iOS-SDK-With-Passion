/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <NSObject.h>

@class LSApplicationProxy, NSDictionary, NSURL, _LSValidationToken;

@interface LSAppLink : NSObject

{
    NSURL *_URL;
    LSApplicationProxy *_targetApplicationProxy;
    _LSValidationToken *__validationToken;
}

@property (retain, nonatomic) NSDictionary *browserSettings;
@property long long openStrategy;
@property (retain) _LSValidationToken *_validationToken;
@property (copy) NSURL *URL;
@property (retain) LSApplicationProxy *targetApplicationProxy;
@property (nonatomic, getter=isEnabled) _Bool enabled;

+ (_Bool)supportsSecureCoding;
+ (_Bool)URLComponentsAreValidForAppLinks:(id)arg1 error:(id *)arg2;
+ (id)_dispatchQueue;
+ (id)appLinksWithURL:(id)arg1 limit:(unsigned long long)arg2 error:(id *)arg3;
+ (_Bool)areEnabledByDefault;
+ (void)getAppLinkWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)getAppLinksWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)openWithURL:(id)arg1 configuration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)_openWithAppLink:(id)arg1 state:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)openWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (_Bool)removeAllSettingsReturningError:(id *)arg1;
+ (id)_appLinksWithState:(id)arg1 context:(struct LSContext *)arg2 limit:(unsigned long long)arg3 requireEntitlement:(_Bool)arg4 error:(id *)arg5;
+ (id)_appLinksWithState:(id)arg1 context:(struct LSContext *)arg2 limit:(unsigned long long)arg3 URLComponents:(id)arg4 error:(id *)arg5;
+ (id)_appLinksWithState:(id)arg1 limit:(unsigned long long)arg2 requireEntitlement:(_Bool)arg3 error:(id *)arg4;
+ (void)_openAppLink:(id)arg1 state:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (_Bool)_URLIsValidForAppLinks:(id)arg1 error:(id *)arg2;
+ (id)_appLinkWithURL:(id)arg1 applicationProxy:(id)arg2 plugInClass:(Class)arg3;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)setEnabled:(_Bool)arg1 error:(id *)arg2;
- (id)_validationTokenPayload;
- (void)openWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)setBrowserSettings:(id)arg1 error:(id *)arg2;
- (_Bool)removeSettingsReturningError:(id *)arg1;
- (void)openInWebBrowser:(_Bool)arg1 setOpenStrategy:(long long)arg2 webBrowserState:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)openInWebBrowser:(_Bool)arg1 setOpenStrategy:(long long)arg2 webBrowserState:(id)arg3 configuration:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)openInWebBrowser:(_Bool)arg1 setAppropriateOpenStrategyAndWebBrowserState:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)_validateReturningError:(id *)arg1;
- (id)_userActivityWithState:(id)arg1 error:(id *)arg2;

@end
