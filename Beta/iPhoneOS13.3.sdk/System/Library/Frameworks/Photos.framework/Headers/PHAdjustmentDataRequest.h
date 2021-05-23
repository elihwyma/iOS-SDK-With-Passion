/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHMediaRequest.h>

@class PHAdjustmentDataRequestBehaviorSpec, PHAdjustmentDataResult, PLCPLDownloadContext;

@protocol PHAdjustmentDataRequestDelegate;

@interface PHAdjustmentDataRequest : PHMediaRequest

{
    PLCPLDownloadContext *_legacyDownloadContext;
    PHAdjustmentDataResult *_adjustmentDataResult;
    id <PHAdjustmentDataRequestDelegate> _delegate;
    PHAdjustmentDataRequestBehaviorSpec *_behaviorSpec;
}

@property (weak, nonatomic, readonly) id <PHAdjustmentDataRequestDelegate> delegate;
@property (nonatomic, readonly) PHAdjustmentDataRequestBehaviorSpec *behaviorSpec;

- (void)cancel;
- (_Bool)isSynchronous;
- (void)startRequest;
- (void)_cplDownloadStatusNotification:(id)arg1;
- (id)initWithRequestID:(int)arg1 requestIndex:(unsigned long long)arg2 contextType:(long long)arg3 managerID:(unsigned long long)arg4 asset:(id)arg5 behaviorSpec:(id)arg6 delegate:(id)arg7;

@end
