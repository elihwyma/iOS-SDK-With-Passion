/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSProgress.h>

@protocol NSProgressPublisher;

__attribute__((visibility("hidden")))
@interface _NSProgressProxy : NSProgress

{
    id <NSProgressPublisher> _forwarder;
    _Bool _isOld;
    CDUnknownBlockType _unpublishingHandler;
}

- (void)dealloc;
- (void)cancel;
- (void)pause;
- (void)resume;
- (void)prioritize;
- (void)setTotalUnitCount:(long long)arg1;
- (void)becomeCurrentWithPendingUnitCount:(long long)arg1;
- (void)resignCurrent;
- (void)setCompletedUnitCount:(long long)arg1;
- (void)setUserInfoObject:(id)arg1 forKey:(id)arg2;
- (void)setCancellationHandler:(CDUnknownBlockType)arg1;
- (void)setPausingHandler:(CDUnknownBlockType)arg1;
- (double)fractionCompleted;
- (void)publish;
- (void)unpublish;
- (void)setLocalizedDescription:(id)arg1;
- (void)setCancellable:(_Bool)arg1;
- (void)setPausable:(_Bool)arg1;
- (id)estimatedTimeRemaining;
- (void)setEstimatedTimeRemaining:(id)arg1;
- (id)throughput;
- (void)setThroughput:(id)arg1;
- (id)fileOperationKind;
- (void)setFileOperationKind:(id)arg1;
- (id)fileURL;
- (void)setFileURL:(id)arg1;
- (id)fileTotalCount;
- (void)setFileTotalCount:(id)arg1;
- (id)fileCompletedCount;
- (void)setFileCompletedCount:(id)arg1;
- (id)byteTotalCount;
- (void)setByteTotalCount:(id)arg1;
- (id)byteCompletedCount;
- (void)setByteCompletedCount:(id)arg1;
- (void)setKind:(id)arg1;
- (void)acknowledgeWithSuccess:(_Bool)arg1;
- (_Bool)isOld;
- (void)setPrioritizable:(_Bool)arg1;
- (void)setPrioritizationHandler:(CDUnknownBlockType)arg1;
- (void)_setRemoteUserInfoValue:(id)arg1 forKey:(id)arg2;
- (void)_setRemoteValues:(id)arg1 forKeys:(id)arg2;
- (id)_initWithForwarder:(id)arg1 values:(id)arg2 isOld:(_Bool)arg3;
- (void)_invokePublishingHandler:(CDUnknownBlockType)arg1;
- (void)_invokeUnpublishingHandler;
- (void)_acknowledgeWithSuccess:(_Bool)arg1;

@end
