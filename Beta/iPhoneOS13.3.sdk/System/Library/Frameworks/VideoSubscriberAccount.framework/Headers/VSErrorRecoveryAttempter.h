/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@class NSArray, NSOperationQueue;

__attribute__((visibility("hidden")))
@interface VSErrorRecoveryAttempter : NSObject

{
    NSArray *_options;
    NSOperationQueue *_recoveryAttemptingQueue;
}

@property (retain, nonatomic) NSOperationQueue *recoveryAttemptingQueue;
@property (copy, nonatomic) NSArray *options;

- (id)init;
- (_Bool)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2;
- (void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 delegate:(id)arg3 didRecoverSelector:(SEL)arg4 contextInfo:(void *)arg5;

@end
