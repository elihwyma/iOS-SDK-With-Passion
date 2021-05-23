/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthKit/HKElectrocardiogram.h>

@interface HKElectrocardiogram (HDCodingSupport)

+ (Class)hd_dataEntityClass;

- (id)codableRepresentationForSync;

@end
