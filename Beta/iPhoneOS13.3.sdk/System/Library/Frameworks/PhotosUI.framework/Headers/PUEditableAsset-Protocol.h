/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/Swift-Protocol.h>

@class NSDictionary, NSString, PFVideoAVObjectBuilder;

@protocol PUEditableAsset <Swift>

@property (nonatomic, readonly) unsigned long long mediaSubtypes;
@property (nonatomic, readonly, getter=isHighFramerateVideo) _Bool highFramerateVideo;
@property (nonatomic, readonly, getter=isAdjusted) _Bool adjusted;
@property (nonatomic, readonly, getter=isContentAdjustmentAllowed) _Bool contentAdjustmentAllowed;
@property (nonatomic, readonly, getter=isLivePhotoVisibilityAdjustmentAllowed) _Bool livePhotoVisibilityAdjustmentAllowed;
@property (nonatomic, readonly, getter=isInPlaceVideoTrimAllowed) _Bool inPlaceVideoTrimAllowed;
@property (nonatomic, readonly) unsigned long long originalResourceChoice;
@property (nonatomic, readonly, getter=isTrimmableType) _Bool trimmableType;
@property (nonatomic, readonly) unsigned long long livePhotoVisibilityState;
@property (nonatomic, readonly) PFVideoAVObjectBuilder *videoObjectBuilder;
@property (nonatomic, readonly) unsigned long long reframeVariation;
@property (nonatomic, readonly) NSDictionary *imageProperties;
@property (nonatomic, readonly) int originalEXIFOrientation;
@property (nonatomic, readonly, getter=isResourceDownloadPossible) _Bool resourceDownloadPossible;
@property (nonatomic, readonly, getter=isCloudPhotoLibraryEnabled) _Bool cloudPhotoLibraryEnabled;
@property (copy, nonatomic, readonly) NSString *pathForOriginalImageFile;
@property (copy, nonatomic, readonly) NSString *pathForOriginalVideoFile;
@property (copy, nonatomic, readonly) NSString *pathForTrimmedVideoFile;

- (unsigned short)requestContentEditingInputWithOptions:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)cancelContentEditingInputRequest: /* Error: Ran out of types for this method. */;
- (unsigned short)isOriginalRaw;

@end
