/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
 */

#import <Foundation/NSObject.h>

@class NSDateComponents;

@interface STBlueprintScheduleSimpleItem : NSObject

{
    NSDateComponents *_startTime;
    NSDateComponents *_endTime;
}

@property (retain, nonatomic) NSDateComponents *startTime;
@property (retain, nonatomic) NSDateComponents *endTime;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
