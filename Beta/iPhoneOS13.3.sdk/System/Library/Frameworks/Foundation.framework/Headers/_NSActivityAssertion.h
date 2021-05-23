/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class BKSProcessAssertion, NSString;

@protocol NSObject, OS_os_transaction, OS_voucher;

__attribute__((visibility("hidden")))
@interface _NSActivityAssertion : NSObject

{
    unsigned long long _options;
    NSString *_reason;
    NSObject<OS_os_transaction> *_transaction;
    unsigned int _systemSleepAssertionID;
    NSObject<OS_voucher> *_voucher;
    NSObject<OS_voucher> *_previousVoucher;
    id <NSObject> _xpcBoost;
    BKSProcessAssertion *_processAssertion;
    CDUnknownBlockType _expirationHandler;
    struct os_unfair_lock_s _lock;
    _Atomic _Bool _ended;
    unsigned char _adoptPreviousVoucher;
}

+ (void)_performActivityWithOptions:(unsigned long long)arg1 reason:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
+ (void)_performExpiringActivityWithReason:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (id)_expiringAssertionManagementQueue;
+ (id)_expiringActivities;
+ (id)_expirationHandlerExecutionQueue;
+ (void)_expireAllActivies;
+ (id)_expiringTaskExecutionQueue;
+ (void)_dumpExpiringActivitives;

- (void)dealloc;
- (id)debugDescription;
- (void)_reactivate;
- (id)_initWithActivityOptions:(unsigned long long)arg1 reason:(id)arg2 expirationHandler:(CDUnknownBlockType)arg3;
- (void)_end;
- (void)_fireExpirationHandler;

@end
