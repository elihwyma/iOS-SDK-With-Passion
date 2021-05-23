/*
 Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface NTNoContentSourceAvailabilityEntry : NSObject

{
    CDUnknownBlockType availabilityChangedNotificationBlock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) Class todayResultsFetchDescriptorClass;
@property (nonatomic, readonly, getter=isAvailable) _Bool available;
@property (copy, nonatomic) CDUnknownBlockType availabilityChangedNotificationBlock;

- (id)init;

@end
