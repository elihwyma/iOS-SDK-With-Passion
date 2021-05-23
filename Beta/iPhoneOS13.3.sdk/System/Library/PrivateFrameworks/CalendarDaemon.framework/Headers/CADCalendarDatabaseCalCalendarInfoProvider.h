/*
 Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

#import <Foundation/NSObject.h>

@protocol CADDatabaseProvider;

__attribute__((visibility("hidden")))
@interface CADCalendarDatabaseCalCalendarInfoProvider : NSObject

{
    id <CADDatabaseProvider> _databaseProvider;
}

@property (weak, nonatomic, readonly) id <CADDatabaseProvider> databaseProvider;

- (id)initWithDatabaseProvider:(id)arg1;
- (id)calendarRowIDsInStoreWithRowID:(int)arg1;
- (int)suggestionsCalendarRowID;
- (int)naturalLanguageSuggestionsCalendarRowID;

@end
