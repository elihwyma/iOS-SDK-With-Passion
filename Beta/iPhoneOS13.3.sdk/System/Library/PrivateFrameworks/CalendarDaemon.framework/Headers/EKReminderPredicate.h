/*
 Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

#import <CalendarDaemon/EKPredicate.h>

@class NSArray, NSDate, NSString;

@interface EKReminderPredicate : EKPredicate

{
    _Bool _limitToCompletedOrIncomplete;
    _Bool _completed;
    _Bool _useCompletionDateAsAlternate;
    _Bool _useDueDateAsCompletionDate;
    _Bool _shouldLoadDefaultProperties;
    int _sortOrder;
    NSString *_listTitle;
    NSDate *_dueAfter;
    NSDate *_dueBefore;
    NSString *_searchTerm;
    unsigned long long _maxResults;
    NSArray *_defaultPropertiesToLoad;
}

@property (retain, nonatomic) NSString *listTitle;
@property (nonatomic) _Bool limitToCompletedOrIncomplete;
@property (nonatomic) _Bool completed;
@property (retain, nonatomic) NSDate *dueAfter;
@property (retain, nonatomic) NSDate *dueBefore;
@property (nonatomic) _Bool useCompletionDateAsAlternate;
@property (nonatomic) _Bool useDueDateAsCompletionDate;
@property (retain, nonatomic) NSString *searchTerm;
@property (nonatomic) int sortOrder;
@property (nonatomic) unsigned long long maxResults;
@property (nonatomic) _Bool shouldLoadDefaultProperties;
@property (retain, nonatomic) NSArray *defaultPropertiesToLoad;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)predicateWithCalendars:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCalendars:(id)arg1;
- (id)copyMatchingItemsWithDatabase:(struct CalDatabase *)arg1;

@end
