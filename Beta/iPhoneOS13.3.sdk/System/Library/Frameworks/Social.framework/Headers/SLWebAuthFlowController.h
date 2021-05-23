/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Foundation/NSObject.h>

@class NSString, NSURLRequest;

@protocol SLWebClient;

@interface SLWebAuthFlowController : NSObject

{
    NSURLRequest *_requestWithAuthorizationCode;
    CDUnknownBlockType _completion;
    NSString *_yahooJapanUserName;
    id <SLWebClient> _webClient;
}

@property (readonly) id <SLWebClient> webClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithWebClient:(id)arg1;
- (void)setAuthFlowCompletion:(CDUnknownBlockType)arg1;
- (id)authURLForUsername:(id)arg1;
- (id)requestForAuthURL:(id)arg1;
- (id)initialRedirectURL;
- (_Bool)shouldHideWebViewForLoadWithRequest:(id)arg1;
- (void)webViewDidFinishLoadWithPageTitleSupplier:(CDUnknownBlockType)arg1;

@end
