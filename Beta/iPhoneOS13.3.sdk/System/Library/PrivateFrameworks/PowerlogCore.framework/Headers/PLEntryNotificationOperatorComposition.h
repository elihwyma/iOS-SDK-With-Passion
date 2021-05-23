/*
 Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLEntryNotificationOperatorComposition

+ (id)canSleepEntryNotificationWithOperator:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (id)wakeEntryNotificationWithOperator:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (id)significantBatteryChangeNotificationWithOperator:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (id)significantBatteryChangeNotificationWithOperator:(id)arg1 withMaxIntervalInSecs:(double)arg2 withBlock:(CDUnknownBlockType)arg3;
+ (id)displayOffNotificationWithOperator:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (id)displayOnNotificationWithOperator:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (id)sleepEntryNotificationWithOperator:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (id)requestEntryForEntryKey:(id)arg1 forOperator:(id)arg2 withTimeout:(double)arg3 error:(id *)arg4;
+ (id)wakeEntryNotificationWithWorkQueue:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (id)getSBCMaxTimeInterval;
+ (id)getSBCMinTimeInterval;
+ (id)canSleepEntryNotificationWithWorkQueue:(id)arg1 withBlock:(CDUnknownBlockType)arg2;

- (void)requestEntry;
- (id)initWithOperator:(id)arg1 forEntryKey:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (id)initWithOperator:(id)arg1 forEntryKey:(id)arg2 withFilter:(id)arg3 withBlock:(CDUnknownBlockType)arg4;
- (id)initWithOperator:(id)arg1 forEntryKey:(id)arg2 forUpdateOrInsert:(short)arg3 withBlock:(CDUnknownBlockType)arg4;
- (id)initWithWorkQueue:(id)arg1 forEntryKey:(id)arg2 forUpdateOrInsert:(short)arg3 withFilter:(id)arg4 withBlock:(CDUnknownBlockType)arg5;
- (id)initNotificationTimerWithWorkQueue:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)initNotificationTimerWithWorkQueue:(id)arg1 withMaxInterval:(double)arg2 withBlock:(CDUnknownBlockType)arg3;
- (id)initWithWorkQueue:(id)arg1 forEntryKey:(id)arg2 forUpdateOrInsert:(short)arg3 withBlock:(CDUnknownBlockType)arg4;
- (id)initWithOperator:(id)arg1 forEntryKey:(id)arg2 forUpdateOrInsert:(short)arg3 withFilter:(id)arg4 withBlock:(CDUnknownBlockType)arg5;
- (id)initWithWorkQueue:(id)arg1 forEntryKey:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (id)initWithWorkQueue:(id)arg1 forEntryKey:(id)arg2 withFilter:(id)arg3 withBlock:(CDUnknownBlockType)arg4;

@end
