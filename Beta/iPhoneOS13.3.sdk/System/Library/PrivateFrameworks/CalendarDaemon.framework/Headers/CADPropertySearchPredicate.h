/*
 Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

#import <CalendarDaemon/CADPredicate.h>

@class CADObjectID, NSArray, NSString;

@interface CADPropertySearchPredicate : CADPredicate

{
    int _entityType;
    NSArray *_filters;
    NSArray *_calendarRowIDs;
    CADObjectID *_sourceID;
}

@property (nonatomic, readonly) int entityType;
@property (nonatomic, readonly) NSArray *filters;
@property (nonatomic, readonly) NSArray *calendarRowIDs;
@property (nonatomic, readonly) CADObjectID *sourceID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)predicateFormat;
- (_Bool)validate;
- (id)defaultPropertiesToLoad;
- (_Bool)shouldLoadDefaultProperties;
- (id)initWithEntityType:(int)arg1 filters:(id)arg2 calendar:(id)arg3;
- (id)initWithEntityType:(int)arg1 filters:(id)arg2 source:(id)arg3;
- (id)initWithEntityType:(int)arg1 filters:(id)arg2 calendars:(id)arg3;
- (id)copyMatchingItemsWithDatabase:(struct CalDatabase *)arg1;
- (id)initWithEntityType:(int)arg1 filters:(id)arg2 calendars:(id)arg3 source:(id)arg4;
- (id)extendWhereClauseWithEntityTypeLimitation:(id)arg1 withValues:(id)arg2 andTypes:(id)arg3;
- (id)extendWhereClauseWithCalendarOrSourceLimitation:(id)arg1 withValues:(id)arg2 andTypes:(id)arg3;
- (id)buildWhereClauseWithValues:(id)arg1 andTypes:(id)arg2;

@end
