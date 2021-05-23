/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <WebKit/Swift-Protocol.h>

@protocol WebAllowDenyPolicyListener <Swift>

- (unsigned short)allow;
- (unsigned short)deny;
- (unsigned short)shouldClearCache;
- (unsigned short)denyOnlyThisRequest;

@end
