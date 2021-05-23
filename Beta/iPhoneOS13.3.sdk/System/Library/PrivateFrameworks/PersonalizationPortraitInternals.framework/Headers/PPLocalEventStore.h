/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

#import <PersonalizationPortraitInternals/Swift-Protocol.h>

@class PPEventCache, PPEventStorage, PPM2FeedbackPortraitRegistered, PPMFeedbackRegistered, _PASNotificationToken;

@interface PPLocalEventStore : NSObject <Swift>

{
    PPEventCache *_eventCache;
    PPEventStorage *_storage;
    _PASNotificationToken *_assetUpdateNotificationToken;
    PPMFeedbackRegistered *_feedbackTracker;
    PPM2FeedbackPortraitRegistered *_feedbackTracker2;
}

+ (id)defaultStore;

- (id)init;
- (void)dealloc;
- (void)clearCaches;
- (void)_registerForNotifications;
- (void)registerFeedback:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)iterEventNameRecordsForClient:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
- (id)eventWithExternalID:(id)arg1;
- (void)_preloadEvents;
- (id)eventNameRecordsForClient:(id)arg1 error:(id *)arg2;
- (id)resolveEventNameRecordChanges:(id)arg1 client:(id)arg2 error:(id *)arg3;
- (id)eventsInRange:(struct _NSRange)arg1;
- (id)_recordForEKEvent:(id)arg1;
- (id)_recordForEvent:(id)arg1;
- (id)_recordForDeletedEKEventWithChangeIdentifier:(id)arg1;
- (double)_scoreForSecondsRelativeToNow:(double)arg1;
- (void)_clearAndReloadAllCachesAndData;
- (void)_setupCalendarVisibilityManager;
- (id)eventHighlightsFrom:(id)arg1 to:(id)arg2 options:(int)arg3;
- (id)eventHighlightForEvent:(id)arg1 usingScorer:(id)arg2 date:(id)arg3 rankingOptions:(int)arg4 loadedFromEventKit:(_Bool *)arg5;
- (id)eventMetaDataFromDate:(id)arg1 toDate:(id)arg2;
- (id)eventsFromDate:(id)arg1 toDate:(id)arg2;

@end
