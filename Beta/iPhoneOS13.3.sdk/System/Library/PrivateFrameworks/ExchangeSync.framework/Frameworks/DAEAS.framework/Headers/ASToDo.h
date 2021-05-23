/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASChangedCollectionLeaf.h>

@class ASToDoRecurrence, NSArray, NSDate, NSNumber, NSString, NSTimeZone;

@interface ASToDo : ASChangedCollectionLeaf

{
    void *_calTask;
    NSString *_body;
    NSNumber *_bodyTruncated;
    NSArray *_categories;
    NSNumber *_complete;
    NSDate *_dateCompleted;
    NSDate *_dueDate;
    NSDate *_utcDueDate;
    NSNumber *_importance;
    NSNumber *_reminderIsSet;
    NSDate *_reminderDateTime;
    NSNumber *_sensitivity;
    NSDate *_startTime;
    NSDate *_utcStartTime;
    NSString *_subject;
    ASToDoRecurrence *_recurrence;
}

@property (nonatomic) void *calTask;
@property (retain, nonatomic) NSString *body;
@property (retain, nonatomic) NSNumber *bodyTruncated;
@property (retain, nonatomic) NSArray *categories;
@property (retain, nonatomic) NSNumber *complete;
@property (retain, nonatomic) NSDate *dateCompleted;
@property (retain, nonatomic) NSDate *dueDate;
@property (retain, nonatomic, setter=setUTCDueDate:) NSDate *utcDueDate;
@property (retain, nonatomic) NSNumber *importance;
@property (retain, nonatomic) NSNumber *reminderIsSet;
@property (retain, nonatomic) NSDate *reminderDateTime;
@property (retain, nonatomic) NSNumber *sensitivity;
@property (retain, nonatomic) NSDate *startTime;
@property (retain, nonatomic, setter=setUTCStartTime:) NSDate *utcStartTime;
@property (retain, nonatomic) NSString *subject;
@property (retain, nonatomic) ASToDoRecurrence *recurrence;
@property (nonatomic, readonly) NSTimeZone *dueDateTimeZone;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)acceptsTopLevelLeaves;
+ (_Bool)parsingLeafNode;
+ (_Bool)parsingWithSubItems;
+ (_Bool)frontingBasicTypes;
+ (_Bool)notifyOfUnknownTokens;
+ (id)asParseRules;
+ (id)toDoWithCalTask:(void *)arg1 serverID:(id)arg2 account:(id)arg3;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)dataclass;
- (_Bool)loadLocalItemWithAccount:(id)arg1;
- (void)setLocalItem:(void *)arg1;
- (_Bool)saveWithLocalObject:(void *)arg1 toContainer:(void *)arg2 shouldMergeProperties:(_Bool)arg3 outMergeDidChooseLocalProperties:(_Bool *)arg4 account:(id)arg5;
- (_Bool)saveServerIDToExistingItem;
- (_Bool)deleteFromContainer:(void *)arg1;
- (void)loadClientIDs;
- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6;
- (void)_loadAttributesFromCalTask:(void *)arg1 forAccount:(id)arg2;
- (id)initWithCalTask:(void *)arg1 serverID:(id)arg2 account:(id)arg3;
- (void)postProcessApplicationData;
- (void)appendActiveSyncDataForTask:(id)arg1 toWBXMLData:(id)arg2;
- (_Bool)loadCalRecordForAccount:(id)arg1;
- (_Bool)deleteFromCalendar;
- (id)bestGuessTimeZoneWithLocalDate:(id)arg1 utcDate:(id)arg2;
- (_Bool)saveToCalendarWithExistingRecord:(void *)arg1 intoCalendar:(void *)arg2 shouldMergeProperties:(_Bool)arg3 outMergeDidChooseLocalProperties:(_Bool *)arg4 account:(id)arg5;
- (_Bool)saveServerIDToCalendar;

@end
