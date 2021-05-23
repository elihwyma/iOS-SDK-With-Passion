/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUViewControllerSpec.h>

__attribute__((visibility("hidden")))
@interface PUPhotoEditToolPickerSpec : PUViewControllerSpec

{
    double _toolParentViewEdgeSpacing;
    double _horizontalToolTopSpacing;
    double _horizontalToolBottomSpacing;
    double _dotSelectionIndicatorDistance;
    double _dashSelectionIndicatorDistance;
}

@property (nonatomic) double toolParentViewEdgeSpacing;
@property (nonatomic, readonly) double interToolSpacing;
@property (nonatomic) double horizontalToolTopSpacing;
@property (nonatomic) double horizontalToolBottomSpacing;
@property (nonatomic) double dotSelectionIndicatorDistance;
@property (nonatomic) double dashSelectionIndicatorDistance;

- (id)init;

@end
