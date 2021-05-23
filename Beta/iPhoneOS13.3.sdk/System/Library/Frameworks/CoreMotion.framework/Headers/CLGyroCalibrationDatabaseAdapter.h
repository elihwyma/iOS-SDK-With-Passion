/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@class NSString;

@interface CLGyroCalibrationDatabaseAdapter

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool valid;

+ (_Bool)isSupported;
+ (id)getSilo;
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;

- (id)init;
- (void)beginService;
- (void)endService;
- (void)dumpDatabase:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;
- (_Bool)syncgetWipeDatabase;
- (int)syncgetNumTemperatures;
- (_Bool)syncgetSupportsMiniCalibration;
- (_Bool)syncgetBiasFit:(CDStruct_f329898c *)arg1;
- (void)doAsync:(CDUnknownBlockType)arg1;
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;
- (struct CLGyroCalibrationDatabase *)adaptee;
- (_Bool)syncgetGyroStatsWithBias:(CDStruct_03942939 *)arg1 slope:(CDStruct_03942939 *)arg2 l2Error:(CDStruct_03942939 *)arg3 isDynamic:(_Bool)arg4 deltaBias:(CDStruct_03942939 *)arg5 deltaSlope:(CDStruct_03942939 *)arg6 deltaError:(CDStruct_03942939 *)arg7 isDeltaDynamic:(_Bool)arg8;
- (int)syncgetMaxDynamicTemperature;
- (void)startFactoryGYTT;
- (int)syncgetNonFactoryRoundCount;
- (double)syncgetLastMiniCalibration;
- (_Bool)syncgetInsertWithBias:(const CDStruct_03942939 *)arg1 variance:(const CDStruct_03942939 *)arg2 temperature:(float)arg3 timestamp:(double)arg4;

@end
