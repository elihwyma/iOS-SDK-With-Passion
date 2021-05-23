/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthKit/HKAudiogramSample.h>

@interface HKAudiogramSample (HDCodingSupport)

+ (Class)hd_dataEntityClass;

- (id)codableRepresentationForSync;

@end
