/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASEvent.h>

@class NSDate, NSMutableDictionary, NSNumber;

@interface ASEventException : ASEvent

{
    ASEvent *_originalEvent;
    NSNumber *_isDeleted;
    NSDate *_exceptionStartTime;
    NSMutableDictionary *_placeHolder;
}

@property (retain, nonatomic) NSMutableDictionary *placeHolder;
@property (weak, nonatomic) ASEvent *originalEvent;
@property (retain, nonatomic) NSNumber *isDeleted;
@property (retain, nonatomic) NSDate *exceptionStartTime;

+ (_Bool)supportsSecureCoding;
+ (_Bool)acceptsTopLevelLeaves;
+ (_Bool)parsingLeafNode;
+ (_Bool)parsingWithSubItems;
+ (_Bool)frontingBasicTypes;
+ (_Bool)notifyOfUnknownTokens;
+ (id)asParseRules;
+ (id)eventExceptionWithCalEvent:(void *)arg1 originalEvent:(id)arg2 account:(id)arg3;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)loadClientIDs;
- (void)applyPlaceHolder;
- (void)clearPlaceHolder;
- (void)setObject:(id)arg1 forDCCPT:(int)arg2;
- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6;
- (id)exceptionDate;
- (void)setExceptionDate:(id)arg1;
- (void)postProcessApplicationData;
- (void)appendActiveSyncDataForTask:(id)arg1 toWBXMLData:(id)arg2;
- (_Bool)deleteFromCalendar;
- (id)uidGeneratedIfNecessaryWithLocalEvent:(void *)arg1;
- (id)initWithCalEvent:(void *)arg1 originalEvent:(id)arg2 account:(id)arg3;
- (id)initWithExceptionStartTime:(id)arg1;
- (id)serverIdForCalFrameworkWithParentEvent:(id)arg1;
- (void)saveToCalendarWithParentASEvent:(id)arg1 existingRecord:(void *)arg2 intoCalendar:(void *)arg3 shouldMergeProperties:(_Bool)arg4 outMergeDidChooseLocalProperties:(_Bool *)arg5 account:(id)arg6;
- (void)takeValuesFromParentForAccount:(id)arg1;
- (_Bool)verifyExternalIds;
- (_Bool)hasOccurrenceInTheFuture;
- (_Bool)fillOutMissingExternalIds;
- (id)serverIdForCalFrameworkWithParentServerId:(id)arg1;
- (id)_transformedExceptionStartDateForCalFramework:(id)arg1;
- (id)_transformedExceptionStartDateForActiveSync:(id)arg1 isFloating:(_Bool)arg2;
- (void)_loadAttributesFromCalEvent:(void *)arg1 withKnownExceptionDate:(id)arg2 forAccount:(id)arg3;

@end
