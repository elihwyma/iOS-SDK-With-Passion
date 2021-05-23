/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class MNAnnouncementPlan, MNGuidanceEventManager, NSArray;

__attribute__((visibility("hidden")))
@interface MNAnnouncementStrategyDelayCompressDrop : NSObject

{
    MNGuidanceEventManager *_manager;
    NSArray *_events;
    double _distance;
    double _speed;
    MNAnnouncementPlan *_plan;
}

@property (weak, nonatomic) MNGuidanceEventManager *manager;
@property (retain, nonatomic) NSArray *events;
@property (nonatomic) double distance;
@property (nonatomic) double speed;
@property (retain, nonatomic) MNAnnouncementPlan *plan;

- (id)initWithManager:(id)arg1;
- (double)_canDelayEvent:(id)arg1;
- (_Bool)_advanceToResolveConflict:(id)arg1;
- (_Bool)_delayToResolveConflict:(id)arg1;
- (_Bool)_compressToResolveConflict:(id)arg1;
- (void)_dropToResolveConflict:(id)arg1;
- (double)_canAdvanceEvent:(id)arg1;
- (void)planForEvents:(id)arg1 distance:(double)arg2 speed:(double)arg3 previousEvent:(id)arg4 timeSinceLastEvent:(double)arg5;
- (id)nextEvent;

@end
