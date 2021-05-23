/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOPDCaptionedPhoto, GEOPDPhoto, NSArray, NSString, NSURL;

@interface _GEOPlaceDataPhoto : NSObject

{
    GEOPDPhoto *_photo;
    GEOPDCaptionedPhoto *_captionedPhoto;
    NSArray *_sortedPhotoInfos;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *author;
@property (nonatomic, readonly) NSString *caption;
@property (nonatomic, readonly) NSString *licenseDescription;
@property (nonatomic, readonly) NSURL *licenseURL;
@property (nonatomic, readonly) _Bool displayFullPhotoInline;
@property (nonatomic, readonly) _Bool useGallery;
@property (nonatomic, readonly) NSString *uid;
@property (nonatomic, readonly) double sizeRatio;
@property (nonatomic, readonly) _Bool highQuality;
@property (nonatomic, readonly) _Bool businessProvided;

- (id)bestPhotoForSize:(struct CGSize)arg1 allowSmaller:(_Bool)arg2;
- (id)initWithCaptionedPhoto:(id)arg1;
- (id)initWithPhoto:(id)arg1;
- (id)largestPhoto;

@end
