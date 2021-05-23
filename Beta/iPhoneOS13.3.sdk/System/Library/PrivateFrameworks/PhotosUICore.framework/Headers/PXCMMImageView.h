/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIView.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, PXCMMImageViewModel, PXImageRequesterHelper, UIImageView;

@interface PXCMMImageView : UIView <Swift>

{
    UIImageView *_imageView;
    UIView *_highlightView;
    PXImageRequesterHelper *_imageRequesterHelper;
    PXCMMImageViewModel *_viewModel;
}

@property (retain, nonatomic) PXCMMImageViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_updateImage;
- (void)_updateContentsRect;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_updateImageRequestHelper;
- (void)_updateHighlighted;
- (_Bool)test_highlighted;

@end
