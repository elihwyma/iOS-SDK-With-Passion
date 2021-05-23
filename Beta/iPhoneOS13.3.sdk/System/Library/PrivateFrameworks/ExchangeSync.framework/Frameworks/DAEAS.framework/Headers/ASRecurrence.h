/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASItem.h>

@class ASEvent, NSDate, NSNumber;

@interface ASRecurrence : ASItem

{
    NSNumber *_type;
    NSNumber *_interval;
    NSNumber *_dayOfWeek;
    NSNumber *_dayOfMonth;
    NSNumber *_weekOfMonth;
    NSNumber *_monthOfYear;
    NSDate *_until;
    NSNumber *_occurrences;
    NSNumber *_firstDayOfWeek;
    NSNumber *_calendarType;
    ASEvent *_parentEvent;
}

@property (retain, nonatomic) NSNumber *type;
@property (retain, nonatomic) NSNumber *interval;
@property (retain, nonatomic) NSNumber *dayOfWeek;
@property (retain, nonatomic) NSNumber *dayOfMonth;
@property (retain, nonatomic) NSNumber *weekOfMonth;
@property (retain, nonatomic) NSNumber *monthOfYear;
@property (retain, nonatomic) NSDate *until;
@property (retain, nonatomic) NSNumber *occurrences;
@property (retain, nonatomic) NSNumber *firstDayOfWeek;
@property (retain, nonatomic) NSNumber *calendarType;
@property (weak, nonatomic) ASEvent *parentEvent;

+ (_Bool)supportsSecureCoding;
+ (_Bool)acceptsTopLevelLeaves;
+ (_Bool)parsingLeafNode;
+ (_Bool)parsingWithSubItems;
+ (_Bool)frontingBasicTypes;
+ (_Bool)notifyOfUnknownTokens;
+ (id)asParseRules;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6;
- (void)appendActiveSyncDataForTask:(id)arg1 toWBXMLData:(id)arg2;
- (_Bool)_loadAttributesFromCalRecurrence:(void *)arg1 parentStartDate:(id)arg2 parentItem:(id)arg3 useFloatingTimeForAllDayEvents:(_Bool)arg4;
- (void)setUntilString:(id)arg1;
- (_Bool)_requiresParentEvent;
- (id)_untilDateForCalFrameworkWithParentStartDate:(id)arg1;
- (id)_transformedUntilDateForActiveSync:(id)arg1;
- (id)initWithCalRecurrence:(void *)arg1 parentEvent:(id)arg2 useFloatingTimeForAllDayEvents:(_Bool)arg3;
- (void)saveToCalendarWithParentASEvent:(id)arg1 existingRecord:(void *)arg2 shouldMergeProperties:(_Bool)arg3 outMergeDidChooseLocalProperties:(_Bool *)arg4 useFloatingTimeForAllDayEvents:(_Bool)arg5;
- (void *)_newRecurrenceWithParentStartDate:(id)arg1 useFloatingTimeForAllDayEvents:(_Bool)arg2;

@end
