/*
 Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

#import <CalendarDaemon/EKPredicate.h>

@class NSString;

@interface CADNaturalLanguageSuggestedEventsSearchPredicate : EKPredicate

{
    NSString *_searchString;
    _Bool _allNLEvents;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)predicateFormat;
- (id)initWithSearchString:(id)arg1;
- (id)defaultPropertiesToLoad;
- (_Bool)shouldLoadDefaultProperties;
- (id)copyMatchingItemsWithDatabase:(struct CalDatabase *)arg1;
- (id)initWithSearchString:(id)arg1 allNLEvents:(_Bool)arg2;

@end
