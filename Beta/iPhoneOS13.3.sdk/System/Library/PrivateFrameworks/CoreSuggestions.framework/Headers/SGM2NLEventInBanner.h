/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface SGM2NLEventInBanner : PBCodable

{
    int _actionType;
    NSString *_addedAttendeesCount;
    NSString *_calendarAppUsageLevel;
    unsigned int _confidenceScore;
    int _dateAdj;
    unsigned int _daysFromStartDate;
    int _duraAdj;
    NSString *_eventType;
    int _extractionLevel;
    int _interface;
    NSString *_key;
    NSString *_languageID;
    int _locationAdj;
    int _mailAppUsageLevel;
    int _messagesAppUsageLevel;
    unsigned int _participantCount;
    int _significantSender;
    int _titleAdj;
    int _titleSource;
    unsigned int _usedBubblesCount;
    struct {
        unsigned int actionType:1;
        unsigned int confidenceScore:1;
        unsigned int dateAdj:1;
        unsigned int daysFromStartDate:1;
        unsigned int duraAdj:1;
        unsigned int extractionLevel:1;
        unsigned int interface:1;
        unsigned int locationAdj:1;
        unsigned int mailAppUsageLevel:1;
        unsigned int messagesAppUsageLevel:1;
        unsigned int participantCount:1;
        unsigned int significantSender:1;
        unsigned int titleAdj:1;
        unsigned int titleSource:1;
        unsigned int usedBubblesCount:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasKey;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) _Bool hasInterface;
@property (nonatomic) int interface;
@property (nonatomic) _Bool hasActionType;
@property (nonatomic) int actionType;
@property (nonatomic, readonly) _Bool hasEventType;
@property (retain, nonatomic) NSString *eventType;
@property (nonatomic, readonly) _Bool hasLanguageID;
@property (retain, nonatomic) NSString *languageID;
@property (nonatomic) _Bool hasDaysFromStartDate;
@property (nonatomic) unsigned int daysFromStartDate;
@property (nonatomic) _Bool hasConfidenceScore;
@property (nonatomic) unsigned int confidenceScore;
@property (nonatomic) _Bool hasSignificantSender;
@property (nonatomic) int significantSender;
@property (nonatomic) _Bool hasParticipantCount;
@property (nonatomic) unsigned int participantCount;
@property (nonatomic) _Bool hasExtractionLevel;
@property (nonatomic) int extractionLevel;
@property (nonatomic) _Bool hasUsedBubblesCount;
@property (nonatomic) unsigned int usedBubblesCount;
@property (nonatomic) _Bool hasTitleSource;
@property (nonatomic) int titleSource;
@property (nonatomic) _Bool hasTitleAdj;
@property (nonatomic) int titleAdj;
@property (nonatomic) _Bool hasDateAdj;
@property (nonatomic) int dateAdj;
@property (nonatomic) _Bool hasDuraAdj;
@property (nonatomic) int duraAdj;
@property (nonatomic) _Bool hasLocationAdj;
@property (nonatomic) int locationAdj;
@property (nonatomic, readonly) _Bool hasAddedAttendeesCount;
@property (retain, nonatomic) NSString *addedAttendeesCount;
@property (nonatomic, readonly) _Bool hasCalendarAppUsageLevel;
@property (retain, nonatomic) NSString *calendarAppUsageLevel;
@property (nonatomic) _Bool hasMailAppUsageLevel;
@property (nonatomic) int mailAppUsageLevel;
@property (nonatomic) _Bool hasMessagesAppUsageLevel;
@property (nonatomic) int messagesAppUsageLevel;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)actionTypeAsString:(int)arg1;
- (int)StringAsActionType:(id)arg1;
- (id)interfaceAsString:(int)arg1;
- (int)StringAsInterface:(id)arg1;
- (id)titleAdjAsString:(int)arg1;
- (int)StringAsTitleAdj:(id)arg1;
- (id)dateAdjAsString:(int)arg1;
- (int)StringAsDateAdj:(id)arg1;
- (id)duraAdjAsString:(int)arg1;
- (int)StringAsDuraAdj:(id)arg1;
- (id)significantSenderAsString:(int)arg1;
- (int)StringAsSignificantSender:(id)arg1;
- (id)extractionLevelAsString:(int)arg1;
- (int)StringAsExtractionLevel:(id)arg1;
- (id)titleSourceAsString:(int)arg1;
- (int)StringAsTitleSource:(id)arg1;
- (id)locationAdjAsString:(int)arg1;
- (int)StringAsLocationAdj:(id)arg1;
- (id)mailAppUsageLevelAsString:(int)arg1;
- (int)StringAsMailAppUsageLevel:(id)arg1;
- (id)messagesAppUsageLevelAsString:(int)arg1;
- (int)StringAsMessagesAppUsageLevel:(id)arg1;

@end
