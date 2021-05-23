/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@interface HDQuantitySampleValueEnumerator : NSObject

+ (_Bool)orderedQuantityValuesBySeriesForPredicate:(id)arg1 transaction:(id)arg2 options:(long long)arg3 error:(id *)arg4 handler:(CDUnknownBlockType)arg5;
+ (id)_queryForEnumerationWithPredicate:(id)arg1 transaction:(id)arg2 options:(long long)arg3;
+ (id)_propertiesForEnumeration;
+ (_Bool)orderedQuantityValuesForPredicate:(id)arg1 transaction:(id)arg2 options:(long long)arg3 error:(id *)arg4 handler:(CDUnknownBlockType)arg5;
+ (long long)_enumerateWithEnumerator:(id)arg1 endTime:(double)arg2 error:(id *)arg3 handler:(CDUnknownBlockType)arg4;
+ (_Bool)orderedQuantityValuesBySeriesForPredicate:(id)arg1 profile:(id)arg2 options:(long long)arg3 error:(id *)arg4 handler:(CDUnknownBlockType)arg5;
+ (_Bool)orderedQuantityValuesForPredicate:(id)arg1 profile:(id)arg2 options:(long long)arg3 error:(id *)arg4 handler:(CDUnknownBlockType)arg5;

@end
