/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <Foundation/NSObject.h>

@class NSData, UIImage;

@interface GKAvatarImage : NSObject

{
    NSData *_imageData;
    UIImage *_image;
}

@property (retain, nonatomic) NSData *imageData;
@property (retain, nonatomic) UIImage *image;

- (id)initWithData:(id)arg1 useUIImage:(_Bool)arg2;
- (void)prepareForUsingUIImage:(_Bool)arg1;

@end
