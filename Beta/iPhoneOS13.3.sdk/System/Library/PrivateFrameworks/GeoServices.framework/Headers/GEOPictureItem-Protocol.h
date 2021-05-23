/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString;

@protocol GEOMapItemPhoto;

@protocol GEOPictureItem

@property (nonatomic, readonly) id <GEOMapItemPhoto> photo;
@property (nonatomic, readonly) int pictureItemPhotoType;
@property (nonatomic, readonly) NSString *primaryText;
@property (nonatomic, readonly) NSString *secondaryText;

@end
