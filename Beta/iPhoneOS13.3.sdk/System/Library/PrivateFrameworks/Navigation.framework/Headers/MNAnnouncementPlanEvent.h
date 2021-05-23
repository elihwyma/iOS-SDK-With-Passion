/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class GEOComposedGuidanceEvent, MNGuidanceEventManager, NSMutableArray;

@interface MNAnnouncementPlanEvent : NSObject

{
    _Bool _includeInPlan;
    GEOComposedGuidanceEvent *_event;
    unsigned long long _variantIndex;
    double _triggerDistance;
    MNGuidanceEventManager *_manager;
    double _distance;
    double _speed;
    NSMutableArray *_announcementDurations;
}

@property (weak, nonatomic) MNGuidanceEventManager *manager;
@property (retain, nonatomic) GEOComposedGuidanceEvent *event;
@property (nonatomic) double distance;
@property (nonatomic) double speed;
@property (retain, nonatomic) NSMutableArray *announcementDurations;
@property (nonatomic) _Bool includeInPlan;
@property (nonatomic) unsigned long long variantIndex;
@property (nonatomic) double triggerDistance;
@property (nonatomic, readonly) double completionDistance;

- (id)description;
- (id)initWithEvent:(id)arg1 distance:(double)arg2 speed:(double)arg3 manager:(id)arg4;

@end
