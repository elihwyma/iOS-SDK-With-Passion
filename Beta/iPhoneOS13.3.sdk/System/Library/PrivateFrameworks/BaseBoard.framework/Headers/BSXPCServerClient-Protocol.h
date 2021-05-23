/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

#import <BaseBoard/Swift-Protocol.h>

@class NSObject;

@protocol OS_xpc_object;

@protocol BSXPCServerClient <Swift>

@property (nonatomic, readonly) NSObject<OS_xpc_object> *connection;

- (unsigned short)invalidate;
- (unsigned short)resume;
- (unsigned short)suspend;

@end
