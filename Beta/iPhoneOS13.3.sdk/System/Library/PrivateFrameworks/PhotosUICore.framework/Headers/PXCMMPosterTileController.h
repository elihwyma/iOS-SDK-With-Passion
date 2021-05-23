/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, PXCMMPosterHeaderView, PXCMMViewModel, PXMomentShareStatusPresentation, UIView;

@interface PXCMMPosterTileController : NSObject <Swift>

{
    unsigned long long _activityType;
    PXCMMViewModel *_viewModel;
    PXMomentShareStatusPresentation *_momentShareStatusPresentation;
    PXCMMPosterHeaderView *_posterHeaderView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIView *view;

+ (double)preferredHeightForWidth:(double)arg1 traitCollection:(id)arg2 screen:(id)arg3;

- (id)init;
- (void)prepareForReuse;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_updateContent;
- (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id)arg2;
- (void)becomeReusable;
- (id)initWithActivityType:(unsigned long long)arg1 viewModel:(id)arg2 momentShareStatusPresentation:(id)arg3;
- (void)_updateStatusString;

@end
