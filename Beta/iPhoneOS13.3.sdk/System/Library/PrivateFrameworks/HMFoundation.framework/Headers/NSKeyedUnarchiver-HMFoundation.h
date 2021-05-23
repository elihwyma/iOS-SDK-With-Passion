/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

#import <Foundation/NSKeyedUnarchiver.h>

@interface NSKeyedUnarchiver (HMFoundation)

+ (id)hmf_unarchivedObjectOfClass:(Class)arg1 fromClassName:(id)arg2 fromData:(id)arg3 error:(id *)arg4;
+ (id)deserializeObjectWithData:(id)arg1 allowedClasses:(id)arg2;
+ (id)deserializeObjectWithData:(id)arg1 allowedClass:(Class)arg2 frameworkClasses:(id)arg3;

@end
