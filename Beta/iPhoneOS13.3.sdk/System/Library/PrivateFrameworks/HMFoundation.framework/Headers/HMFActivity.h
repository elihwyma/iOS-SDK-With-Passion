/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@class HMFUnfairLock, NSArray, NSDate, NSMutableSet, NSObject, NSString, NSUUID;

@protocol OS_os_activity, OS_voucher;

@interface HMFActivity

{
    HMFUnfairLock *_lock;
    NSObject<OS_os_activity> *_internal;
    NSObject<OS_voucher> *_voucher;
    NSMutableSet *_threadContexts;
    _Bool _valid;
    NSUUID *_identifier;
    HMFActivity *_parent;
    NSString *_name;
    unsigned long long _options;
    NSArray *_internalAssertions;
    NSDate *_startDate;
}

@property (nonatomic, readonly) NSArray *internalAssertions;
@property (readonly) NSDate *startDate;
@property (copy, readonly) NSUUID *identifier;
@property (weak, readonly) HMFActivity *parent;
@property (copy, readonly) NSString *name;
@property (readonly) unsigned long long assertions;
@property (readonly) unsigned long long options;
@property (readonly, getter=isValid) _Bool valid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, readonly) NSString *shortDescription;
@property (copy, readonly) NSString *privateDescription;
@property (copy, readonly) NSString *propertyDescription;
@property (copy, nonatomic, readonly) NSArray *attributeDescriptions;

+ (void)initialize;
+ (id)bundleIdentifier;
+ (id)currentActivity;
+ (id)shortDescription;
+ (id)logCategory;
+ (void)activityWithName:(id)arg1 parent:(id)arg2 options:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4;
+ (void)activityWithName:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (void)activityWithName:(id)arg1 parent:(id)arg2 block:(CDUnknownBlockType)arg3;
+ (void)activityWithName:(id)arg1 parent:(id)arg2 assertions:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (id)initWithName:(id)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (void)end;
- (void)begin;
- (id)initWithName:(id)arg1 parent:(id)arg2;
- (id)logIdentifier;
- (void)mark;
- (id)initWithName:(id)arg1 parent:(id)arg2 options:(unsigned long long)arg3;
- (void)markWithFormat:(id)arg1;
- (void)markWithReason:(id)arg1;
- (CDUnknownBlockType)blockWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithName:(id)arg1 parent:(id)arg2 assertions:(unsigned long long)arg3;
- (CDUnknownBlockType)blockWithQualityOfService:(long long)arg1 block:(CDUnknownBlockType)arg2;

@end
