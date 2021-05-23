/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSLock, NSSet, NSString, PXRunNodeOperation;

@protocol PXRunNodeDelegate;

@interface PXRunNode : NSObject

{
    PXRunNodeOperation *_operation;
    NSArray *_dependencies;
    id <PXRunNodeDelegate> _delegate;
    NSSet *__dependencySet;
    NSLock *__operationLock;
}

@property (nonatomic, readonly) NSSet *_dependencySet;
@property (nonatomic, readonly) NSLock *_operationLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long state;
@property (readonly, getter=isWaiting) _Bool waiting;
@property (readonly, getter=isRunning) _Bool running;
@property (readonly, getter=isComplete) _Bool complete;
@property (readonly, getter=isCanceled) _Bool canceled;
@property (weak, nonatomic) id <PXRunNodeDelegate> delegate;
@property (copy, nonatomic, readonly) NSArray *dependencies;

+ (id)_defaultNodeRunnerWithQualityOfService:(long long)arg1;
+ (void)processGraphForRunNode:(id)arg1;
+ (void)processGraphForRunNode:(id)arg1 withQualityOfService:(long long)arg2;

- (id)init;
- (void)run;
- (void)cancel;
- (void)complete;
- (void)cancelWithError:(id)arg1;
- (void)didCancel;
- (void)completeWithError:(id)arg1;
- (id)initWithDependencies:(id)arg1;
- (id)newOperation;
- (void)_performChangesToOperation:(CDUnknownBlockType)arg1;

@end
