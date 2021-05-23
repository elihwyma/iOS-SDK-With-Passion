/*
 Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

#import <NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface _DPSubmissionRateLimiter : NSObject

{
    NSObject<OS_dispatch_queue> *_limiterQueue;
    NSMutableDictionary *_limitDictionary;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *limiterQueue;
@property (retain, nonatomic) NSMutableDictionary *limitDictionary;

+ (id)sharedInstance;
+ (id)rateLimitsFromBudgetProperties;
+ (id)budgetNameForKey:(id)arg1;

- (id)init;
- (id)initWithLimits:(id)arg1;
- (unsigned long long)debit:(unsigned long long)arg1 forKey:(id)arg2;
- (void)credit:(id)arg1 amount:(unsigned long long)arg2;

@end
