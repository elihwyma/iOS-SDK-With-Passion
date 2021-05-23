/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class MNGuidanceEventManager, NSArray, NSMutableArray;

@interface MNAnnouncementPlan : NSObject

{
    NSMutableArray *_plannedEvents;
    MNGuidanceEventManager *_manager;
    NSArray *_events;
    double _distance;
    double _speed;
}

@property (weak, nonatomic) MNGuidanceEventManager *manager;
@property (retain, nonatomic) NSArray *events;
@property (retain, nonatomic) NSMutableArray *plannedEvents;
@property (nonatomic) double distance;
@property (nonatomic) double speed;

+ (double)desiredTimeGapBetweenEvent:(id)arg1 andEvent:(id)arg2;

- (id)description;
- (void)sortEvents;
- (id)initWithEvents:(id)arg1 distance:(double)arg2 speed:(double)arg3 manager:(id)arg4;
- (id)nextConflict;

@end
