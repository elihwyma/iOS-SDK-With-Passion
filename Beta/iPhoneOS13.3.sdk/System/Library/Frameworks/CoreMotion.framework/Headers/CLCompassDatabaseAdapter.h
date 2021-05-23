/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@class NSString;

@interface CLCompassDatabaseAdapter

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
- (void)getBiasWithMagneticField:(CDStruct_03942939)arg1 acceleration:(CDStruct_03942939)arg2;
- (void)setBias:(CDStruct_03942939)arg1 withMagneticField:(CDStruct_03942939)arg2 level:(int)arg3 magnitude:(float)arg4 inclination:(float)arg5;
- (void)doAsync:(CDUnknownBlockType)arg1;
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;
- (int)syncgetPendingSetBiasCount;
- (_Bool)syncgetLookupBiasWithMagneticField:(CDStruct_03942939)arg1 acceleration:(CDStruct_03942939)arg2 bias:(CDStruct_03942939 *)arg3 level:(int *)arg4 noResults:(_Bool *)arg5;
- (struct CLCompassDatabase *)adaptee;

@end
