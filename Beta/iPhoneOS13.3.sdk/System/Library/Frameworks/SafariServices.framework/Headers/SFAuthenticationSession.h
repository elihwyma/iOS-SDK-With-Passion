/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL, SFAuthenticationViewController;

@protocol _SFAuthenticationSessionDelegate;

@interface SFAuthenticationSession : NSObject

{
    NSURL *_initialURL;
    CDUnknownBlockType _completionHandler;
    SFAuthenticationViewController *_authViewController;
    NSString *_callbackURLScheme;
    _Bool _prefersEphemeralWebBrowserSession;
    _Bool _sessionStarted;
    id <_SFAuthenticationSessionDelegate> __delegate;
}

@property (weak, nonatomic) id <_SFAuthenticationSessionDelegate> _delegate;
@property (nonatomic) _Bool prefersEphemeralWebBrowserSession;
@property (nonatomic, getter=isSessionStarted) _Bool sessionStarted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)cancel;
- (_Bool)start;
- (void)safariViewControllerDidFinish:(id)arg1;
- (id)initWithURL:(id)arg1 callbackURLScheme:(id)arg2 usingEphemeralSession:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)_startRequestingFromWebAuthenticationSession:(_Bool)arg1 inWindow:(id)arg2;
- (id)presentingViewControllerForAuthenticationViewController:(id)arg1;
- (void)safariViewController:(id)arg1 didDecideCookieSharingForURL:(id)arg2 shouldCancel:(_Bool)arg3;
- (void)safariViewController:(id)arg1 hostApplicationOpenURL:(id)arg2;
- (id)initWithURL:(id)arg1 callbackURLScheme:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)startASWebAuthenticationSessionInWindow:(id)arg1;

@end
