/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <Foundation/NSObject.h>

@interface CalendarModelSceneState : NSObject

{
    _Bool _showDayAsList;
    _Bool _showMonthAsDivided;
    int _dayViewFirstVisibleSecond;
    double _dayViewHourScale;
    double _weekViewHourScale;
    long long _weekViewFirstVisibleSecond;
}

@property (nonatomic) _Bool showDayAsList;
@property (nonatomic) _Bool showMonthAsDivided;
@property (nonatomic) double dayViewHourScale;
@property (nonatomic) double weekViewHourScale;
@property (nonatomic) int dayViewFirstVisibleSecond;
@property (nonatomic) long long weekViewFirstVisibleSecond;

- (id)init;

@end
