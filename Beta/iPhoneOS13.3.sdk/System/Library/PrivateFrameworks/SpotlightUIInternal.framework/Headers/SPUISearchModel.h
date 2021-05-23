/*
 Image: /System/Library/PrivateFrameworks/SpotlightUIInternal.framework/SpotlightUIInternal
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, SFResultSection, SPQueryResponse, SPQueryTask;

@protocol SPSearchAgentDelegate;

@interface SPUISearchModel : NSObject

{
    long long _updatesDisabled;
    NSString *_lastQueryString;
    _Bool _springBoardIsActive;
    _Bool _infinitePatience;
    _Bool _queryComplete;
    _Bool _queryDelayedFinished;
    _Bool _queryDidFinish;
    _Bool _forceStableResults;
    SFResultSection *_searchThroughSection;
    NSObject<SPSearchAgentDelegate> *_delegate;
    SPQueryTask *_queryTask;
    SPQueryResponse *_lastResponse;
}

@property (retain) SPQueryTask *queryTask;
@property (retain) SPQueryResponse *lastResponse;
@property _Bool springBoardIsActive;
@property _Bool infinitePatience;
@property _Bool queryComplete;
@property _Bool queryDelayedFinished;
@property _Bool queryDidFinish;
@property _Bool forceStableResults;
@property (readonly) _Bool wantsCompletions;
@property (readonly) NSArray *sections;
@property (readonly) SFResultSection *searchThroughSection;
@property (retain) NSObject<SPSearchAgentDelegate> *delegate;

+ (id)sharedInstance;
+ (void)preheat;
+ (void)retrieveFirstTimeExperienceTextWithReply:(CDUnknownBlockType)arg1;
+ (id)sharedGeneralInstance;
+ (id)sharedFullZWKInstance;

- (void)invalidate;
- (void)clear;
- (void)disableUpdates;
- (void)enableUpdates;
- (void)activate;
- (void)deactivate;
- (void)didReceiveResponse:(id)arg1;
- (void)resultsDidBecomeInvalid:(id)arg1;
- (void)updatesEnabled;
- (_Bool)queryInProgress;
- (void)updateWithQueryContext:(id)arg1;
- (void)updatesDisabled;
- (void)updateWithResponse:(id)arg1;
- (void)invalidateQuery:(id)arg1;
- (void)invalidateCurrentQuery;
- (_Bool)_suggestionsReadyForDisplay;

@end
