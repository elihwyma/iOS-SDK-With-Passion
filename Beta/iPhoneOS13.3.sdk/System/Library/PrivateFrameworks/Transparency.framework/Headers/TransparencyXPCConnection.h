/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@interface TransparencyXPCConnection : NSObject

{
    NSXPCConnection *_connection;
}

@property (retain) NSXPCConnection *connection;

+ (id)instance;
+ (void)invokeXPCWithBlock:(CDUnknownBlockType)arg1 synchronous:(_Bool)arg2;
+ (void)removeInstance;
+ (void)invokeXPCAsynchronousCallWithBlock:(CDUnknownBlockType)arg1;
+ (void)invokeXPCSynchronousCallWithBlock:(CDUnknownBlockType)arg1;

- (void)dealloc;
- (void)createConnection;

@end
