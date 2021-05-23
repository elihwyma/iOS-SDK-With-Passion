/*
 Image: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/DuetActivityScheduler
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _DASBudget : NSObject

{
    unsigned char _allocationType;
    struct os_unfair_lock_s _lock;
    NSString *_name;
    double _capacity;
    double _balance;
    CDUnknownBlockType _callback;
    double _maxBudgetValue;
    double _minBudgetValue;
}

@property (copy, nonatomic) CDUnknownBlockType callback;
@property (nonatomic) double maxBudgetValue;
@property (nonatomic) double minBudgetValue;
@property (nonatomic) struct os_unfair_lock_s lock;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) double capacity;
@property (nonatomic, readonly) unsigned char allocationType;
@property (nonatomic, readonly) double balance;

+ (_Bool)supportsSecureCoding;
+ (id)budgetWithName:(id)arg1 capacity:(double)arg2 balance:(double)arg3 allocationType:(unsigned char)arg4;
+ (id)budgetWithName:(id)arg1 capacity:(double)arg2 allocationType:(unsigned char)arg3;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setCapacity:(double)arg1;
- (void)setBalance:(double)arg1;
- (id)initWithName:(id)arg1 capacity:(double)arg2 balance:(double)arg3 allocationType:(unsigned char)arg4;
- (_Bool)unlockedDecrementBy:(double)arg1;
- (void)decrementBy:(double)arg1;
- (void)registerSignificantBudgetChangeCallback:(CDUnknownBlockType)arg1;
- (_Bool)isPositive;
- (void)incrementBy:(double)arg1;

@end
