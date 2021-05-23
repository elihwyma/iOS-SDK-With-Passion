/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASEvent.h>

@class ASEmailItem, NSArray, NSDate, NSMutableDictionary, NSNumber, NSString;

@interface ASMeetingRequest : ASEvent

{
    int _meetingClassType;
    int _meetingMessageType;
    NSNumber *_instanceType;
    NSDate *_dateReceived;
    NSDate *_recurrenceId;
    NSString *_cachedParentFolderId;
    NSString *_cachedParentServerId;
    NSString *_sender;
    NSArray *_forwardees;
    NSMutableDictionary *_placeHolder;
    ASEmailItem *_parentEmailItem;
}

@property (retain, nonatomic) NSMutableDictionary *placeHolder;
@property (weak, nonatomic) ASEmailItem *parentEmailItem;
@property (retain, nonatomic) NSNumber *instanceType;
@property (retain, nonatomic) NSDate *dateReceived;
@property (retain, nonatomic) NSDate *recurrenceId;
@property (nonatomic) int meetingClassType;
@property (nonatomic) int meetingMessageType;
@property (retain, nonatomic) NSString *cachedParentFolderId;
@property (retain, nonatomic) NSString *cachedParentServerId;
@property (retain, nonatomic) NSString *sender;
@property (retain, nonatomic) NSArray *forwardees;

+ (_Bool)supportsSecureCoding;
+ (_Bool)acceptsTopLevelLeaves;
+ (_Bool)parsingLeafNode;
+ (_Bool)parsingWithSubItems;
+ (_Bool)frontingBasicTypes;
+ (_Bool)notifyOfUnknownTokens;
+ (id)asParseRules;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setOrganizer:(id)arg1;
- (void)applyPlaceHolder;
- (void)clearPlaceHolder;
- (void)setObject:(id)arg1 forDCCPT:(int)arg2;
- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6;
- (id)exceptionDate;
- (void)setExceptionDate:(id)arg1;
- (void)postProcessApplicationData;
- (_Bool)saveToCalendarWithExistingRecord:(void *)arg1 intoCalendar:(void *)arg2 shouldMergeProperties:(_Bool)arg3 outMergeDidChooseLocalProperties:(_Bool *)arg4 account:(id)arg5;
- (id)unactionableICSRepresentationForAccount:(id)arg1;
- (void)takeValuesFromParentEmailForAccount:(id)arg1;
- (_Bool)cachedOrganizerIsSelfWithAccount:(id)arg1;
- (void)setDTStamp:(id)arg1;
- (void)_determineSelfnessWithLocalEvent:(void *)arg1 forAccount:(id)arg2;
- (_Bool)_bailIfNotNewestDataForAccount:(id)arg1;
- (_Bool)shouldUseInMemoryAttendeesForAccount:(id)arg1 numExistingAttendees:(unsigned long long)arg2;
- (void)_setReminderSecsBefore:(id)arg1;
- (void)saveEmailServerIdAndUpdateNotificationToRecord:(void *)arg1 account:(id)arg2;
- (_Bool)saveResponseCommentToCalendarWithExistingRecord:(void *)arg1;
- (_Bool)saveForwardeesToCalendarWithExistingRecord:(void *)arg1;
- (_Bool)saveEmailServerIdToCalendarWithExistingRecord:(void *)arg1 intoCalendar:(void *)arg2 account:(id)arg3;
- (_Bool)writeInviteToCalDBCreateAsRejected:(_Bool)arg1 defaultCalendar:(void *)arg2 account:(id)arg3;

@end
