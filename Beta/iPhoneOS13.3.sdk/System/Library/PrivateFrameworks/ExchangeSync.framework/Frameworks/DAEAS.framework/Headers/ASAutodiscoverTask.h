/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASTask.h>

@class NSError, NSMutableDictionary, NSString;

@interface ASAutodiscoverTask : ASTask

{
    NSString *_serverURL;
    NSString *_emailAddress;
    NSString *_redirectEmail;
    NSString *_authUsername;
    NSMutableDictionary *_accountInfo;
    NSError *_discoveryError;
    _Bool _wasRedirectedThroughHTTP;
    NSString *_originalURLScheme;
}

@property (retain, nonatomic) NSString *originalURLScheme;
@property (nonatomic) _Bool wasRedirectedThroughHTTP;

- (id)_url;
- (id)contentType;
- (void)finishWithError:(id)arg1;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (double)timeoutInterval;
- (id)requestBody;
- (_Bool)processContext:(id)arg1;
- (void)_handleErrorNode:(struct _xmlNode *)arg1;
- (void)_handleServerNode:(struct _xmlNode *)arg1;
- (void)_handleActionNode:(struct _xmlNode *)arg1;
- (void)_handleUserNode:(struct _xmlNode *)arg1;
- (void)_setAccountInfoFromAutoDiscoveryXML:(id)arg1;
- (void)didProcessContext:(id)arg1;
- (id)initWithURL:(id)arg1 emailAddress:(id)arg2 authUsername:(id)arg3;
- (id)_easVersion;
- (id)_policyKey;
- (id)_HTTPMethodForRequest:(id)arg1;
- (_Bool)_shouldSendAuthForRequest:(id)arg1;
- (void)_addAuthToRequest:(id)arg1;
- (_Bool)_shouldRedirectToHTTPForRequest:(id)arg1;
- (id)localizedErrorStringForCertificateErrorCode:(int)arg1 host:(id)arg2;
- (_Bool)shouldHandlePasswordErrors;
- (_Bool)shouldStallAfterConnectionLost;
- (_Bool)requiresEASVersionInformaton;
- (_Bool)shouldLogIncomingData;

@end
