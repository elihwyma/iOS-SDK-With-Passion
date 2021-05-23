/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@class HMFUnfairLock, NSObject, NSString;

@protocol HMFSystemInfoNameDataSourceDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface __HMFSystemConfigurationDataSource

{
    HMFUnfairLock *_lock;
    id <HMFSystemInfoNameDataSourceDelegate> _delegate;
    NSString *_name;
    NSObject<OS_dispatch_queue> *_queue;
    struct __SCDynamicStore *_store;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) struct __SCDynamicStore *store;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak) id <HMFSystemInfoNameDataSourceDelegate> delegate;
@property (copy, nonatomic, readonly) NSString *name;

- (id)init;
- (void)dealloc;

@end
