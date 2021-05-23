/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSString, NSURL, UIImage;

@interface CAMTimelapsePlaceholderResult : NSObject

{
    unsigned short _sessionIdentifier;
    NSString *_assetUUID;
    NSDate *_creationDate;
    long long _captureOrientation;
    long long _captureDevice;
    void *_previewImageSurface;
    struct CGSize _videoDimensions;
}

@property (copy, nonatomic, readonly) NSString *assetUUID;
@property (nonatomic, readonly) unsigned short sessionIdentifier;
@property (copy, nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) long long captureOrientation;
@property (nonatomic, readonly) long long captureDevice;
@property (nonatomic, readonly) struct CGSize videoDimensions;
@property (nonatomic, readonly) void *previewImageSurface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long mediaType;
@property (nonatomic, readonly) unsigned long long mediaSubtypes;
@property (nonatomic, readonly) NSString *uuid;
@property (copy, nonatomic, readonly) NSURL *persistenceURL;
@property (nonatomic, readonly) NSDate *captureDate;
@property (nonatomic, readonly) UIImage *placeholderImage;
@property (nonatomic, readonly) struct CGSize finalExpectedPixelSize;
@property (copy, nonatomic, readonly) NSDictionary *stillImageMetadata;
@property (copy, nonatomic, readonly) NSString *burstIdentifier;
@property (nonatomic, readonly) unsigned long long numberOfRepresentedAssets;
@property (nonatomic, readonly) CDStruct_1b6d18a9 duration;
@property (nonatomic, readonly) NSString *irisStillImageUUID;
@property (nonatomic, readonly, getter=isExpectingPairedVideo) _Bool expectingPairedVideo;
@property (nonatomic, readonly) NSURL *irisVideoPersistenceURL;
@property (nonatomic, readonly) CDStruct_1b6d18a9 irisStillDisplayTime;

- (void)dealloc;
- (id)initWithAssetUUID:(id)arg1 captureSession:(unsigned short)arg2 creationDate:(id)arg3 captureOrientation:(long long)arg4 captureDevice:(long long)arg5 videoDimensions:(struct CGSize)arg6 previewImageSurface:(void *)arg7;

@end
