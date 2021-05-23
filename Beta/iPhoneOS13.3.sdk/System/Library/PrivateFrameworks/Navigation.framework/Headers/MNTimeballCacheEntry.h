/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class MNPlannedDestination, MNRouteUpdate, NSDate, NSString;

@interface MNTimeballCacheEntry : NSObject

{
    MNRouteUpdate *_routeUpdate;
    MNPlannedDestination *_destination;
    NSDate *_lastUpdate;
    NSDate *_nextUpdate;
}

@property (retain, nonatomic) MNRouteUpdate *routeUpdate;
@property (retain, nonatomic) MNPlannedDestination *destination;
@property (retain, nonatomic) NSDate *lastUpdate;
@property (retain, nonatomic) NSDate *nextUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)jsonDictionary;

@end
