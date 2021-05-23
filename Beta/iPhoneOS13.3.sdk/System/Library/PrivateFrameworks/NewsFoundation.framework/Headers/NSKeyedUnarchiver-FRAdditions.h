/*
 Image: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
 */

#import <Foundation/NSKeyedUnarchiver.h>

@interface NSKeyedUnarchiver (FRAdditions)

+ (id)nf_securelyUnarchiveObjectOfClass:(Class)arg1 withData:(id)arg2;
+ (id)nf_securelyUnarchiveObjectOfClasses:(id)arg1 withData:(id)arg2;
+ (id)nf_securelyUnarchiveObjectOfClass:(Class)arg1 withFile:(id)arg2;
+ (id)nf_securelyUnarchiveObjectOfClasses:(id)arg1 withFile:(id)arg2;

- (id)nf_securelyUnarchiveObjectOfClass:(Class)arg1;

@end
