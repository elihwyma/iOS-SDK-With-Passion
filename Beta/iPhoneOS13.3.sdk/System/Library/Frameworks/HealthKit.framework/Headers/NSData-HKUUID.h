/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSData.h>

@class NSString;

@interface NSData (HKUUID)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)hk_dataWithSHA256Fingerprint:(id)arg1 error:(out id *)arg2;
+ (id)hk_nilDataMD5;
+ (id)hk_randomDataOfLength:(long long)arg1;

- (void)hk_enumerateUUIDBytesUsingBlock:(CDUnknownBlockType)arg1;
- (void)hk_enumerateUUIDsUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)hk_countOfUUIDs;
- (_Bool)hk_enumerateUUIDsWithError:(id *)arg1 block:(CDUnknownBlockType)arg2;
- (id)hk_dataForAllUUIDs;
- (id)hk_MD5;

@end
