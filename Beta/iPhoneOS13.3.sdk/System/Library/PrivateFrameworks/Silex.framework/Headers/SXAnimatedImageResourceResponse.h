/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXImageResourceResponse.h>

@class SXAnimatedImage;

@interface SXAnimatedImageResourceResponse : SXImageResourceResponse

{
    SXAnimatedImage *_animatedImage;
}

@property (retain, nonatomic) SXAnimatedImage *animatedImage;

@end
