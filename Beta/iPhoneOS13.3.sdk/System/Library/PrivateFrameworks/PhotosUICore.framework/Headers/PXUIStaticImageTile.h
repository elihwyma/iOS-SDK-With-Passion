/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, PXImageUIView, PXImageViewSpec, UIView;

@interface PXUIStaticImageTile : NSObject <Swift>

{
    PXImageViewSpec *_spec;
    PXImageUIView *_imageView;
}

@property (retain, nonatomic) PXImageViewSpec *spec;
@property (nonatomic, readonly) PXImageUIView *imageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIView *view;

- (void)prepareForReuse;
- (id)initWithImage:(id)arg1;
- (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id)arg2;
- (void)becomeReusable;

@end
