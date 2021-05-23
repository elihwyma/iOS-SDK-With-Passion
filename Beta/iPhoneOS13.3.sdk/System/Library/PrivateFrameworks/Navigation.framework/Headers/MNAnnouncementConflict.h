/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class MNAnnouncementPlanEvent;

@interface MNAnnouncementConflict : NSObject

{
    _Bool _announcementsAreSimilar;
    MNAnnouncementPlanEvent *_firstEvent;
    MNAnnouncementPlanEvent *_secondEvent;
    double _timeGap;
    double _desiredTimeGap;
}

@property (retain, nonatomic) MNAnnouncementPlanEvent *firstEvent;
@property (retain, nonatomic) MNAnnouncementPlanEvent *secondEvent;
@property (nonatomic) double timeGap;
@property (nonatomic) double desiredTimeGap;
@property (nonatomic) _Bool announcementsAreSimilar;

- (id)description;

@end
