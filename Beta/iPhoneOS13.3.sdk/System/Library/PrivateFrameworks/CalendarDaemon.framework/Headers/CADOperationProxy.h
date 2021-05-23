/*
 Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

#import <Foundation/NSObject.h>

@class ClientConnection, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CADOperationProxy : NSObject

{
    ClientConnection *_conn;
    NSMutableDictionary *_operationGroups;
}

+ (id)allOperationGroupClasses;
+ (Class)_operationGroupClassFromSelector:(SEL)arg1;
+ (Class)operationProxyClassForClientWithConnection:(id)arg1;

- (void)dealloc;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithClientConnection:(id)arg1;
- (id)_operationGroupForClass:(Class)arg1;
- (void)_emptyMethod;
- (id)_copyReplyBlockFromInvocation:(id)arg1;
- (void)_callReplyHandler:(id)arg1 ofInvocation:(id)arg2 withError:(int)arg3;

@end
