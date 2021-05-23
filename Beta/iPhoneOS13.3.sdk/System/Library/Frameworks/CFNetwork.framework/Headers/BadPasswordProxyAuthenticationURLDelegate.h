/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <CFNetwork/ProxyAuthenticationURLDelegate.h>

@interface BadPasswordProxyAuthenticationURLDelegate : ProxyAuthenticationURLDelegate

{
    long long _failureCount;
}

@property long long failureCount;

- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end
