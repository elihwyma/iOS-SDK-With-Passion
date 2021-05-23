/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface BLTSettingSyncSendQueue : NSObject

{
    NSObject<OS_dispatch_queue> *_sectionInfoSenderQueue;
    NSObject<OS_dispatch_queue> *_sectionInfoProcessingQueue;
    NSObject<OS_dispatch_semaphore> *_sectionInfoSemaphore;
    NSObject<OS_dispatch_queue> *_subsectionParameterIconSenderQueue;
    NSObject<OS_dispatch_queue> *_subsectionParameterIconProcessingQueue;
    NSObject<OS_dispatch_semaphore> *_subsectionParameterIconSemaphore;
    NSDictionary *_iconWhitelist;
    CDUnknownBlockType _sectionParametersProvider;
    CDUnknownBlockType _sectionInfoSender;
    CDUnknownBlockType _sectionIconSender;
    CDUnknownBlockType _sectionRemoveSender;
}

@property (retain, nonatomic) NSDictionary *iconWhitelist;
@property (copy, nonatomic) CDUnknownBlockType sectionParametersProvider;
@property (copy, nonatomic) CDUnknownBlockType sectionInfoSender;
@property (copy, nonatomic) CDUnknownBlockType sectionIconSender;
@property (copy, nonatomic) CDUnknownBlockType sectionRemoveSender;

- (id)init;
- (id)initWithMaxConcurrentSendCount:(unsigned long long)arg1;
- (void)sendSectionSubtypeParameterIcons:(id)arg1 sectionID:(id)arg2 waitForAcknowledgement:(_Bool)arg3 spoolToFile:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_sendSectionInfoWithSectionID:(unsigned long long)arg1 usingProvider:(CDUnknownBlockType)arg2 updateProgress:(CDUnknownBlockType)arg3 sendCompleted:(CDUnknownBlockType)arg4 sendAttempt:(unsigned long long)arg5 waitForAcknowledgement:(_Bool)arg6 group:(id)arg7 spoolToFile:(_Bool)arg8;
- (void)_sendEffectiveSectionInfo:(id)arg1 waitForAcknowledgement:(_Bool)arg2 withQueue:(id)arg3 spoolToFile:(_Bool)arg4 andCompletion:(CDUnknownBlockType)arg5;
- (void)_sendSectionIcon:(id)arg1 forSectionID:(id)arg2 forSubtypeID:(long long)arg3 waitForAcknowledgement:(_Bool)arg4 withQueue:(id)arg5 spoolToFile:(_Bool)arg6 andCompletion:(CDUnknownBlockType)arg7;
- (void)sendEffectiveSectionInfosUsingProvider:(CDUnknownBlockType)arg1 count:(unsigned long long)arg2 sectionInfoSendCompleted:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4 progress:(CDUnknownBlockType)arg5 spoolToFile:(_Bool)arg6;
- (void)sendRemoveSectionWithSectionID:(id)arg1 sent:(CDUnknownBlockType)arg2;
- (void)sendSpooledRequestsNowWithSender:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2 progress:(CDUnknownBlockType)arg3;

@end
