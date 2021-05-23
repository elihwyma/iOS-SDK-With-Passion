/*
 Image: /System/Library/PrivateFrameworks/DataDetectorsNaturalLanguage.framework/DataDetectorsNaturalLanguage
 */

#import <EventKit/EKEvent.h>

@class IPEventClassificationType, IPMessageUnit, NSArray;

@interface EKEvent (IpsosExtendedStorage)

@property _Bool ipsos_isTimeApproximate;
@property _Bool ipsos_isEndTimeApproximate;
@property _Bool ipsos_usesDefaultClassificationTypeStartTime;
@property _Bool ipsos_isDateTimeTenseDependent;
@property _Bool ipsos_timeNeedsMeridianGuess;
@property _Bool ipsos_isEventTimeOnlyAndReferrengingToSentDate;
@property _Bool ipsos_isTimeOffset;
@property _Bool ipsos_allDayPreferred;
@property _Bool ipsos_disableTimeAdjustment;
@property unsigned long long ipsos_usedBubblesCount;
@property double ipsos_confidence;
@property double ipsos_experimentalConfidence;
@property (readonly) double ipsos_duration;
@property (retain) IPEventClassificationType *ipsos_eventClassificationType;
@property (retain) NSArray *ipsos_dataFeatures;
@property (retain) IPMessageUnit *ipsos_messageUnit;
@property unsigned long long ipsos_eventStatus;
@property unsigned long long ipsos_eventAttributes;

- (id)ipsos_betterDescription;

@end
