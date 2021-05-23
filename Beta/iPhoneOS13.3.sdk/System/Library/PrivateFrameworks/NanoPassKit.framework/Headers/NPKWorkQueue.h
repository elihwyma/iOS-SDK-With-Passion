/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@protocol OS_dispatch_queue;

@interface NPKWorkQueue : NSObject

{
    _Bool _performingWork;
    _Bool _takeOutTransactions;
    NSString *_workQueueName;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_remainingWork;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableArray *remainingWork;
@property (nonatomic) _Bool performingWork;
@property (nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic) _Bool takeOutTransactions;
@property (retain, nonatomic) NSString *workQueueName;

- (id)init;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;
- (id)initWithQueue:(id)arg1 takeOutTransactions:(_Bool)arg2;
- (void)_onQueue_doWorkIfNecessary;
- (void)performWork:(CDUnknownBlockType)arg1;

@end
