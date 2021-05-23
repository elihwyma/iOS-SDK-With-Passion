/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol CAMStillImagePersistenceCoordinatorDelegate;

@interface CAMStillImagePersistenceCoordinator : NSObject

{
    id <CAMStillImagePersistenceCoordinatorDelegate> _delegate;
    NSMutableDictionary *__receivedCoordinationInfos;
    NSMutableDictionary *__pendingLocalPersistenceResults;
}

@property (nonatomic, readonly) NSMutableDictionary *_receivedCoordinationInfos;
@property (nonatomic, readonly) NSMutableDictionary *_pendingLocalPersistenceResults;
@property (weak, nonatomic, readonly) id <CAMStillImagePersistenceCoordinatorDelegate> delegate;
@property (nonatomic, readonly) _Bool hasReceivedAllExpectedResponses;

- (id)initWithDelegate:(id)arg1;
- (void)_dispatchRemotePersistenceIfPossibleForPairWithOriginalResultSpecifiers:(unsigned long long)arg1 overCaptureResultSpecifiers:(unsigned long long)arg2 request:(id)arg3 identifier:(id)arg4 shouldPersistAsSingleAsset:(_Bool)arg5;
- (void)_dispatchRemotePersistenceIfPossibleForPairWithOriginalResultSpecifiers:(unsigned long long)arg1 processedResultSpecifiers:(unsigned long long)arg2 request:(id)arg3 identifier:(id)arg4 shouldPersistAsSingleAsset:(_Bool)arg5;
- (void)_dispatchRemotePersistenceIfPossibleForResultSpecifiers:(unsigned long long)arg1 request:(id)arg2;
- (id)_debugStringForUnreceivedResultSpecifiersFromExpectedResultSpecifiers:(id)arg1 receivedCoordinationInfos:(id)arg2;
- (unsigned int)_powerAssertionReasonForResultSpecifiers:(unsigned long long)arg1;
- (void)updateForCoordinationInfo:(id)arg1 localPersistenceResult:(id)arg2 request:(id)arg3;
- (void)updateForTimeoutTimerFiredForCoordinationInfo:(id)arg1 request:(id)arg2;

@end
