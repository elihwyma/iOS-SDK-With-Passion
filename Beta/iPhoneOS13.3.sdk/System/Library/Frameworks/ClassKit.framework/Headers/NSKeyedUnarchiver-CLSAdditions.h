/*
 Image: /System/Library/Frameworks/ClassKit.framework/ClassKit
 */

#import <Foundation/NSKeyedUnarchiver.h>

@interface NSKeyedUnarchiver (CLSAdditions)

+ (id)cls_secureUnarchiveObjectOfClasses:(id)arg1 withData:(id)arg2;
+ (id)cls_secureUnarchiveObjectOfClass:(Class)arg1 withData:(id)arg2;

@end
