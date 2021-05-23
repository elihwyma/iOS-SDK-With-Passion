/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

#import <ReminderKit/Swift-Protocol.h>

@interface REMDistributedEvaluationCollectionOptions : NSObject <Swift>

{
    _Bool _includeListNames;
    _Bool _includeReminderTitles;
    _Bool _includeSystemLanguage;
    _Bool _includeSystemTimezone;
    _Bool _includeAccountType;
    _Bool _includeListGroupInfo;
    _Bool _includeListNameFuzzedEmbeddings;
    _Bool _includeReminderTitleFuzzedEmbeddings;
    _Bool _includeReminderTitleSaltedHash;
    _Bool _includeDates;
    _Bool _includeRecurrenceInfo;
    _Bool _shouldFuzzDates;
    _Bool _includeLocationInfo;
    _Bool _includeAttachmentUTIs;
    _Bool _includeRemindMeWhenMessagingInfo;
    _Bool _includeAlarmDates;
    _Bool _includeSubtaskInfo;
    _Bool _includeUserActivityInfo;
    _Bool _includeIsFlagged;
    _Bool _includePriority;
    _Bool _relevantWordTagsIncludeOtherWord;
}

@property (nonatomic) _Bool includeListNames;
@property (nonatomic) _Bool includeReminderTitles;
@property (nonatomic) _Bool includeSystemLanguage;
@property (nonatomic) _Bool includeSystemTimezone;
@property (nonatomic) _Bool includeAccountType;
@property (nonatomic) _Bool includeListGroupInfo;
@property (nonatomic) _Bool includeListNameFuzzedEmbeddings;
@property (nonatomic) _Bool includeReminderTitleFuzzedEmbeddings;
@property (nonatomic) _Bool includeReminderTitleSaltedHash;
@property (nonatomic) _Bool includeDates;
@property (nonatomic) _Bool includeRecurrenceInfo;
@property (nonatomic) _Bool shouldFuzzDates;
@property (nonatomic) _Bool includeLocationInfo;
@property (nonatomic) _Bool includeAttachmentUTIs;
@property (nonatomic) _Bool includeRemindMeWhenMessagingInfo;
@property (nonatomic) _Bool includeAlarmDates;
@property (nonatomic) _Bool includeSubtaskInfo;
@property (nonatomic) _Bool includeUserActivityInfo;
@property (nonatomic) _Bool includeIsFlagged;
@property (nonatomic) _Bool includePriority;
@property (nonatomic) _Bool relevantWordTagsIncludeOtherWord;

+ (_Bool)supportsSecureCoding;
+ (id)optionsWithDefaultValues;
+ (id)optionsWithEverythingOff;
+ (id)optionsFromJSONRepresentation:(id)arg1;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;

@end
