/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLEditSource.h>

@class PLVideoEditSource;

@interface PLLivePhotoEditSource : PLEditSource

{
    PLEditSource *_photoEditSource;
    PLVideoEditSource *_videoEditSource;
}

@property (nonatomic, readonly) PLEditSource *photoEditSource;
@property (nonatomic, readonly) PLVideoEditSource *videoEditSource;

+ (id)livePhotoSourceWithPhotoURL:(id)arg1 videoComplementURL:(id)arg2;

- (id)initWithPhotoSource:(id)arg1 videoComplement:(id)arg2;
- (id)initWithSubstandardPhotoSource:(id)arg1 videoComplement:(id)arg2;
- (id)_initWithPhotoSource:(id)arg1 videoComplement:(id)arg2;

@end
