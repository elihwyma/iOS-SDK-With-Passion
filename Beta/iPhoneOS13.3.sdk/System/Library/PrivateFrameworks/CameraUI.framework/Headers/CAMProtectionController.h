/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@class NSCountedSet, NSMutableDictionary, NSMutableSet;

@protocol OS_dispatch_queue;

@interface CAMProtectionController : NSObject

{
    int __nebulaDaemonWriteProtectionFileDescriptor;
    NSObject<OS_dispatch_queue> *__protectionQueue;
    NSCountedSet *__persistenceProtectionInflightRequestsByType;
    NSMutableDictionary *__persistenceProtectionFileDescriptorsByType;
    NSMutableDictionary *__burstProcessingProtectionFileDescriptorsByIdentifier;
    NSMutableSet *__nebulaDaemonWriteProtectionInflightIdentifiers;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_protectionQueue;
@property (nonatomic, readonly) NSCountedSet *_persistenceProtectionInflightRequestsByType;
@property (nonatomic, readonly) NSMutableDictionary *_persistenceProtectionFileDescriptorsByType;
@property (nonatomic, readonly) NSMutableDictionary *_burstProcessingProtectionFileDescriptorsByIdentifier;
@property (nonatomic, readonly) NSMutableSet *_nebulaDaemonWriteProtectionInflightIdentifiers;
@property (nonatomic, readonly) int _nebulaDaemonWriteProtectionFileDescriptor;

+ (id)pathForProtectNebulaDaemonWritesIndicator;
+ (_Bool)isCameraPerformingHighPriorityDiskActivity;

- (id)init;
- (void)dealloc;
- (void)stopProtectingPersistenceForRequest:(id)arg1;
- (void)startProtectingPersistenceForRequest:(id)arg1;
- (void)_protectionQueueAbortProtectionForProtectionTypes;
- (void)_protectionQueueAbortProtectionForBurstProcessing;
- (void)_protectionQueueAbortProtectionForNebulaDaemonWritesForReason:(id)arg1;
- (id)_persistenceProtectionPathForType:(long long)arg1;
- (int)_persistenceProtectionFileDescriptorForType:(long long)arg1;
- (void)_addPersistenceProtectionIndicatorForType:(long long)arg1 logIdentifier:(id)arg2;
- (void)_protectionQueueRemovePersistenceProtectionIndicatorForType:(long long)arg1 unlinkFile:(_Bool)arg2 logIdentifier:(id)arg3;
- (long long)_persistenceProtectionTypeForRequest:(id)arg1;
- (void)_protectionQueueStartProtectingPersistenceForType:(long long)arg1 logIdentifier:(id)arg2;
- (void)_protectionQueueStopProtectingPersistenceForType:(long long)arg1 logIdentifier:(id)arg2;
- (id)_burstProcessingProtectionPathForIdentifier:(id)arg1;
- (int)_burstProcessingProtectionFileDescriptorForIdentifier:(id)arg1;
- (void)_protectionQueueRemoveBurstProcessingProtectionIndicatorForIdentifier:(id)arg1;
- (void)_addBurstProcessingProtectionIndicatorForIdentifier:(id)arg1;
- (void)_protectionQueueStartProtectingNebulaDaemonWritesForIdentifier:(id)arg1;
- (void)_protectionQueueStopProtectingNebulaDaemonWritesForIdentifier:(id)arg1 closeFile:(_Bool)arg2;
- (void)startProtectingBurstProcessingForIdentifier:(id)arg1;
- (void)stopProtectingBurstProcessingForIdentifier:(id)arg1;
- (void)startProtectingNebulaDaemonWritesForIdentifier:(id)arg1;
- (void)stopProtectingNebulaDaemonWritesForIdentifier:(id)arg1;
- (void)abortOutstandingNebulaDaemonWriteProtectionsForReason:(id)arg1;

@end
