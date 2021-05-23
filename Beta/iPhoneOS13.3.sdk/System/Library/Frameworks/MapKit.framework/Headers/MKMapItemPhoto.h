/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@protocol GEOMapItemPhoto;

__attribute__((visibility("hidden")))
@interface MKMapItemPhoto : NSObject

{
    NSString *_title;
    NSString *_subtitle;
    id <GEOMapItemPhoto> _geoMapItemPhoto;
}

@property (retain, nonatomic) id <GEOMapItemPhoto> geoMapItemPhoto;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic, readonly) NSString *license;
@property (nonatomic, readonly) NSURL *largestPhotoURL;
@property (nonatomic, readonly) NSString *photoID;
@property (nonatomic, readonly) _Bool useGallery;
@property (nonatomic, readonly) long long format;
@property (nonatomic, readonly) _Bool displayFullPhotoInline;

- (id)initWithPictureItem:(id)arg1;
- (id)initWithGeoMapItemPhoto:(id)arg1;
- (id)urlForBestPhotoForSize:(struct CGSize)arg1;
- (id)initWithGeoMapItemPhoto:(id)arg1 title:(id)arg2 subtitle:(id)arg3;

@end
