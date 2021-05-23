/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSKeyedUnarchiver.h>

@interface NSKeyedUnarchiver (HealthKit)

+ (_Bool)_hk_performUnarchivingWithData:(id)arg1 error:(id *)arg2 handler:(CDUnknownBlockType)arg3;
+ (id)hk_unarchivedObjectOfClass:(Class)arg1 forKey:(id)arg2 data:(id)arg3 error:(id *)arg4;
+ (id)hk_unarchivedObjectOfClasses:(id)arg1 forKey:(id)arg2 data:(id)arg3 error:(id *)arg4;

@end
