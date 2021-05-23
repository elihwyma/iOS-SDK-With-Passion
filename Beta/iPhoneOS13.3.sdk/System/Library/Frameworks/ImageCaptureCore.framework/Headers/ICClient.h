/*
 Image: /System/Library/Frameworks/ImageCaptureCore.framework/ImageCaptureCore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface ICClient : NSObject

{
    struct os_unfair_lock_s _resourceLock;
    _Bool _openSession;
    _Bool _forwardPTPEvents;
    NSXPCConnection *_connection;
    NSMutableArray *_notifications;
    unsigned long long _objectHandle;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly) NSMutableArray *notifications;
@property (readonly) int pid;
@property _Bool openSession;
@property unsigned long long objectHandle;
@property _Bool forwardPTPEvents;

- (void)dealloc;
- (void)lock;
- (void)unlock;
- (id)initWithConnection:(id)arg1;
- (void)addNotifications:(id)arg1;
- (void)remNotifications:(id)arg1;
- (_Bool)interestedInNotification:(id)arg1;

@end
