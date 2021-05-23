/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <Foundation/NSObject.h>

@class PETScalarEventTracker;

@interface SGMNLEventInBanner : NSObject

{
    PETScalarEventTracker *_tracker;
}

@property (nonatomic, readonly) PETScalarEventTracker *tracker;

- (id)init;
- (void)trackEventWithScalar:(unsigned long long)arg1 interface:(struct SGMNLEventInterface_)arg2 actionType:(struct SGMNLEventActionType_)arg3 eventType:(id)arg4 languageID:(id)arg5 daysFromStartDate:(unsigned long long)arg6 confidenceScore:(unsigned long long)arg7 significantSender:(struct SGMBoolOption_)arg8 participantCount:(unsigned long long)arg9 extractionLevel:(struct SGMNLEventExtractionLevel_)arg10 usedBubblesCount:(unsigned long long)arg11 titleSource:(struct SGMEventTitleSource_)arg12 titleAdj:(struct SGMEventStringAdj_)arg13 dateAdj:(struct SGMEventDateAdj_)arg14 duraAdj:(struct SGMEventDurationAdj_)arg15 locationAdj:(struct SGMEventLocationAdj_)arg16 addedAttendeesCount:(id)arg17 calendarAppUsageLevel:(id)arg18 mailAppUsageLevel:(struct SGMAppUsageLevel_)arg19 messagesAppUsageLevel:(struct SGMAppUsageLevel_)arg20;

@end
