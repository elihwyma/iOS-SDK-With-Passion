/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <SpringBoardFoundation/Swift-Protocol.h>

@protocol SBFAuthenticationStatusProvider <Swift>

- (unsigned short)isAuthenticated;
- (unsigned short)hasPasscodeSet;
- (unsigned short)isAuthenticatedCached;
- (unsigned short)hasAuthenticatedAtLeastOnceSinceBoot;

@end
