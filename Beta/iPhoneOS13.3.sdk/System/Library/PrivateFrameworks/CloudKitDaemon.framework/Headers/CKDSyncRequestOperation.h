/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDOperation.h>

__attribute__((visibility("hidden")))
@interface CKDSyncRequestOperation : CKDOperation

{
    CDUnknownBlockType _willBeginSyncRequestWithClientsBlock;
    CDUnknownBlockType _clientSyncStartedBlock;
    CDUnknownBlockType _clientSyncProgressedBlock;
    CDUnknownBlockType _clientSyncCompletedBlock;
}

@property (copy, nonatomic) CDUnknownBlockType willBeginSyncRequestWithClientsBlock;
@property (copy, nonatomic) CDUnknownBlockType clientSyncStartedBlock;
@property (copy, nonatomic) CDUnknownBlockType clientSyncProgressedBlock;
@property (copy, nonatomic) CDUnknownBlockType clientSyncCompletedBlock;

- (void)main;

@end
