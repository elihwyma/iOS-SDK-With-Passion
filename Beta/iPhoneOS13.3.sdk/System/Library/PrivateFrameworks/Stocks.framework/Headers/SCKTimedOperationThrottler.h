/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <Foundation/NSObject.h>

@class NSString, SCKOperationThrottler;

@protocol SCKOperationThrottlerDelegate;

@interface SCKTimedOperationThrottler : NSObject

{
    double _cooldownTime;
    SCKOperationThrottler *_operationThrottler;
    id <SCKOperationThrottlerDelegate> _delegate;
}

@property (retain, nonatomic) SCKOperationThrottler *operationThrottler;
@property (weak, nonatomic) id <SCKOperationThrottlerDelegate> delegate;
@property double cooldownTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property _Bool suspended;

- (id)initWithDelegate:(id)arg1;
- (void)tickle;
- (void)operationThrottler:(id)arg1 performAsyncOperationWithCompletion:(CDUnknownBlockType)arg2;
- (void)tickleWithCompletion:(CDUnknownBlockType)arg1;

@end
