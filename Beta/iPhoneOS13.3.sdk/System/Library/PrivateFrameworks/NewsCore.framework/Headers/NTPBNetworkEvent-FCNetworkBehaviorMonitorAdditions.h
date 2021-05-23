/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsTransport/NTPBNetworkEvent.h>

@interface NTPBNetworkEvent (FCNetworkBehaviorMonitorAdditions)

@property (nonatomic, readonly) unsigned long long totalDuration;
@property (nonatomic, readonly) unsigned long long endTime;
@property (nonatomic, readonly, getter=isSuccess) _Bool success;

@end
