/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class GEOUserSessionEntity, NSString, PARSession, WBSCompletionQuery, WBSParsecDFeedbackDispatcher;

@protocol OS_dispatch_queue, WBSParsecFeedbackDispatcher, WBSParsecSearchSessionDelegate;

@interface WBSParsecDSession : NSObject

{
    NSObject<OS_dispatch_queue> *_requestProcessingQueue;
    WBSParsecDFeedbackDispatcher *_feedbackDispatcher;
    GEOUserSessionEntity *_threadUnsafeGEOUserSessionEntity;
    struct os_unfair_lock_s _geoUserSessionLock;
    _Bool _skipAutoFillDataUpdates;
    double _threadUnsafeUIScale;
    WBSCompletionQuery *_threadUnsafeCurrentQuery;
    id <WBSParsecSearchSessionDelegate> _threadUnsafeDelegate;
    PARSession *_threadUnsafeParsecdSession;
    unsigned long long _currentQueryID;
}

@property unsigned long long currentQueryID;
@property (nonatomic, readonly) _Bool skipAutoFillDataUpdates;
@property (retain, nonatomic) PARSession *parsecdSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <WBSParsecSearchSessionDelegate> delegate;
@property (retain, nonatomic) WBSCompletionQuery *currentQuery;
@property (nonatomic, setter=setUIScale:) double uiScale;
@property (nonatomic, readonly) id <WBSParsecFeedbackDispatcher> feedbackDispatcher;

+ (id)sharedPARSession;
+ (void)_updateAutoFillTLDsIfNeededForSession:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)_updateAutoFillCorrectionSetsIfNeededForSession:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)sharedDomainPolicyProvider;
+ (id)sharedCorrectionsProcessor;

- (void)session:(id)arg1 bag:(id)arg2 didLoadWithError:(id)arg3;
- (void)_startUpdatingAutoFillDataInBackgroundIfPossibleForSession:(id)arg1;
- (void)_didReceiveResponse:(id)arg1 error:(id)arg2 forTask:(id)arg3 query:(id)arg4;
- (id)initWithParsecdSession:(id)arg1 skipAutoFillDataUpdates:(_Bool)arg2;

@end
