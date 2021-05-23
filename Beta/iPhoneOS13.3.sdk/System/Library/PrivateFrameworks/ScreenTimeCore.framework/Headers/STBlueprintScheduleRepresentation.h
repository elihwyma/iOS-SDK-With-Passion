/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
 */

#import <Foundation/NSObject.h>

@class NSArray, STBlueprintScheduleSimpleItem;

@interface STBlueprintScheduleRepresentation : NSObject

{
    STBlueprintScheduleSimpleItem *_simpleSchedule;
    NSArray *_customScheduleItems;
}

@property (retain, nonatomic) STBlueprintScheduleSimpleItem *simpleSchedule;
@property (copy, nonatomic) NSArray *customScheduleItems;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
