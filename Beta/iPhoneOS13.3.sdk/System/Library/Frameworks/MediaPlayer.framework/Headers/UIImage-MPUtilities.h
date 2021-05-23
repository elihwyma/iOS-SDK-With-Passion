/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIKit/UIImage.h>

@class NSURL;

@interface UIImage (MPUtilities)

@property (nonatomic, readonly) NSURL *artworkCatalogBackingFileURL;

- (id)initWithContentsOfExactFilePath:(id)arg1;
- (id)imageWithEtchedBorderOfColor:(id)arg1 radius:(double)arg2;
- (id)imageWithShadow:(id)arg1;

@end
