/*
 Image: /System/Library/PrivateFrameworks/CalendarDatabase.framework/CalendarDatabase
 */

#import <NSObject.h>

@class NSMutableSet, NSString;

@interface EKCalendarFilter : NSObject

{
    struct _opaque_pthread_mutex_t _lock;
    NSMutableSet *_calendarUIDs;
    struct CalDatabase *_database;
    NSString *_searchTerm;
    int _entityType;
}

@property (copy, nonatomic) NSString *searchTerm;

+ (void)_addCalendarWithUID:(id)arg1 toSet:(id)arg2 database:(struct CalDatabase *)arg3;
+ (void)_addCalendarUIDsFromPrefs:(id)arg1 toSet:(id)arg2 database:(struct CalDatabase *)arg3;
+ (void)_addCalendarsForStoreWithUID:(id)arg1 toSet:(id)arg2 database:(struct CalDatabase *)arg3;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)validate;
- (id)initWithDatabase:(struct CalDatabase *)arg1;
- (id)initWithDatabase:(struct CalDatabase *)arg1 entityType:(int)arg2 calendarUIDs:(id)arg3;
- (id)_generateUIDSetToFilterAllCalendars;
- (id)_generateUIDSetToShowCalendars:(id)arg1;
- (id)_generateUIDSetToShowCalendarUIDs:(id)arg1;
- (id)_generateUIDSetToFilterCalendars:(id)arg1;
- (id)_UIDSetWithCalendars:(id)arg1;
- (_Bool)_isFilteringAllWhileLocked;
- (_Bool)isShowingAll;
- (id)_addFilterToQuery:(id)arg1 creator:(CDUnknownFunctionPointerType)arg2 userInfo:(void *)arg3;
- (id)_UIDAntiSetWithCalendars:(id)arg1;
- (id)initWithDatabase:(struct CalDatabase *)arg1 entityType:(int)arg2;
- (id)initFilteringAllWithDatabase:(struct CalDatabase *)arg1;
- (id)initWithDatabase:(struct CalDatabase *)arg1 showingCalendars:(id)arg2;
- (id)initWithDatabase:(struct CalDatabase *)arg1 showingCalendarsWithUIDs:(id)arg2;
- (id)initWithDatabase:(struct CalDatabase *)arg1 entityType:(int)arg2 showingCalendarsWithUIDs:(id)arg3;
- (id)initWithDatabase:(struct CalDatabase *)arg1 entityType:(int)arg2 filteringCalendars:(id)arg3;
- (id)initWithDatabase:(struct CalDatabase *)arg1 entityType:(int)arg2 filteringCalendarsWithUIDs:(id)arg3;
- (_Bool)isFilteringAll;
- (id)filteredCalendars;
- (id)visibleCalendarsWithOptions:(int)arg1;
- (int)visibleCalendarCountWithOptions:(int)arg1;
- (_Bool)isCalendarUIDVisible:(id)arg1;
- (void)removeCalendarWithUID:(id)arg1;
- (id)filterQueryForQueryString:(id)arg1 creator:(CDUnknownFunctionPointerType)arg2 userInfo:(void *)arg3;
- (id)filterQueryForKey:(id)arg1 prefix:(id)arg2 whereClause:(id)arg3 creator:(CDUnknownFunctionPointerType)arg4 userInfo:(void *)arg5;
- (id)calendarIDClauseForQueryWithVariableName:(id)arg1;

@end
