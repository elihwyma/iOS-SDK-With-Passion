/*
 Image: /System/Library/PrivateFrameworks/EnhancedLoggingState.framework/EnhancedLoggingState
 */

#import <Foundation/NSObject.h>

@class ELSSnapshot, NSUserDefaults;

@interface ELSManager : NSObject

{
    ELSSnapshot *_snapshot;
    NSUserDefaults *_defaults;
}

@property (retain, nonatomic) ELSSnapshot *snapshot;
@property (retain, nonatomic) NSUserDefaults *defaults;

+ (id)sharedManager;

- (void)dealloc;
- (void)finish;
- (void)flush;
- (void)flushWithCompletion:(CDUnknownBlockType)arg1;
- (id)initSingleton;
- (void)beginUpdates;
- (void)refreshWithCompletion:(CDUnknownBlockType)arg1;
- (void)finishWithCompletion:(CDUnknownBlockType)arg1;
- (void)transactionWithBlock:(CDUnknownBlockType)arg1;
- (void)transactionWithBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)commitBatchTransaction:(id)arg1;
- (_Bool)commitStatusTransaction:(id)arg1;
- (_Bool)commitConsentTransaction:(id)arg1;
- (_Bool)commitDatesTransaction:(id)arg1;
- (_Bool)commitQueueTransaction:(id)arg1;
- (_Bool)commitRetriesRemainingTransaction:(id)arg1;
- (_Bool)commitIdentifiersToRetryTransaction:(id)arg1;
- (_Bool)commitMetadataTransaction:(id)arg1;
- (_Bool)commitUploadCompletedPercentage:(id)arg1;
- (_Bool)commitFollowUpOptions:(id)arg1;
- (_Bool)object:(id)arg1 isEqualToObject:(id)arg2;
- (void)getBugSessionActivityWithCompletion:(CDUnknownBlockType)arg1;

@end
