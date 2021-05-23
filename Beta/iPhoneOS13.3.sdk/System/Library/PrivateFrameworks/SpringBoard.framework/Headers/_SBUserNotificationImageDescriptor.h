/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString, UIImage;

@interface _SBUserNotificationImageDescriptor : NSObject

{
    NSString *_imagePath;
    NSString *_catalogPath;
    NSString *_catalogKey;
    UIImage *_lazy_image;
}

@property (nonatomic, readonly) UIImage *image;

- (id)initWithImagePath:(id)arg1;
- (id)initWithImageCatalogPath:(id)arg1 catalogKey:(id)arg2;

@end
