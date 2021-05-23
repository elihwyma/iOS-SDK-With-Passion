/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class FCOperationThrottler, NSString;

@protocol FCOperationThrottlerDelegate;

@interface FCTimedOperationThrottler : NSObject <Swift>

{
    double _cooldownTime;
    FCOperationThrottler *_operationThrottler;
    id <FCOperationThrottlerDelegate> _delegate;
}

@property (retain, nonatomic) FCOperationThrottler *operationThrottler;
@property (weak, nonatomic) id <FCOperationThrottlerDelegate> delegate;
@property double cooldownTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property _Bool suspended;

- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)tickle;
- (void)operationThrottler:(id)arg1 performAsyncOperationWithCompletion:(CDUnknownBlockType)arg2;
- (void)tickleWithCompletion:(CDUnknownBlockType)arg1;

@end
