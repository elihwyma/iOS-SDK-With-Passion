/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <Foundation/NSObject.h>

@class NSMutableSet;

@protocol CXTransactionManagerDelegate, OS_dispatch_queue;

@interface CXTransactionManager : NSObject

{
    id <CXTransactionManagerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_outstandingTransactionGroups;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableSet *outstandingTransactionGroups;
@property (weak, nonatomic) id <CXTransactionManagerDelegate> delegate;

- (id)init;
- (id)description;
- (id)initWithQueue:(id)arg1;
- (void)addOutstandingTransactionGroup:(id)arg1;
- (void)failOutstandingActionsForCallWithUUID:(id)arg1;
- (void)updateWithCompletedAction:(id)arg1;
- (void)_setUpTimeoutForAction:(id)arg1 callSource:(id)arg2;
- (void)_timeoutReachedForAction:(id)arg1 callSource:(id)arg2;

@end
