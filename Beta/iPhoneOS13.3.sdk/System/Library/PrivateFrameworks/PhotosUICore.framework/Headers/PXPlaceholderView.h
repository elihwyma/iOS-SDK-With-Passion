/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIView.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, UIActivityIndicatorView;

@interface PXPlaceholderView : UIView <Swift>

{
    UIActivityIndicatorView *_indicator;
    _Bool _shouldShowIndicatorView;
}

@property (nonatomic) _Bool shouldShowIndicatorView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIView *view;

- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)_updateSubviews;
- (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id)arg2;
- (void)becomeReusable;

@end
