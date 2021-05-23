/*
 Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

#import <Foundation/NSObject.h>

@class FCNetworkReachability, NSString;

@interface NTParsecSourceAvailabilityEntry : NSObject

{
    CDUnknownBlockType _availabilityChangedNotificationBlock;
    FCNetworkReachability *_networkReachability;
}

@property (nonatomic, readonly) FCNetworkReachability *networkReachability;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) Class todayResultsFetchDescriptorClass;
@property (nonatomic, readonly, getter=isAvailable) _Bool available;
@property (copy, nonatomic) CDUnknownBlockType availabilityChangedNotificationBlock;

- (id)init;
- (id)initWithNetworkReachability:(id)arg1;

@end
