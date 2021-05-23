/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIAppCACommitFuture : NSObject

{
    CDUnknownBlockType _block;
    _Bool _invalidated;
    _Bool _finished;
}

@property (nonatomic, readonly, getter=_isInvalidated) _Bool invalidated;
@property (nonatomic, readonly, getter=_isFinished) _Bool finished;

+ (id)scheduledPostCommitFuture:(CDUnknownBlockType)arg1;
+ (id)scheduledPreCommitFuture:(CDUnknownBlockType)arg1;

- (void)invalidate;
- (id)initWithPhase:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)_invoke;

@end
