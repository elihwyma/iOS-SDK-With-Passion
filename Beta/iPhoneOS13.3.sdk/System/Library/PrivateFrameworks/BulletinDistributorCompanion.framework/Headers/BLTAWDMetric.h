/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSObject.h>

@class AWDMetricContainer, PBCodable;

@interface BLTAWDMetric : NSObject

{
    AWDMetricContainer *_metricContainer;
    PBCodable *_metric;
}

@property (retain, nonatomic, readonly) PBCodable *metric;

+ (id)metricForDelayWithID:(unsigned int)arg1 class:(Class)arg2 sectionID:(id)arg3 publisherMatchID:(id)arg4 companionPublicationDate:(id)arg5 isGizmoDate:(_Bool)arg6 startTime:(id)arg7 now:(id)arg8;
+ (id)metricForDelayWithID:(unsigned int)arg1 class:(Class)arg2;
+ (id)metricForDelayWithID:(unsigned int)arg1 class:(Class)arg2 sectionID:(id)arg3 publisherMatchID:(id)arg4 companionPublicationDate:(id)arg5 startTime:(id)arg6 now:(id)arg7 connectionStatus:(unsigned long long)arg8 hasPublicationDate:(_Bool)arg9;
+ (id)metricForDelayWithID:(unsigned int)arg1 class:(Class)arg2 sectionID:(id)arg3 publisherMatchID:(id)arg4 companionPublicationDate:(id)arg5 startTime:(id)arg6 now:(id)arg7;
+ (id)metricForDelayWithID:(unsigned int)arg1 class:(Class)arg2 sectionID:(id)arg3 publisherMatchID:(id)arg4 companionPublicationDate:(id)arg5 startTime:(id)arg6 now:(id)arg7 connectionStatus:(unsigned long long)arg8;
+ (void)submitMetricForDelayWithID:(unsigned int)arg1 class:(Class)arg2 startTime:(id)arg3;
+ (void)submitMetricForDelayWithID:(unsigned int)arg1 class:(Class)arg2 sectionID:(id)arg3 publisherMatchID:(id)arg4 companionPublicationDate:(id)arg5 startTime:(id)arg6;
+ (void)submitMetricForDelayWithID:(unsigned int)arg1 class:(Class)arg2 sectionID:(id)arg3 publisherMatchID:(id)arg4 companionPublicationDate:(id)arg5 isGizmoDate:(_Bool)arg6 startTime:(id)arg7;
+ (void)submitMetricForDelayWithID:(unsigned int)arg1 class:(Class)arg2 sectionID:(id)arg3 publisherMatchID:(id)arg4 companionPublicationDate:(id)arg5 startTime:(id)arg6 connectionStatus:(unsigned long long)arg7;
+ (void)submitMetricForDelayWithID:(unsigned int)arg1 class:(Class)arg2 sectionID:(id)arg3 publisherMatchID:(id)arg4 companionPublicationDate:(id)arg5 startTime:(id)arg6 connectionStatus:(unsigned long long)arg7 hasPublicationDate:(_Bool)arg8;
+ (void)submitMetricForDelayAckFromSecondaryDeviceWithSectionID:(id)arg1 publisherMatchID:(id)arg2 companionPublicationDate:(id)arg3 startTime:(id)arg4 connectionStatus:(unsigned long long)arg5 origConnectionStatus:(unsigned long long)arg6 timedOut:(_Bool)arg7;
+ (void)submitMetricForDelayToSyncWithStartTime:(id)arg1 initial:(_Bool)arg2;

- (void)_submit;
- (id)initWithMetricID:(unsigned int)arg1 class:(Class)arg2;
- (void)_setDelayFrom:(id)arg1 to:(id)arg2;

@end
