/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/Swift-Protocol.h>

@class NSError, NSNumber, NSProgress, NSString, PICompositionController, PLEditSource;

@protocol PXEditSourceLoader <Swift>

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

- (unsigned short)beginLoading;

@end
