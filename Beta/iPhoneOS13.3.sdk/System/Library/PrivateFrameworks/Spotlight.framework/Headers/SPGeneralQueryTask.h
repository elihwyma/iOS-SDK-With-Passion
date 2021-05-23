/*
 Image: /System/Library/PrivateFrameworks/Spotlight.framework/Spotlight
 */

#import <Spotlight/SPQueryTask.h>

@class NSMutableArray, NSString, SPClientSession, SPDaemonQueryToken, SPSearchQuery;

@interface SPGeneralQueryTask : SPQueryTask

{
    SPClientSession *_session;
    SPSearchQuery *_query;
    SPDaemonQueryToken *_token;
    _Bool _started;
    _Bool _newQuery;
    _Bool _didReceiveCompleteCallback;
    NSMutableArray *_mutableSections;
    NSString *_mutableSessionEntityString;
}

@property (readonly) SPSearchQuery *query;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)clear;
- (void)cancel;
- (void)start;
- (id)searchString;
- (void)searchDaemonQuery:(id)arg1 gotResultSet:(id)arg2 replace:(_Bool)arg3 complete:(_Bool)arg4 finished:(_Bool)arg5 delayed:(_Bool)arg6 delayedTopHit:(_Bool)arg7 unchanged:(_Bool)arg8 forceStable:(_Bool)arg9 blendingDuration:(double)arg10 geoEntityString:(id)arg11 supportedAppScopes:(id)arg12;
- (void)searchDaemonSuggestionsArray:(id)arg1;
- (void)searchDaemonRankingLog:(id)arg1;
- (void)searchDaemonQuery:(id)arg1 encounteredError:(id)arg2;
- (id)unsafeSections;
- (id)unsafeSessionEntityString;
- (_Bool)_shouldPromptUserToOpenTTR;
- (id)initForSession:(id)arg1 withQuery:(id)arg2;
- (void)handleHiddenResult:(id)arg1 shownResult:(id)arg2 inSection:(id)arg3;
- (void)handleOptionsForNewSections:(id)arg1;
- (void)mergeSections;
- (id)defaultSearchThroughSection;
- (id)getTapToRadarPunchOutForRankingWithDebugLog:(id)arg1;
- (id)resultWithIdentifier:(id)arg1 title:(id)arg2 url:(id)arg3 bundleIdentifier:(id)arg4;
- (void)addSections:(id)arg1 delayedTopHit:(_Bool)arg2;
- (id)searchThroughSection;
- (void)clearInternal:(int)arg1 invalidate:(_Bool)arg2;
- (void)searchDaemonLocalSuggestionsData:(id)arg1 lexicon:(struct _LXLexicon *)arg2 tokenizer:(struct __CFStringTokenizer *)arg3 currentLocaleRef:(struct __CFLocale *)arg4;

@end
