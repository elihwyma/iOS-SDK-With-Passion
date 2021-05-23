/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface CalendarOccurrencesCollection : NSObject

{
    NSArray *_occurrences;
    NSArray *_allDayOccurrences;
    NSArray *_timedOccurrences;
}

@property (nonatomic, readonly) NSArray *occurrences;
@property (nonatomic, readonly) NSArray *allDayOccurrences;
@property (nonatomic, readonly) NSArray *timedOccurrences;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithOccurrences:(id)arg1 timedOccurrences:(id)arg2 allDayOccurrences:(id)arg3;

@end
