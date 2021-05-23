/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSError, NSNumber, NSProgress, NSString, PICompositionController, PLEditSource;

@interface PXStaticEditSourceLoader : NSObject

{
    PLEditSource *_editSource;
    PLEditSource *_overcaptureEditSource;
    PICompositionController *_compositionController;
    PICompositionController *_originalCompositionController;
    long long _baseVersion;
    NSProgress *_progress;
    NSError *_error;
    NSString *_contentIdentifier;
    NSString *_livePhotoPairingIdentifier;
}

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

- (void)beginLoading;
- (id)initWithEditSource:(id)arg1 compositionController:(id)arg2 baseVersion:(long long)arg3 contentIdentifier:(id)arg4;

@end
