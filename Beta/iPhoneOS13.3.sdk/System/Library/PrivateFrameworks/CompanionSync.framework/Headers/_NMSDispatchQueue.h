/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <NSObject.h>

@protocol OS_dispatch_queue;

@interface _NMSDispatchQueue : NSObject

{
    NSObject<OS_dispatch_queue> *_q;
    _Atomic _Bool _r;
}

@property (nonatomic, readonly, getter=isSuspended) _Bool suspended;

- (id)init;
- (void)dealloc;
- (void)resume;
- (void)suspend;
- (void)async:(CDUnknownBlockType)arg1;
- (void)sync:(CDUnknownBlockType)arg1;
- (id)initWithName:(id)arg1 attributes:(id)arg2 target:(id)arg3;

@end
