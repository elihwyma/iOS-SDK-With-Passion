/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SSDistributedNotificationCenterObserver : NSObject

{
    CDUnknownBlockType _block;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_name;
}

@property (nonatomic, readonly) CDUnknownBlockType block;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, readonly) NSString *name;

- (void)dealloc;
- (id)initWithName:(id)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;

@end
