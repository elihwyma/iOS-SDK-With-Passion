/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASTask.h>

@class NSMutableDictionary, NSString;

@interface ASAutodiscoverV2Task : ASTask

{
    NSString *_emailAddress;
    NSMutableDictionary *_accountInfo;
    _Bool _addEmptyBearer;
    _Bool _discoverOAuthEndpoint;
    NSString *_easEndPoint;
}

- (id)_url;
- (id)contentType;
- (void)finishWithError:(id)arg1;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (double)timeoutInterval;
- (void)loadRequest:(id)arg1;
- (id)initWithEmailAddress:(id)arg1;
- (_Bool)processContext:(id)arg1;
- (void)didProcessContext:(id)arg1;
- (id)_easVersion;
- (id)_policyKey;
- (id)_HTTPMethodForRequest:(id)arg1;
- (_Bool)_shouldSendAuthForRequest:(id)arg1;
- (_Bool)_shouldRedirectToHTTPForRequest:(id)arg1;
- (id)localizedErrorStringForCertificateErrorCode:(int)arg1 host:(id)arg2;
- (_Bool)shouldHandlePasswordErrors;
- (_Bool)shouldStallAfterConnectionLost;
- (_Bool)requiresEASVersionInformaton;
- (_Bool)shouldLogIncomingData;
- (id)_OAuthURLFromResponseData:(id)arg1;

@end
