/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIViewController.h>

@class NSIndexPath, PUGridMagnifiedView;

__attribute__((visibility("hidden")))
@interface PUGridMagnifiedImageViewController : UIViewController

{
    _Bool _canShowFullScreen;
    id _delegate;
    NSIndexPath *_itemIndexPath;
    double _magnifiedYOffset;
    PUGridMagnifiedView *_magnifiedView;
    double _shadowRadius;
    double _shadowOpacity;
    struct CGPoint _gestureWindLocation;
    struct CGSize _imageSize;
    struct CGSize _magnifiedSize;
    struct CGSize _shadowOffset;
    struct CGPoint _lastLocation;
    struct CGRect _itemWindFrame;
    struct CGRect _trackingWindFrame;
    struct UIEdgeInsets _magnifiedDragEdgeInsets;
}

@property (retain, nonatomic) PUGridMagnifiedView *magnifiedView;
@property (nonatomic) struct CGPoint lastLocation;
@property (weak, nonatomic) id delegate;
@property (nonatomic) struct CGPoint gestureWindLocation;
@property (retain, nonatomic) NSIndexPath *itemIndexPath;
@property (nonatomic) struct CGRect itemWindFrame;
@property (nonatomic, readonly) _Bool canShowFullScreen;
@property (nonatomic) struct CGRect trackingWindFrame;
@property (nonatomic) double magnifiedYOffset;
@property (nonatomic) struct UIEdgeInsets magnifiedDragEdgeInsets;
@property (nonatomic) struct CGSize imageSize;
@property (nonatomic) struct CGSize magnifiedSize;
@property (nonatomic) struct CGSize shadowOffset;
@property (nonatomic) double shadowRadius;
@property (nonatomic) double shadowOpacity;

- (id)initWithDelegate:(id)arg1;
- (void)loadView;
- (void)prepareForRelease;
- (void)beginMagnificationAnimated:(_Bool)arg1;
- (void)continueMagnification;
- (id)installMagnifiedView;
- (void)setupMagnifiedView;
- (void)hideMagnifiedThumbnailWithAnimation:(_Bool)arg1;
- (_Bool)gestureInNewLocation;
- (_Bool)isValidMagnifyLocation:(struct CGPoint)arg1;
- (id)imageForMagnifyLocation:(struct CGPoint)arg1;
- (id)imageForIndexPath:(id)arg1;
- (struct CGRect)magnifiedImageWindFrame;

@end
