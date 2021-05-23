/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

#import <CFNetwork/Swift-Protocol.h>

@class NSString;

@interface StrictSecurityURLSessionDelegate : NSObject <Swift>

{
    CDUnknownBlockType _xctAssert;
    _Bool _redirected;
    _Bool _challengedForServerTrust;
    _Bool _cancelTrustChallenge;
    _Bool _expectSchemeUpgradeDueToDynamicHSTS;
    _Bool _setIgnoreHSTSInRedirect;
}

@property (copy) CDUnknownBlockType xctAssert;
@property _Bool redirected;
@property _Bool challengedForServerTrust;
@property _Bool cancelTrustChallenge;
@property _Bool expectSchemeUpgradeDueToDynamicHSTS;
@property _Bool setIgnoreHSTSInRedirect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)initWithXCTAssertBlock:(CDUnknownBlockType)arg1;

@end
