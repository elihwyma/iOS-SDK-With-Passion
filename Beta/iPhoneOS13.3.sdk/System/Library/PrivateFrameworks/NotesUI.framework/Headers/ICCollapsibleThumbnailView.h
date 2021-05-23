/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <NotesUI/ICCollapsibleBaseView.h>

@class ICImageAndMovieThumbnailView, UIImage;

@interface ICCollapsibleThumbnailView : ICCollapsibleBaseView

{
    _Bool _showAsMovie;
    struct UIImage *_image;
    unsigned long long _imageScaling;
    ICImageAndMovieThumbnailView *_thumbnailView;
}

@property (retain, nonatomic) ICImageAndMovieThumbnailView *thumbnailView;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) unsigned long long imageScaling;
@property (nonatomic) _Bool showAsMovie;

- (_Bool)accessibilityIgnoresInvertColors;
- (void)performSetup;

@end
