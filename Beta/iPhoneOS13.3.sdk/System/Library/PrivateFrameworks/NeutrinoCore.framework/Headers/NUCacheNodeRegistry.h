/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface NUCacheNodeRegistry : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_registry;
}

- (id)init;
- (void)registerClass:(Class)arg1 forCacheNodeType:(id)arg2;
- (Class)classForCacheNodeType:(id)arg1;

@end
