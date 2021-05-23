/*
 Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

#import <Foundation/NSOperation.h>

@class CLLocation, NSDate, NSError, NSObject, NSString, NSURL, PFAssetAdjustments;

@protocol OS_dispatch_queue;

@interface PFPhotoSharingOperation : NSOperation

{
    NSObject<OS_dispatch_queue> *_externalIsolation;
    NSError *_operationError;
    _Bool _operationComplete;
    _Bool _operationSuccess;
    _Bool _shouldStripLocation;
    _Bool _shouldConvertToSRGB;
    _Bool _shouldStripMetadata;
    NSURL *_outputDirectoryURL;
    NSString *_outputFilename;
    CLLocation *_customLocation;
    NSDate *_customDate;
    NSString *_customAccessibilityLabel;
    NSURL *_imageURL;
    NSURL *_resultingFileURL;
    PFAssetAdjustments *__adjustments;
}

@property (copy, nonatomic, setter=_setImageURL:) NSURL *imageURL;
@property (retain, nonatomic, setter=_setAdjustments:) PFAssetAdjustments *_adjustments;
@property (copy, nonatomic) NSURL *outputDirectoryURL;
@property (copy, nonatomic) NSString *outputFilename;
@property (nonatomic) _Bool shouldStripMetadata;
@property (nonatomic) _Bool shouldStripLocation;
@property (copy, nonatomic) CLLocation *customLocation;
@property (copy, nonatomic) NSDate *customDate;
@property (copy, nonatomic) NSString *customAccessibilityLabel;
@property (nonatomic) _Bool shouldConvertToSRGB;
@property (nonatomic, readonly) float progress;
@property (nonatomic, readonly) _Bool success;
@property (copy, nonatomic, readonly) NSURL *resultingFileURL;
@property (nonatomic, readonly) NSError *operationError;

+ (_Bool)outputSupportedForTypeIdentifier:(struct __CFString *)arg1;
+ (id)operationErrorWithCode:(long long)arg1 withDescription:(id)arg2;

- (void)main;
- (id)initWithImageURL:(id)arg1 adjustmentData:(id)arg2;

@end
