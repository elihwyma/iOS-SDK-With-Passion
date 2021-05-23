/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
 */

#import <Foundation/NSObject.h>

@class NSDateComponents;

@interface STBlueprintScheduleCustomDayItem : NSObject

{
    NSDateComponents *_startTime;
    NSDateComponents *_endTime;
    unsigned long long _day;
}

@property (retain, nonatomic) NSDateComponents *startTime;
@property (retain, nonatomic) NSDateComponents *endTime;
@property (nonatomic) unsigned long long day;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
