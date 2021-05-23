/*
 Image: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
 */

#import <NSObject.h>

@class NSXPCConnection, _PSSuggesterConfiguration;

@interface _PSSuggester : NSObject

{
    NSXPCConnection *_connection;
    struct os_unfair_lock_s _lock;
    _PSSuggesterConfiguration *_configuration;
}

@property (nonatomic, readonly) _PSSuggesterConfiguration *configuration;

+ (id)suggesterWithDaemon;

- (id)init;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithDaemonUsingConfiguration:(id)arg1;
- (id)shareExtensionSuggestionsFromContext:(id)arg1;
- (id)rankedZKWSuggestionsFromContext:(id)arg1;
- (void)provideFeedbackForMessagesZkwSuggestions:(id)arg1;
- (id)rankedAutocompleteSuggestionsFromContext:(id)arg1 candidates:(id)arg2;
- (id)shareSheetInteractionsFromContext:(id)arg1;
- (id)hourOfDayProbabilitiesToInteractWithContacts:(id)arg1;
- (id)suggestInteractionsFromContext:(id)arg1;
- (id)rankedNameSuggestionsFromContext:(id)arg1 name:(id)arg2;
- (id)rankedGlobalSuggestionsFromContext:(id)arg1 contactsOnly:(_Bool)arg2;
- (id)hourOfDayProbabilitiesToInteractWithContact:(id)arg1;
- (id)relativeAppUsageProbabilitiesForCandidateBundleIds:(id)arg1 daysAgo:(long long)arg2;
- (void)provideFeedbackForSuggestions:(id)arg1;

@end
