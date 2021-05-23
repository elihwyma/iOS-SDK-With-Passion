/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/MKMapItemMetadataRequest.h>

@class GEOPhotoInfo;

@interface MKMapItemMetadataImageRequest : MKMapItemMetadataRequest

{
    GEOPhotoInfo *_info;
    CDUnknownBlockType _imageHandler;
}

@property (copy, nonatomic) CDUnknownBlockType imageHandler;
@property (retain, nonatomic) GEOPhotoInfo *info;

+ (id)requestWithMapItem:(id)arg1 info:(id)arg2;

- (void)handleError:(id)arg1;
- (id)url;
- (void)handleData:(id)arg1;

@end
