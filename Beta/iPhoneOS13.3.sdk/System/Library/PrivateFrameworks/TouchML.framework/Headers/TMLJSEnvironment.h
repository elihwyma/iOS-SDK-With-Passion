/*
 Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
 */

#import <NSObject.h>

@interface TMLJSEnvironment : NSObject

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)currentContext;
+ (void)initializeJSContext:(id)arg1;
+ (id)convertJsValue:(id)arg1 toType:(unsigned long long)arg2;
+ (id)sharedVM;
+ (void)runInContext:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (id)normalizeValue:(id)arg1 toType:(unsigned long long)arg2;
+ (id)convertTmlValue:(id)arg1;
+ (void)applicationDidReceiveMemoryWarningNotification:(id)arg1;
+ (void)forceGC;
+ (id)protoJSContext;
+ (id)defaultModules;
+ (id)validCurrentContext;
+ (void)requireModule:(id)arg1 forJSContext:(id)arg2;
+ (id)createJSContextWithRuntimeContext:(id)arg1;
+ (void)addGCCallback:(CDUnknownBlockType)arg1;
+ (void)addToDefaultModules:(id)arg1;

@end
