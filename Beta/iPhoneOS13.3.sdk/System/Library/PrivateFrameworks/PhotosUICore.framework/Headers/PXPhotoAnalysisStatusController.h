/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXObservable.h>

@class NSDate, NSError, NSMutableArray, NSString;

@interface PXPhotoAnalysisStatusController : PXObservable

{
    struct {
        _Bool graphStatus;
    } _needsUpdateFlags;
    _Bool _hasBeenReadyForSomeTime;
    _Bool __didReceiveGraphFractionCompleted;
    _Bool __graphReady;
    _Bool __requestingGraphFractionCompleted;
    long long _graphStatus;
    double _graphFractionCompleted;
    NSDate *__initialUpdateDate;
    NSDate *__lastGraphBecameReadyDate;
    NSError *__graphError;
    NSMutableArray *__retryBlocks;
}

@property (nonatomic, setter=_setGraphStatus:) long long graphStatus;
@property (nonatomic, setter=_setHasBeenReadyForSomeTime:) _Bool hasBeenReadyForSomeTime;
@property (nonatomic, setter=_setGraphFractionCompleted:) double graphFractionCompleted;
@property (nonatomic, setter=_setDidReceiveGraphFractionCompleted:) _Bool _didReceiveGraphFractionCompleted;
@property (retain, nonatomic, setter=_setInitialUpdateDate:) NSDate *_initialUpdateDate;
@property (retain, nonatomic, setter=_setLastGraphBecameReadyDate:) NSDate *_lastGraphBecameReadyDate;
@property (nonatomic, getter=_isGraphReady, setter=_setGraphReady:) _Bool _graphReady;
@property (retain, nonatomic, setter=_setGraphError:) NSError *_graphError;
@property (nonatomic, getter=_isRequestingGraphFractionCompleted, setter=_setRequestingGraphFractionCompleted:) _Bool _requestingGraphFractionCompleted;
@property (nonatomic, readonly) NSMutableArray *_retryBlocks;
@property (nonatomic, readonly) NSString *stateDescription;

+ (id)sharedStatusController;

- (id)init;
- (void)update;
- (_Bool)_needsUpdate;
- (void)_setNeedsUpdate;
- (id)mutableChangeObject;
- (void)didPerformChanges;
- (void)_updateIfNeeded;
- (void)registerRetryBlock:(CDUnknownBlockType)arg1;
- (void)_handleInitialGraceDelay;
- (void)_requestGraphReady;
- (void)_handleGraphReadyReplyWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)_requestGraphFractionCompleted;
- (void)_handleGraphFractionCompletedReply:(id)arg1 error:(id)arg2;
- (void)_handleGraphReadyForSomeTimeForDate:(id)arg1;
- (_Bool)_isWithinGracePeriod;
- (void)_dequeueAndPerformBlocks:(id)arg1;
- (void)_invalidateGraphStatus;
- (void)_updateGraphStatusIfNeeded;

@end
