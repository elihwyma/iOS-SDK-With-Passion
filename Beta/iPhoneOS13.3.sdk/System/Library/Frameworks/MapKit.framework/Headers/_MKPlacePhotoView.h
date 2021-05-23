/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/UIScrollView.h>

#import <MapKit/Swift-Protocol.h>

@class MKMapItemPhoto, MKPlacePhotosView, NSString, NSURLSessionTask, UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface _MKPlacePhotoView : UIScrollView <Swift>

{
    _Bool _isZoomed;
    MKMapItemPhoto *_photo;
    MKPlacePhotosView *_viewer;
    NSURLSessionTask *_task;
    _Bool _hasLoadedFullPhoto;
    UIImageView *_imageView;
    UIImage *_thumbnail;
}

@property (nonatomic, readonly) UIImageView *imageView;
@property (retain, nonatomic) UIImage *thumbnail;
@property (nonatomic) _Bool hasLoadedFullPhoto;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)setFrame:(struct CGRect)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)toggleBackground;
- (void)zoomToPoint:(id)arg1;
- (void)urlRequestFinished:(id)arg1 withError:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 photo:(id)arg2 viewer:(id)arg3;
- (void)loadFullPhoto;
- (void)unloadFullPhoto;

@end
