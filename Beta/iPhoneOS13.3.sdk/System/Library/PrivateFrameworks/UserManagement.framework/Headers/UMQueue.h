/*
 Image: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface UMQueue : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)client;
+ (id)server;
+ (id)userList;

- (void)_executeWithSelf:(id)arg1 block:(CDUnknownBlockType)arg2 synchronously:(_Bool)arg3;
- (void)executeWithSelf:(id)arg1 asynchronously:(CDUnknownBlockType)arg2;
- (void)executeWithSelf:(id)arg1 synchronously:(CDUnknownBlockType)arg2;

@end
