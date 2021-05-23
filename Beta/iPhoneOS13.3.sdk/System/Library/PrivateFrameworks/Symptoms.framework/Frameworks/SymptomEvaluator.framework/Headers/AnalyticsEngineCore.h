/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class AnalyticsWorkspace, NSDate, NSMutableDictionary;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface AnalyticsEngineCore : NSObject

{
    AnalyticsWorkspace *workspace;
    NSMutableDictionary *spaces;
    NSObject<OS_dispatch_source> *mem_alerts;
    unsigned int pending_mem_alerts;
    NSDate *lastWorkspaceReset;
    _Bool _isHelper;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) _Bool isHelper;

+ (id)queue;

- (void)dealloc;
- (void)shutdown;
- (void)createSnapshotFor:(id)arg1 pred:(id)arg2 actions:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (id)setOption:(id)arg1;
- (void)_saveAndUnloadAllState;
- (int)performQueryOnEntityFromCache:(id)arg1 pred:(id)arg2 altpred:(id *)arg3 actions:(id)arg4 found:(id *)arg5;
- (void)performQueryPostProcessing:(id)arg1 actions:(id)arg2 processOutcome:(id)arg3;
- (id)initWithWorkspace:(id)arg1 params:(id)arg2 queue:(id)arg3;
- (_Bool)handlesEntity:(id)arg1;
- (void)performQueryOnEntity:(id)arg1 pred:(id)arg2 sort:(id)arg3 actions:(id)arg4 service:(id)arg5 connection:(id)arg6 reply:(CDUnknownBlockType)arg7;
- (id)getOption:(id)arg1;
- (void)resetDataFor:(id)arg1 nameKind:(id)arg2;
- (void)subscribeToNOIsFor:(id)arg1 orPredicate:(id)arg2 options:(id)arg3 connection:(id)arg4;
- (void)inquireNOIFor:(id)arg1 orPredicate:(id)arg2 requestedKeys:(id)arg3 options:(id)arg4 connection:(id)arg5 reply:(CDUnknownBlockType)arg6;
- (void)unsubscribeToNOIs:(id)arg1 connection:(id)arg2;
- (void)clientEvent:(id)arg1 isAddEvent:(_Bool)arg2;
- (void)clientTransactionsRelease;
- (void)performQueryOnEntityCore:(id)arg1 pred:(id)arg2 sort:(id)arg3 actions:(id)arg4 service:(id)arg5 reply:(CDUnknownBlockType)arg6;
- (id)extractQueryStringFrom:(id)arg1 isGeneric:(_Bool *)arg2;

@end
