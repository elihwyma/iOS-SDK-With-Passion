/*
 Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

#import <Foundation/NSKeyedArchiver.h>

@interface NSKeyedArchiver (NRSecure)

+ (id)nr_secureArchivedDataWithRootObject:(id)arg1;
+ (_Bool)nr_secureArchiveRootObject:(id)arg1 toFile:(id)arg2;
+ (_Bool)nr_secureArchiveRootObject:(id)arg1 toFile:(id)arg2 withOptions:(unsigned long long)arg3;

@end
