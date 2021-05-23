/*
 Image: /System/Library/Frameworks/GLKit.framework/GLKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface GLKShadingHash : NSObject

{
    NSObject<OS_dispatch_queue> *_vshQueue;
    NSObject<OS_dispatch_queue> *_fshQueue;
    NSMutableDictionary *_compiledVshs;
    NSMutableDictionary *_compiledFshs;
}

- (id)init;
- (void)dealloc;
- (void)purgeAllShaders;
- (id)compiledVshForKey:(id)arg1;
- (void)setCompiledVsh:(id)arg1 forKey:(id)arg2;
- (id)compiledFshForKey:(id)arg1;
- (void)setCompiledFsh:(id)arg1 forKey:(id)arg2;

@end
