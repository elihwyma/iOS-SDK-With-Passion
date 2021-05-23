/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSString;

@protocol GEOMapItemPhoto;

@interface GEOPictureItem : NSObject

{
    id <GEOMapItemPhoto> _photo;
    int _pictureItemPhotoType;
    NSString *_primaryText;
    NSString *_secondaryText;
}

@property (nonatomic, readonly) id <GEOMapItemPhoto> photo;
@property (nonatomic, readonly) int pictureItemPhotoType;
@property (nonatomic, readonly) NSString *primaryText;
@property (nonatomic, readonly) NSString *secondaryText;

- (id)init;
- (id)initWithPictureItem:(id)arg1;
- (id)initWithPhoto:(id)arg1 pictureItemPhotoType:(int)arg2 primaryText:(id)arg3 secondaryText:(id)arg4;

@end
