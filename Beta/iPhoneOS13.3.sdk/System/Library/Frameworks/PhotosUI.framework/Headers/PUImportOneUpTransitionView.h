/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUImportOneUpCell.h>

@class NSArray, PUImportOneUpCellBadgeView, PXImportMediaProvider, UIImage;

__attribute__((visibility("hidden")))
@interface PUImportOneUpTransitionView : PUImportOneUpCell

{
    UIImage *_startingImage;
    PXImportMediaProvider *_mediaProvider;
    PUImportOneUpCellBadgeView *_badgeView;
    NSArray *_badgeViewOffsetConstraints;
    double _initialPhotoViewAlpha;
    double _targetPhotoViewAlpha;
    struct CGRect _initialFrame;
    struct CGRect _targetFrame;
}

@property (retain, nonatomic) UIImage *startingImage;
@property (retain, nonatomic) PXImportMediaProvider *mediaProvider;
@property (nonatomic, readonly) PUImportOneUpCellBadgeView *badgeView;
@property (nonatomic, readonly) NSArray *badgeViewOffsetConstraints;
@property (nonatomic) struct CGRect initialFrame;
@property (nonatomic) struct CGRect targetFrame;
@property (nonatomic) double initialPhotoViewAlpha;
@property (nonatomic) double targetPhotoViewAlpha;

+ (double)interpolatedValueBetweenInitialValue:(double)arg1 andFinalValue:(double)arg2 atProgress:(double)arg3;

- (double)currentProgress;
- (void)setTransform:(struct CGAffineTransform)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)updateConstraints;
- (void *)contextForObservingViewModelChanges;
- (void)importOneUpCell:(id)arg1 requestedBadgeUpdateForImportItem:(id)arg2;
- (long long)importOneUpCell:(id)arg1 requestedThumbnailForImportItem:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)importOneUpCell:(id)arg1 didRequestCancellationOfThumbnailRequestWithID:(long long)arg2;
- (id)initWithImportItem:(id)arg1 startingImage:(id)arg2 mediaProvider:(id)arg3;
- (void)updateBadgeView;
- (void)updateAlphaIfNeeded;
- (void)setInitialFrame:(struct CGRect)arg1 targetFrame:(struct CGRect)arg2;
- (void)setPhotoViewInitialAlpha:(double)arg1 targetAlpha:(double)arg2;

@end
