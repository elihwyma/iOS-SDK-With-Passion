/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@protocol CXCallObserverDataSource, CXCallObserverDelegate, OS_dispatch_queue;

@interface CXCallObserver : NSObject

{
    id <CXCallObserverDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_concurrentQueue;
    id <CXCallObserverDataSource> _dataSource;
}

@property (weak, nonatomic) id <CXCallObserverDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *concurrentQueue;
@property (nonatomic, readonly) id <CXCallObserverDataSource> dataSource;
@property (copy, nonatomic, readonly) NSArray *calls;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)_performDelegateCallback:(CDUnknownBlockType)arg1;
- (void)dataSource:(id)arg1 callChanged:(id)arg2;
- (id)initWithDataSource:(id)arg1 concurrentQueue:(id)arg2;

@end
