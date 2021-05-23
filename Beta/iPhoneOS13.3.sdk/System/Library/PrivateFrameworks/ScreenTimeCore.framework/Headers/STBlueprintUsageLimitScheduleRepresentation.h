/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
 */

#import <Foundation/NSObject.h>

@class NSArray, STBlueprintUsageLimitScheduleSimpleItem;

@interface STBlueprintUsageLimitScheduleRepresentation : NSObject

{
    STBlueprintUsageLimitScheduleSimpleItem *_simpleSchedule;
    NSArray *_customScheduleItems;
}

@property (retain, nonatomic) STBlueprintUsageLimitScheduleSimpleItem *simpleSchedule;
@property (copy, nonatomic) NSArray *customScheduleItems;

@end
