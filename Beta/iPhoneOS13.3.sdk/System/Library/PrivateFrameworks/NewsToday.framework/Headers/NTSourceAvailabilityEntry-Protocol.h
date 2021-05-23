/*
 Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

#import <NewsToday/Swift-Protocol.h>

@protocol NTSourceAvailabilityEntry <Swift>

@property (nonatomic, readonly) Class todayResultsFetchDescriptorClass;
@property (nonatomic, readonly, getter=isAvailable) _Bool available;
@property (copy, nonatomic) CDUnknownBlockType availabilityChangedNotificationBlock;

@end
