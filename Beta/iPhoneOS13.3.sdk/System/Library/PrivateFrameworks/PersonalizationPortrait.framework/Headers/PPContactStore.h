/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

#import <NSObject.h>

#import <PersonalizationPortrait/Swift-Protocol.h>

@class NSString, PPClientFeedbackHelper, PPRecordMonitoringHelper;

@interface PPContactStore : NSObject <Swift>

{
    PPRecordMonitoringHelper *_monitoringHelper;
    PPClientFeedbackHelper *_clientFeedbackHelper;
}

@property (retain, nonatomic) NSString *clientIdentifier;

- (id)init;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)registerFeedback:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)_recordGenerator;
- (void)_sendChangesToDelegates;
- (_Bool)iterRankedContactsWithQuery:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
- (_Bool)iterContactNameRecordsForClient:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
- (void)feedbackDisambiguationResultWithChoicesIdentifiers:(id)arg1 chosenContactIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_loadContactNameRecordsWithDelegate:(id)arg1;
- (_Bool)loadContactNameRecordsAndMonitorChangesWithDelegate:(id)arg1 error:(id *)arg2;

@end
