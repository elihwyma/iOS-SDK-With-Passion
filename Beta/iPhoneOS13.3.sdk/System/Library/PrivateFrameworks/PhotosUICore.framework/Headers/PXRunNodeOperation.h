/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSOperation.h>

@class NSLock, PXRunNode;

@interface PXRunNodeOperation : NSOperation

{
    unsigned long long _state;
    PXRunNode *_runNode;
    NSLock *__stateLock;
}

@property (nonatomic, readonly) NSLock *_stateLock;
@property (nonatomic, readonly) PXRunNode *runNode;
@property (readonly) unsigned long long state;

+ (id)keyPathsForValuesAffectingIsFinished;
+ (id)keyPathsForValuesAffectingIsReady;
+ (id)keyPathsForValuesAffectingIsExecuting;

- (id)init;
- (void)start;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isReady;
- (_Bool)isAsynchronous;
- (_Bool)_transitionToState:(unsigned long long)arg1;
- (id)initWithRunNode:(id)arg1;
- (_Bool)cancelIfAble;
- (_Bool)completeIfAble;

@end
