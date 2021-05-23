/*
 Image: /System/Library/PrivateFrameworks/SpotlightUIInternal.framework/SpotlightUIInternal
 */

#import <SpotlightUIInternal/SPUISearchModel.h>

@class NSObject, SPClientSession;

@protocol OS_dispatch_queue;

@interface SPUISearchModelGeneral : SPUISearchModel

{
    SPClientSession *_session;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (retain) SPClientSession *session;
@property (retain) NSObject<OS_dispatch_queue> *workQueue;

- (id)init;
- (void)clear;
- (void)activate;
- (void)deactivate;
- (_Bool)infinitePatience;
- (void)setInfinitePatience:(_Bool)arg1;
- (_Bool)forceStableResults;
- (void)setForceStableResults:(_Bool)arg1;
- (void)updatesEnabled;
- (_Bool)queryInProgress;
- (void)updateWithQueryContext:(id)arg1;
- (void)updatesDisabled;

@end
