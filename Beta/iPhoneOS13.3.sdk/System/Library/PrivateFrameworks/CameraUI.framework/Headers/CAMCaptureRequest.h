/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

#import <CameraUI/Swift-Protocol.h>

@class CLHeading, CLLocation, NSString, NSURL;

@interface CAMCaptureRequest : NSObject <Swift>

{
    long long _videoEncodingBehavior;
    long long _photoEncodingBehavior;
    long long _origin;
    unsigned int _assertionIdentifier;
    _Bool _capturedFromPhotoBooth;
    CLLocation *_location;
    CLHeading *_heading;
    long long _persistenceOptions;
    unsigned long long _deferredPersistenceOptions;
    long long _temporaryPersistenceOptions;
    NSURL *_localDestinationURL;
    NSString *_persistenceUUID;
    _Bool _shouldExtractDiagnosticsFromMetadata;
    _Bool _shouldPersistDiagnosticsToSidecar;
    _Bool _shouldDelayRemotePersistence;
    unsigned short _sessionIdentifier;
    long long _captureDevice;
    long long _captureMode;
    long long _captureOrientation;
    long long _pressType;
    long long _type;
}

@property (nonatomic, readonly) long long videoEncodingBehavior;
@property (nonatomic, readonly) long long photoEncodingBehavior;
@property (nonatomic, readonly) long long origin;
@property (nonatomic, readonly) unsigned int assertionIdentifier;
@property (nonatomic, readonly) _Bool capturedFromPhotoBooth;
@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) CLHeading *heading;
@property (nonatomic, readonly) long long persistenceOptions;
@property (nonatomic, readonly) unsigned long long deferredPersistenceOptions;
@property (nonatomic, readonly) long long temporaryPersistenceOptions;
@property (copy, nonatomic, readonly) NSURL *localDestinationURL;
@property (copy, nonatomic, readonly) NSString *persistenceUUID;
@property (nonatomic, readonly) _Bool shouldPersistToIncomingDirectory;
@property (nonatomic, readonly) _Bool shouldProtectPersistence;
@property (nonatomic, readonly) _Bool shouldProtectPersistenceForVideo;
@property (nonatomic, readonly) _Bool shouldExtractDiagnosticsFromMetadata;
@property (nonatomic, readonly) _Bool shouldPersistDiagnosticsToSidecar;
@property (nonatomic, readonly) _Bool shouldDelayRemotePersistence;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) long long captureOrientation;
@property (nonatomic, readonly) long long captureDevice;
@property (nonatomic, readonly) long long captureDevicePosition;
@property (nonatomic, readonly) long long captureMode;
@property (nonatomic, readonly) long long pressType;
@property (nonatomic, readonly) unsigned short sessionIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)shouldPersistToIncomingDirectoryWithPersistenceOptions:(long long)arg1 temporaryPersistenceOptions:(long long)arg2;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(long long)arg1;
- (id)initWithRequest:(id)arg1 distinctPersistence:(_Bool)arg2;
- (id)distinctPersistenceCopy;

@end
