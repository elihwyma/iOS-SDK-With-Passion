/*
 Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSSet, NSString, PARSession, PRSFeedbackProxy, PRSRankingServerKnobs, SSPlistDataReader;

@protocol OS_dispatch_queue, OS_dispatch_source, PRSSessionController, SFFeedbackListener;

@interface PRSSearchSession : NSObject

{
    NSMutableArray *_feedback;
    id <PRSSessionController> _client;
    double _lastQueryTime;
    NSString *_queryLanguage;
    NSDictionary *_sqfData;
    NSDictionary *_serverFeatures;
    NSString *_userAgent;
    _Bool _parsecFeedbackAllowed;
    PRSFeedbackProxy *_listener;
    _Bool _configuredSession;
    NSObject<OS_dispatch_queue> *_clientQueue;
    double _sessionStartTime;
    NSArray *_supportedServices;
    NSString *_modelL2Version;
    PARSession *_session;
    NSObject<OS_dispatch_source> *_quiescenceTimer;
    double _retryAfter;
}

@property (retain) PARSession *session;
@property (retain) NSString *userAgent;
@property _Bool configuredSession;
@property (retain) NSObject<OS_dispatch_source> *quiescenceTimer;
@property double retryAfter;
@property (nonatomic, readonly) id <SFFeedbackListener> listener;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic) double sessionStartTime;
@property (nonatomic, readonly) double searchRenderTimeout;
@property (nonatomic, readonly) double suggestionsRenderTimeout;
@property (nonatomic, readonly) NSArray *supportedServices;
@property (nonatomic, readonly) NSSet *appBlacklist;
@property (nonatomic, readonly) PRSRankingServerKnobs *rankingKnobs;
@property (nonatomic, readonly) SSPlistDataReader *cepDictionary;
@property (nonatomic, readonly) SSPlistDataReader *cannedCEPValues;
@property (nonatomic, readonly) NSString *modelL2Version;
@property (nonatomic, readonly) _Bool disableAsTypedSuggestion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)activate;
- (void)deactivate;
- (void)setUserAgentString:(id)arg1;
- (void)pruneCache;
- (void)session:(id)arg1 bag:(id)arg2 didLoadWithError:(id)arg3;
- (void)session:(id)arg1 didDownloadResource:(id)arg2;
- (void)session:(id)arg1 didDeleteResource:(id)arg2;
- (void)setQueryLanguage:(id)arg1;
- (id)feedbackListener;
- (void)warmup;
- (void)queryCompleted:(id)arg1;
- (void)setFeedbackStartTime;
- (id)initWithClient:(id)arg1 clientQueue:(id)arg2 config:(id)arg3 session:(id)arg4;
- (id)queryWithString:(id)arg1 keyboardLanguage:(id)arg2 externalId:(unsigned int)arg3 scaleFactor:(double)arg4 handler:(id)arg5 queryIdent:(unsigned long long)arg6 whyQuery:(unsigned long long)arg7;
- (void)getFTEStringsWithReply:(CDUnknownBlockType)arg1;
- (id)initWithClient:(id)arg1 clientQueue:(id)arg2;
- (void)setParsecFeedbackAllowed:(_Bool)arg1;
- (id)queryWithEngagedSuggestion:(id)arg1 keyboardLanguage:(id)arg2 externalId:(unsigned int)arg3 scaleFactor:(double)arg4 handler:(id)arg5 queryIdent:(unsigned long long)arg6 whyQuery:(unsigned long long)arg7;
- (id)getQueryTaskForHandler:(id)arg1 scaleFactor:(double)arg2 whyQuery:(unsigned long long)arg3;
- (id)queryWithString:(id)arg1 keyboardLanguage:(id)arg2 externalId:(unsigned int)arg3 handler:(id)arg4 queryIdent:(unsigned long long)arg5 whyQuery:(unsigned long long)arg6;
- (void)getCachedQueries:(id *)arg1 results:(id *)arg2 webSearch:(_Bool)arg3;
- (void)shrinkCaches;

@end
