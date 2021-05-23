/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/Swift-Protocol.h>

@protocol CSUserSessionControlling <Swift>

@property (nonatomic, readonly, getter=isLogoutSupported) _Bool logoutSupported;

- (unsigned short)logout;

@end
