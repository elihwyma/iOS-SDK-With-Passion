/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class EKCalendarVisibilityManager, EKEventStore, NSArray;

@interface PPEventStorageGuardedData : NSObject

{
    EKEventStore *_store;
    NSArray *_calendars;
    EKCalendarVisibilityManager *_calendarVisibilityManager;
}

@end
