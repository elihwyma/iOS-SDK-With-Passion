/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXUIRelatedPlaceholderTile.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, PXPhotoAnalysisStatusController, UIActivityIndicatorView, UILabel;

@interface PXUIRelatedActivityIndicatorTile : PXUIRelatedPlaceholderTile <Swift>

{
    _Bool _animating;
    PXPhotoAnalysisStatusController *_statusController;
    UIActivityIndicatorView *__activityIndicatorView;
    UILabel *__label;
}

@property (nonatomic, readonly) UIActivityIndicatorView *_activityIndicatorView;
@property (nonatomic, readonly) UILabel *_label;
@property (nonatomic, getter=isAnimating) _Bool animating;
@property (retain, nonatomic) PXPhotoAnalysisStatusController *statusController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)_updateLabelText;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id)arg2;
- (void)becomeReusable;

@end
