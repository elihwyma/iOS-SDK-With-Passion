/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSDictionary.h>

@interface NSDictionary (HDCodingSupport)

+ (id)hd_dictionaryFromXPCObject:(id)arg1;
+ (id)hk_dictionaryWithCodableMetadata:(id)arg1;
+ (id)_hd_queryParamsForCompatibilityVersion:(long long)arg1;

- (id)hk_codableMetadata;
- (_Bool)hd_validateMetadataKeysAndValuesWithClient:(id)arg1 error:(id *)arg2;

@end
