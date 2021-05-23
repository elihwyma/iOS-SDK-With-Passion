/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <WebKitLegacy/Swift-Protocol.h>

@protocol WebAllowDenyPolicyListener <Swift>

- (unsigned short)allow;
- (unsigned short)deny;
- (unsigned short)shouldClearCache;
- (unsigned short)denyOnlyThisRequest;

@end
