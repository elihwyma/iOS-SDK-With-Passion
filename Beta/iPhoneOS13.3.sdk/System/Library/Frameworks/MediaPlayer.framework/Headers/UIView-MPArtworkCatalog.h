/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIKit/UIView.h>

@class MPArtworkCatalog;

@interface UIView (MPArtworkCatalog)

@property (nonatomic, readonly) MPArtworkCatalog *artworkCatalog;

- (void)clearArtworkCatalogs;

@end
