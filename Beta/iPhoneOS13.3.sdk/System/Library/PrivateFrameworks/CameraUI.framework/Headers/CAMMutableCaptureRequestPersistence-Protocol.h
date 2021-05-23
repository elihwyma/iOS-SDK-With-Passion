/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/Swift-Protocol.h>

@class NSString, NSURL;

@protocol CAMMutableCaptureRequestPersistence <Swift>

@property (nonatomic) long long persistenceOptions;
@property (nonatomic) unsigned long long deferredPersistenceOptions;
@property (nonatomic) long long temporaryPersistenceOptions;
@property (copy, nonatomic) NSURL *localDestinationURL;
@property (copy, nonatomic) NSString *persistenceUUID;
@property (nonatomic) _Bool shouldExtractDiagnosticsFromMetadata;
@property (nonatomic) _Bool shouldPersistDiagnosticsToSidecar;
@property (nonatomic) _Bool shouldDelayRemotePersistence;

@end
