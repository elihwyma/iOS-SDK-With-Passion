/*
 Image: /System/Library/PrivateFrameworks/SharedWebCredentials.framework/SharedWebCredentials
 */

#import <Foundation/NSKeyedUnarchiver.h>

@interface NSKeyedUnarchiver (SWCSecureCodingWorkaround)

+ (id)swc_unarchivedObjectOfClasses:(id)arg1 fromData:(id)arg2 error:(id *)arg3;
+ (id)swc_unarchivedObjectOfClass:(Class)arg1 fromData:(id)arg2 error:(id *)arg3;

@end
