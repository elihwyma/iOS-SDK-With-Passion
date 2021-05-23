/*
 Image: /System/Library/PrivateFrameworks/Spotlight.framework/Spotlight
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, SPQueryResponse;

@protocol OS_dispatch_queue, SPQueryTaskDelegate;

@interface SPQueryTask : NSObject

{
    NSObject<OS_dispatch_queue> *_queryProcessor;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SPQueryResponse *_delayedResponse;
    int _unsafeState;
    NSArray *_supportedAppScopes;
    _Bool _sentSuggestions;
    _Atomic int _updatesDisabled;
    _Atomic struct WaitingResults_s *_deferredUpdate;
    _Bool _forceStableResults;
    _Bool _finished;
    _Bool _live;
    int _state;
    NSObject<SPQueryTaskDelegate> *_delegate;
    unsigned long long _whyQuery;
    unsigned long long _maxTopHitAppResults;
    NSString *_rankingDebugLog;
    NSString *_sessionEntityString;
    NSArray *_sections;
}

@property (retain, nonatomic) NSString *rankingDebugLog;
@property (nonatomic, readonly) NSString *suggestionsDebugLog;
@property (retain, nonatomic) NSString *sessionEntityString;
@property (readonly) NSObject<OS_dispatch_queue> *queryProcessor;
@property (retain, nonatomic) NSArray *sections;
@property (nonatomic) int state;
@property (nonatomic) _Bool finished;
@property (nonatomic) _Bool live;
@property (nonatomic, readonly) int unsafeState;
@property (weak, nonatomic) NSObject<SPQueryTaskDelegate> *delegate;
@property (nonatomic) _Bool forceStableResults;
@property (readonly) NSString *searchString;
@property (nonatomic) unsigned long long whyQuery;
@property (nonatomic) unsigned long long maxTopHitAppResults;

+ (void)initialize;

- (id)init;
- (void)clear;
- (void)cancel;
- (void)disableUpdates;
- (void)enableUpdates;
- (void)start;
- (void)updateResultsThroughDelegate:(_Bool)arg1 state:(int)arg2 sections:(id)arg3;
- (void)startAtUIPriority;
- (void)pushAndPostUpdates;
- (void)postSearchAgentUpdatedResultsToDelegate:(id)arg1;
- (_Bool)readyToUpdate;
- (void)updateResultsThroughDelegate:(_Bool)arg1 state:(int)arg2 unchanged:(_Bool)arg3 sections:(id)arg4;
- (_Bool)_shouldPromptUserToOpenTTR;
- (id)unsafeCombinedSuggestions;

@end
