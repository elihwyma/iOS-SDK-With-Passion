/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <Foundation/NSObject.h>

@class GEOSearchFoundationFeedbackListener, NSFileManager, NSSet, NSString, NSXPCConnection, PARBag, PARSearchClient, PARSessionConfiguration;

@protocol PARSessionDelegate;

@interface PARSession : NSObject

{
    NSFileManager *_fileManager;
    GEOSearchFoundationFeedbackListener *_mapsListener;
    PARBag *_bag;
    _Atomic _Bool _sampled;
    PARSearchClient *_client;
    PARSessionConfiguration *_configuration;
    id <PARSessionDelegate> _delegate;
    NSSet *_allowedAppsForSiriSuggestions;
}

@property (retain) PARBag *bag;
@property (retain, nonatomic) PARSearchClient *client;
@property (retain) NSSet *allowedAppsForSiriSuggestions;
@property (retain) PARSessionConfiguration *configuration;
@property (nonatomic, readonly) NSXPCConnection *connection;
@property (weak) id <PARSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedSession;
+ (id)sessionWithConfiguration:(id)arg1;
+ (id)sessionWithConfiguration:(id)arg1 delegate:(id)arg2 startImmediately:(_Bool)arg3;
+ (id)sharedPARSessionWithConfiguration:(id)arg1;

- (void)start;
- (id)initWithConfiguration:(id)arg1;
- (void)reportFeedback:(id)arg1 queryId:(unsigned long long)arg2;
- (void)searchViewDidAppear:(id)arg1;
- (void)searchViewDidDisappear:(id)arg1;
- (void)cardViewDidDisappear:(id)arg1;
- (void)cardViewDidAppear:(id)arg1;
- (void)didStartSearch:(id)arg1;
- (void)didEndSearch:(id)arg1;
- (void)didRankSections:(id)arg1;
- (void)didEngageResult:(id)arg1;
- (void)didGradeResultRelevancy:(id)arg1;
- (void)didEngageSuggestion:(id)arg1;
- (void)didEngageCardSection:(id)arg1;
- (void)didErrorOccur:(id)arg1;
- (void)sendCustomFeedback:(id)arg1;
- (void)resultsDidBecomeVisible:(id)arg1;
- (void)suggestionsDidBecomeVisible:(id)arg1;
- (void)didReceiveResultsAfterTimeout:(id)arg1;
- (void)didAppendLateSections:(id)arg1;
- (void)didClearInput:(id)arg1;
- (void)didEngageSection:(id)arg1;
- (void)sectionHeaderDidBecomeVisible:(id)arg1;
- (void)didGoToSite:(id)arg1;
- (void)didGoToSearch:(id)arg1;
- (void)didGradeLookupHintRelevancy:(id)arg1;
- (void)didReportUserResponseFeedback:(id)arg1;
- (void)didSubmitUserReportFeedback:(id)arg1;
- (_Bool)loadImage:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (_Bool)loadCard:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (_Bool)loadMoreResults:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (unsigned long long)enabledStatus;
- (void)reportEvent:(id)arg1;
- (id)taskWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fileHandleAndAttributesForResource:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loadTask:(id)arg1;
- (id)initWithConfiguration:(id)arg1 connection:(id)arg2 delegate:(id)arg3 startImmediately:(_Bool)arg4;
- (void)didUpdateSiriSuggestionsAppWhitelist;
- (void)reportFeedback:(id)arg1;
- (void)_scheduleEagerFlush;
- (void)sendCustomFeedback:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_flushUsingConnectionToFBF:(id)arg1;
- (id)initWithConfiguration:(id)arg1 connection:(id)arg2;
- (id)awaitBag;
- (void)sendCBAEngagementFeedback:(id)arg1 query:(unsigned long long)arg2;

@end
