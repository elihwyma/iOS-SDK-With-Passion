/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <Foundation/NSObject.h>

@class CXCallObserver;

@protocol OS_dispatch_queue;

@interface CXCallController : NSObject

{
    CXCallObserver *_callObserver;
    NSObject<OS_dispatch_queue> *_completionQueue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *completionQueue;
@property (retain, nonatomic) CXCallObserver *callObserver;

- (id)init;
- (id)initWithQueue:(id)arg1;
- (void)requestTransaction:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_requestTransaction:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestTransactionWithActions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestTransactionWithAction:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
