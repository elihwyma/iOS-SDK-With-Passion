/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@interface _CDHashUtilities : NSObject

+ (id)sha1ForString:(id)arg1;
+ (id)sha1ForData:(id)arg1;
+ (id)md5ForData:(id)arg1;
+ (id)md5ForString:(id)arg1;
+ (id)hexStringFromData:(id)arg1;
+ (unsigned long long)FNV1aForData:(id)arg1;
+ (id)md5ForObjectDescription:(id)arg1;
+ (id)md5forDictionary:(id)arg1 error:(id *)arg2;
+ (id)sha256Hash:(id)arg1 withSalt:(id)arg2;
+ (unsigned long long)FNV1aForString:(id)arg1;

@end
