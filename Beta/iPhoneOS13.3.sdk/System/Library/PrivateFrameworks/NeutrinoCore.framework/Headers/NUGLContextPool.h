/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@protocol OS_dispatch_queue;

@interface NUGLContextPool : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_contexts;
}

+ (id)sharedContextPool;

- (id)init;
- (id)newContext;
- (id)newContextForDevice:(id)arg1;
- (void)returnContext:(id)arg1;
- (id)_newContext;
- (void)_returnContext:(id)arg1;

@end
