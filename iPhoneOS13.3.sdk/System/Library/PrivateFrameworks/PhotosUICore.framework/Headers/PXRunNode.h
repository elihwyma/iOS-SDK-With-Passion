//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXRunNode-Protocol.h>

@class NSArray, NSLock, NSSet, PXRunNodeOperation;
@protocol PXRunNodeDelegate;

@interface PXRunNode : NSObject <PXRunNode>
{
    PXRunNodeOperation *_operation;
    NSArray *_dependencies;
    id <PXRunNodeDelegate> _delegate;
    NSSet *__dependencySet;
    NSLock *__operationLock;
}

+ (void)processGraphForRunNode:(id)arg1 withQualityOfService:(long long)arg2;
+ (void)processGraphForRunNode:(id)arg1;
+ (id)_defaultNodeRunnerWithQualityOfService:(long long)arg1;
@property(readonly, nonatomic) NSLock *_operationLock; // @synthesize _operationLock=__operationLock;
@property(readonly, nonatomic) NSSet *_dependencySet; // @synthesize _dependencySet=__dependencySet;
@property(nonatomic) __weak id <PXRunNodeDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSArray *dependencies; // @synthesize dependencies=_dependencies;
// - (void).cxx_destruct;
- (void)didCancel;
- (void)cancelWithError:(id)arg1;
- (void)cancel;
- (void)run;
- (void)completeWithError:(id)arg1;
- (void)complete;
@property(readonly, getter=isComplete) BOOL complete;
@property(readonly, getter=isCanceled) BOOL canceled;
@property(readonly, getter=isRunning) BOOL running;
@property(readonly, getter=isWaiting) BOOL waiting;
@property(readonly) NSUInteger state;
- (void)_performChangesToOperation:(id /* CDUnknownBlockType */)arg1;
- (id)newOperation;
- (id)initWithDependencies:(id)arg1;
- (id)init;

@end

