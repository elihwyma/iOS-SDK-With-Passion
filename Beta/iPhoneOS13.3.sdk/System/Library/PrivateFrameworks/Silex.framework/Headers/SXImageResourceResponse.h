/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXResourceResponse.h>

@class UIImage;

@interface SXImageResourceResponse : SXResourceResponse

{
    unsigned long long _imageQuality;
    UIImage *_image;
}

@property (nonatomic) unsigned long long imageQuality;
@property (retain, nonatomic) UIImage *image;

@end
