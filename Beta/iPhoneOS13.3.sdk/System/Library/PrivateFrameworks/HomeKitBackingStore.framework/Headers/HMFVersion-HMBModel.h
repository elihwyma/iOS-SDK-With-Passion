/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <HMFoundation/HMFVersion.h>

@interface HMFVersion (HMBModel)

+ (id)hmbVersionFromData:(id)arg1;
+ (id)versionWithHMDVersion:(long long)arg1;

- (_Bool)isLessThan:(id)arg1;
- (_Bool)isGreaterThan:(id)arg1;
- (_Bool)isGreaterThanOrEqualTo:(id)arg1;
- (_Bool)isLessThanOrEqualTo:(id)arg1;
- (id)hmbData;

@end
