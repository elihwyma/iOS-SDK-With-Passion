/*
 Image: /System/Library/PrivateFrameworks/CalendarDatabase.framework/CalendarDatabase
 */

#import <NSObject.h>

@class NSMutableDictionary, NSTimeZone;

@interface CalScheduledTaskCache_TimeZoneFetchContext : NSObject

{
    NSTimeZone *_previousTimeZone;
    NSTimeZone *_nextTimeZone;
    NSMutableDictionary *_dict;
}

@property (retain, nonatomic) NSTimeZone *previousTimeZone;
@property (retain, nonatomic) NSTimeZone *nextTimeZone;
@property (retain, nonatomic) NSMutableDictionary *dict;

@end
