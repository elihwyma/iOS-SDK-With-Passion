/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class AVTUINSURL, NSURL, UIImage;

@interface AVTStickerResource : NSObject

{
    UIImage *_image;
    AVTUINSURL *_internalURL;
    struct CGRect _clippingRect;
}

@property (retain, nonatomic) AVTUINSURL *internalURL;
@property (nonatomic, readonly) UIImage *image;
@property (retain, nonatomic) NSURL *URL;
@property (nonatomic, readonly) struct CGRect clippingRect;

- (id)initWithImage:(id)arg1 URL:(id)arg2 clippingRect:(struct CGRect)arg3;

@end
