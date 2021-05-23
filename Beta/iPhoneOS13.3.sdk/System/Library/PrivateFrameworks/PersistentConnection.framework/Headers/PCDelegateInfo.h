/*
 Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface PCDelegateInfo : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)setQueue:(id)arg1;
- (id)queue;

@end
