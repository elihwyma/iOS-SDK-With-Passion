/*
 Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

#import <Foundation/NSObject.h>

@interface _PASFileBackedMallocZone : NSObject

+ (_Bool)_allocatorForFileBackedMappingWithHeapSize:(unsigned long long)arg1 context:(CDStruct_e8674a76 *)arg2 error:(id *)arg3;
+ (struct _malloc_zone_t *)mallocZoneWithFixedSize:(unsigned long long)arg1 error:(id *)arg2;

@end
