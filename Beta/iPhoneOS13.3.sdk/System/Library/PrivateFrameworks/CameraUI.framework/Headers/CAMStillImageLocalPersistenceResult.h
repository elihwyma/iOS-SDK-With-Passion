/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@class CAMStillImageCaptureResult, NSData, NSDate, NSDictionary, NSError, NSString, NSURL;

@interface CAMStillImageLocalPersistenceResult : NSObject

{
    CAMStillImageCaptureResult *_captureResult;
    NSURL *_localDestinationURL;
    NSURL *_linkedDestinationURL;
    NSURL *_localAdjustmentsURL;
    NSString *_localDiagnosticsPath;
    NSString *_localFilteredPreviewPath;
    NSString *_localPersistenceUUID;
    NSDate *_creationDate;
    NSString *_uniformTypeIdentifier;
    long long _imageOrientation;
    NSDictionary *_metadata;
    NSData *_adjustmentsData;
    NSURL *_localPrivateMetadataFileURL;
    NSError *_error;
}

@property (nonatomic, readonly) CAMStillImageCaptureResult *captureResult;
@property (copy, nonatomic, readonly) NSURL *localDestinationURL;
@property (copy, nonatomic, readonly) NSURL *linkedDestinationURL;
@property (copy, nonatomic, readonly) NSURL *localAdjustmentsURL;
@property (copy, nonatomic, readonly) NSString *localDiagnosticsPath;
@property (copy, nonatomic, readonly) NSString *localFilteredPreviewPath;
@property (copy, nonatomic, readonly) NSString *localPersistenceUUID;
@property (nonatomic, readonly) NSDate *creationDate;
@property (copy, nonatomic, readonly) NSString *uniformTypeIdentifier;
@property (nonatomic, readonly) long long imageOrientation;
@property (copy, nonatomic, readonly) NSDictionary *metadata;
@property (nonatomic, readonly) NSData *adjustmentsData;
@property (copy, nonatomic, readonly) NSURL *localPrivateMetadataFileURL;
@property (nonatomic, readonly) NSError *error;

- (id)initWithCaptureResult:(id)arg1 atURL:(id)arg2 linkedURL:(id)arg3 localAdjustmentsURL:(id)arg4 diagnosticsPath:(id)arg5 filteredPreviewPath:(id)arg6 withUUID:(id)arg7 creationDate:(id)arg8 uniformTypeIdentifier:(id)arg9 orientation:(long long)arg10 metadata:(id)arg11 adjustmentsData:(id)arg12 localPrivateMetadataFileURL:(id)arg13 error:(id)arg14;

@end
