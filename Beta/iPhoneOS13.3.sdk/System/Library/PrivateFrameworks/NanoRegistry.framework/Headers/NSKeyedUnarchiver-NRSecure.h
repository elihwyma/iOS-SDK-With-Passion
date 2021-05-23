/*
 Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

#import <Foundation/NSKeyedUnarchiver.h>

@interface NSKeyedUnarchiver (NRSecure)

+ (id)nr_secureUnarchiveObjectOfClasses:(id)arg1 withFile:(id)arg2;
+ (id)nr_secureUnarchiveObjectOfClasses:(id)arg1 withData:(id)arg2;

@end
