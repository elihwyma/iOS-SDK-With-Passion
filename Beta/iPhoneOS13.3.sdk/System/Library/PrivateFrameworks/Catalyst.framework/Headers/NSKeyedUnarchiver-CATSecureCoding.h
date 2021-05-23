/*
 Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

#import <Foundation/NSKeyedUnarchiver.h>

@interface NSKeyedUnarchiver (CATSecureCoding)

+ (id)cat_unarchiveObjectOfClass:(Class)arg1 withData:(id)arg2 error:(id *)arg3;
+ (id)cat_unarchiveObjectOfClasses:(id)arg1 withData:(id)arg2;
+ (id)cat_unarchiveObjectOfClasses:(id)arg1 withData:(id)arg2 error:(id *)arg3;
+ (id)cat_unarchivePropertyListObjectWithData:(id)arg1 error:(id *)arg2;
+ (id)cat_unarchiveObjectOfClass:(Class)arg1 withData:(id)arg2;
+ (id)cat_unarchivePropertyListObjectWithData:(id)arg1;

@end
