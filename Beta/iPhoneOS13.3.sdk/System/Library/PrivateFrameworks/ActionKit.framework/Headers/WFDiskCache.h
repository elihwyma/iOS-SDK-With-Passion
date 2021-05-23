/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSURL;

@protocol OS_dispatch_queue;

@interface WFDiskCache : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSURL *_cacheURL;
}

@property (copy, nonatomic, readonly) NSURL *cacheURL;

+ (id)workflowCache;

- (id)init;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)initWithName:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)fileURLForKey:(id)arg1;
- (id)initWithApplicationGroupIdentifier:(id)arg1 name:(id)arg2;
- (id)initWithCacheDirectory:(id)arg1 name:(id)arg2;
- (id)initWithCacheURL:(id)arg1 name:(id)arg2;
- (void)removeObjectForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)objectForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setObject:(id)arg1 forKeyComponents:(id)arg2;
- (void)removeObjectForKeyComponents:(id)arg1;
- (id)objectForKeyComponents:(id)arg1;
- (void)actuallySetObject:(id)arg1 forKey:(id)arg2;
- (void)actuallyRemoveObjectForKey:(id)arg1;
- (id)actuallyGetObjectForKey:(id)arg1;

@end
