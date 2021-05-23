/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFEventBuilder.h>

@class CLCircularRegion, NSString;

@interface HFLocationRegionEventBuilder : HFEventBuilder

{
    CLCircularRegion *_region;
}

@property (copy, nonatomic) CLCircularRegion *region;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long eventType;

- (id)initWithEvent:(id)arg1;
- (id)buildNewEventFromCurrentState;
- (_Bool)isRegionAtHome:(id)arg1;

@end
