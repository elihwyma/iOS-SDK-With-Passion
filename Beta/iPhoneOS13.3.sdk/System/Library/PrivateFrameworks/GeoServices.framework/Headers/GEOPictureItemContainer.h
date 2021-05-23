/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSArray;

@interface GEOPictureItemContainer : NSObject

{
    NSArray *_pictureItems;
    _Bool _allowFullScreenPhoto;
}

@property (nonatomic, readonly) NSArray *pictureItems;
@property (nonatomic, readonly) _Bool allowFullScreenPhoto;

- (id)init;
- (id)initWithPictureItemContainer:(id)arg1;
- (id)initWithPictureItems:(id)arg1 allowFullScreenPhoto:(_Bool)arg2;

@end
