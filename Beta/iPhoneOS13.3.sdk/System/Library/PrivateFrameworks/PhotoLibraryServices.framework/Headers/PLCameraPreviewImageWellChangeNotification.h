/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLChangeNotification.h>

@class NSString, UIImage;

@interface PLCameraPreviewImageWellChangeNotification : PLChangeNotification

{
    UIImage *_image;
    NSString *_uuid;
}

@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) NSString *assetUUID;

+ (id)notification;

- (id)init;
- (id)description;
- (id)name;
- (id)object;
- (id)userInfo;
- (id)_init;

@end
