/*
 Image: /System/Library/PrivateFrameworks/SpotlightUIInternal.framework/SpotlightUIInternal
 */

#import <SpotlightUIInternal/SPUISearchModel.h>

@class NSObject, SPZKWSession;

@protocol OS_dispatch_queue;

@interface SPUISearchModelZKW : SPUISearchModel

{
    NSObject<OS_dispatch_queue> *_queryProcessor;
    _Bool _shouldCacheResults;
    _Bool _newQuery;
    SPZKWSession *_session;
}

@property (retain, nonatomic) SPZKWSession *session;

- (id)init;
- (void)dealloc;
- (void)updateAtUIPriorityWithQueryContext:(id)arg1;
- (void)updateWithQueryContext:(id)arg1;
- (void)updateWithQueryContext:(id)arg1 uiPriority:(_Bool)arg2;

@end
