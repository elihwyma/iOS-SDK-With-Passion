/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUReviewAsset.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PUVideoEditReviewAsset : PUReviewAsset

{
    NSString *_trimmedVideoPath;
}

- (id)pathForTrimmedVideoFile;
- (id)initWithReviewAsset:(id)arg1 trimmedVideoPath:(id)arg2;

@end
