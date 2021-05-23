/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

#import <PersonalizationPortraitInternals/Swift-Protocol.h>

@class PPContactStorage, PPM2FeedbackPortraitRegistered, PPMFeedbackRegistered;

@interface PPLocalContactStore : NSObject <Swift>

{
    PPContactStorage *_contactStorage;
    PPMFeedbackRegistered *_feedbackTracker;
    PPM2FeedbackPortraitRegistered *_feedbackTracker2;
}

+ (id)defaultStore;

- (id)init;
- (void)registerFeedback:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)iterContactNameRecordsForClient:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
- (id)rankedContactsWithQuery:(id)arg1 error:(id *)arg2;
- (id)contactsWithQuery:(id)arg1 error:(id *)arg2;
- (id)contactsWithQuery:(id)arg1 explanationSet:(id)arg2 timeoutSeconds:(double)arg3 error:(id *)arg4;
- (id)scoredContactsWithContacts:(id)arg1;
- (void)feedbackDisambiguationResultWithChoicesIdentifiers:(id)arg1 chosenContactIdentifier:(id)arg2;
- (id)contactNameRecordsForClient:(id)arg1 error:(id *)arg2;
- (id)contactNameRecordChangesForClient:(id)arg1 error:(id *)arg2;

@end
