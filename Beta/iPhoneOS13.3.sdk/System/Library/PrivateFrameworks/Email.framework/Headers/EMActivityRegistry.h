/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Foundation/NSObject.h>

@class EMRemoteConnection, NSMapTable;

@interface EMActivityRegistry : NSObject

{
    NSMapTable *_observerWrappersByObserver;
    struct os_unfair_lock_s _lock;
    EMRemoteConnection *_connection;
}

@property (retain) EMRemoteConnection *connection;

+ (id)remoteInterface;
+ (id)observerInterface;

- (id)initWithRemoteConnection:(id)arg1;
- (id)registerActivityObserver:(id)arg1;

@end
