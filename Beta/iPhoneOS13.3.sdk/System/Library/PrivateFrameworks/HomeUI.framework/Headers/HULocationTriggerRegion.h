/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class CLCircularRegion, HMHome, NSString;

@interface HULocationTriggerRegion : NSObject

{
    unsigned long long _regionType;
    unsigned long long _eventType;
    HMHome *_home;
    CLCircularRegion *_circularRegion;
}

@property (nonatomic, readonly) unsigned long long regionType;
@property (nonatomic, readonly) struct CLLocationCoordinate2D coordinate;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) unsigned long long eventType;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) CLCircularRegion *circularRegion;
@property (nonatomic, readonly) CLCircularRegion *defaultCircularRegionForCoordinate;

+ (id)homeRegionWithHome:(id)arg1 eventType:(unsigned long long)arg2;
+ (id)customRegionWithCircularRegion:(id)arg1;

- (id)initWithRegionType:(unsigned long long)arg1 home:(id)arg2 circularRegion:(id)arg3 eventType:(unsigned long long)arg4;

@end
