/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCForYouCatchUpCondition, NFUnfairLock, NSError, NSString;

@protocol OS_dispatch_group;

@interface FCForYouCatchUpConditionWaiter : NSObject

{
    NFUnfairLock *_lock;
    NSObject<OS_dispatch_group> *_group;
    _Bool _finished;
    NSError *_error;
    FCForYouCatchUpCondition *_condition;
}

@property (retain, nonatomic) FCForYouCatchUpCondition *condition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)cancel;
- (void)notifyWithCompletion:(CDUnknownBlockType)arg1;
- (void)signalWithError:(id)arg1;
- (void)_possiblyFinishWithError:(id)arg1;

@end
