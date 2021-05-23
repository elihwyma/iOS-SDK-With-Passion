/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

#import <Message/Swift-Protocol.h>

@class NSConditionLock;

@interface MFDAMailAccountConsumer : NSObject <Swift>

{
    NSConditionLock *_doneCondition;
    _Bool _shouldRetryRequest;
    _Bool _alwaysReportFailures;
}

- (id)init;
- (void)setDone:(_Bool)arg1;
- (void)actionFailed:(long long)arg1 forTask:(id)arg2 error:(id)arg3;
- (void)waitUntilDone;
- (_Bool)shouldRetryRequest;
- (id)initWithAlwaysReportFailures:(_Bool)arg1;
- (void)taskFailed:(id)arg1 statusCode:(long long)arg2 error:(id)arg3;
- (_Bool)waitUntilDoneBeforeDate:(id)arg1;

@end
