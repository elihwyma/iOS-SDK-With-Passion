/*
 Image: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
 */

#import <Foundation/NSKeyedArchiver.h>

@interface NSKeyedArchiver (Secure)

+ (_Bool)secureArchiveRootObject:(id)arg1 toFile:(id)arg2 withOptions:(unsigned long long)arg3;
+ (id)secureArchivedDataWithRootObject:(id)arg1;
+ (_Bool)secureArchiveRootObject:(id)arg1 toFile:(id)arg2;

@end
