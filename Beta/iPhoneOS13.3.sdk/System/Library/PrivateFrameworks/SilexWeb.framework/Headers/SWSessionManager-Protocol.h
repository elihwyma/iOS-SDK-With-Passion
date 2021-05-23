/*
 Image: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
 */

#import <SilexWeb/Swift-Protocol.h>

@protocol SWSession;

@protocol SWSessionManager <Swift>

@property (nonatomic, readonly) id <SWSession> session;

- (unsigned short)refresh;

@end
