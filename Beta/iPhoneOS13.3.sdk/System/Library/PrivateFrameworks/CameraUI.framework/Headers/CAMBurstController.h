/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@class CAMBurstSession, CAMPersistenceController, CAMPowerController, CAMProtectionController, CAMRemoteShutterController, NSCountedSet, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface CAMBurstController : NSObject

{
    NSObject<OS_dispatch_queue> *__mutexQueue;
    NSMutableDictionary *__sessionsByIdentifier;
    NSCountedSet *__inflightRequestsByIdentifier;
    NSCountedSet *__requestsPendingPersistenceByIdentifier;
    NSMutableDictionary *__faceResultsByIdentifier;
    CAMBurstSession *__activeSession;
    NSObject<OS_dispatch_queue> *__analysisQueue;
    CAMPersistenceController *__persistenceController;
    CAMProtectionController *__protectionController;
    CAMPowerController *__powerController;
    CAMRemoteShutterController *__remoteShutterController;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_mutexQueue;
@property (nonatomic, readonly) NSMutableDictionary *_sessionsByIdentifier;
@property (nonatomic, readonly) NSCountedSet *_inflightRequestsByIdentifier;
@property (nonatomic, readonly) NSCountedSet *_requestsPendingPersistenceByIdentifier;
@property (nonatomic, readonly) NSMutableDictionary *_faceResultsByIdentifier;
@property (retain, nonatomic, setter=_setActiveSession:) CAMBurstSession *_activeSession;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_analysisQueue;
@property (weak, nonatomic, readonly) CAMPersistenceController *_persistenceController;
@property (nonatomic, readonly) CAMProtectionController *_protectionController;
@property (nonatomic, readonly) CAMPowerController *_powerController;
@property (nonatomic, readonly) CAMRemoteShutterController *_remoteShutterController;
@property (copy, nonatomic, readonly) NSString *currentBurstIdentifier;
@property (nonatomic, readonly) unsigned long long currentBurstCount;

- (id)init;
- (void)setPersistenceController:(id)arg1;
- (void)processPersistedRequest:(id)arg1 withResult:(id)arg2;
- (unsigned long long)estimatedCountForIdentifier:(id)arg1;
- (void)processEnqueuedRequest:(id)arg1;
- (id)startBurstCapture;
- (void)finishBurstCaptureForDevice:(long long)arg1;
- (void)processCapturedRequest:(id)arg1 withResult:(id)arg2;
- (void)processFaceResults:(id)arg1;
- (id)initWithProtectionController:(id)arg1 powerController:(id)arg2 remoteShutterController:(id)arg3;
- (void)_mutexQueueProcessCompleteBurstSessionWithIdentifier:(id)arg1 device:(long long)arg2;
- (void)cancelBurstCapture;
- (unsigned long long)inflightCountForIdentifier:(id)arg1;

@end
