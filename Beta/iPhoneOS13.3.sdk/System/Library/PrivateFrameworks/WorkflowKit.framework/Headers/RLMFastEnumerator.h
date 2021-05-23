/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class RLMRealm;

__attribute__((visibility("hidden")))
@interface RLMFastEnumerator : NSObject

{
    id _strongBuffer[16];
    RLMRealm *_realm;
    struct RLMClassInfo *_info;
    struct Results *_results;
    struct Results _snapshot;
    id _collection;
}

- (void)dealloc;
- (id).cxx_construct;
- (void)detach;
- (id)initWithList:(struct List *)arg1 collection:(id)arg2 realm:(id)arg3 classInfo:(struct RLMClassInfo *)arg4;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 count:(unsigned long long)arg2;
- (id)initWithResults:(struct Results *)arg1 collection:(id)arg2 realm:(id)arg3 classInfo:(struct RLMClassInfo *)arg4;

@end
