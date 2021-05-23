/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSDate, NSError, NSNumber, NSProgress, NSString, PHAsset, PICompositionController, PLEditSource;

@protocol OS_dispatch_queue;

@interface PXPhotoKitEditSourceLoader : NSObject

{
    unsigned long long _imageRequestID;
    _Bool _didBeginLoading;
    NSDate *_loadingStartDate;
    NSProgress *_editSourceCreationProgress;
    NSObject<OS_dispatch_queue> *_loadingQueue;
    _Bool _overcaptureSourceIsActive;
    PLEditSource *_editSource;
    PLEditSource *_overcaptureEditSource;
    PICompositionController *_compositionController;
    PICompositionController *_originalCompositionController;
    NSProgress *_progress;
    NSError *_error;
    long long _baseVersion;
    NSNumber *_loadDuration;
    NSString *_livePhotoPairingIdentifier;
    PHAsset *_asset;
}

@property (nonatomic, readonly) PHAsset *asset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSProgress *progress;
@property (nonatomic, readonly) PLEditSource *editSource;
@property (nonatomic, readonly) PLEditSource *overcaptureEditSource;
@property (nonatomic, readonly) PLEditSource *activeEditSource;
@property (copy, nonatomic, readonly) PICompositionController *compositionController;
@property (copy, nonatomic, readonly) PICompositionController *originalCompositionController;
@property (copy, nonatomic, readonly) NSString *livePhotoPairingIdentifier;
@property (nonatomic, readonly) long long baseVersion;
@property (nonatomic, readonly) NSError *error;
@property (copy, nonatomic, readonly) NSString *contentIdentifier;
@property (nonatomic, readonly) NSNumber *loadDuration;

- (id)initWithAsset:(id)arg1;
- (void)beginLoading;
- (void)_handleCancellation;
- (void)_handleContentEditingInputRequestCompletion:(id)arg1 info:(id)arg2 asset:(id)arg3;

@end
