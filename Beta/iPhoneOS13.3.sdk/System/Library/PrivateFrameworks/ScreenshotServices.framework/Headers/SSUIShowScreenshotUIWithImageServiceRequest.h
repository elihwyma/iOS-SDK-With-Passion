/*
 Image: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
 */

#import <ScreenshotServices/SSUIServiceRequest.h>

@class SSUIServiceOptions, UIImage;

@interface SSUIShowScreenshotUIWithImageServiceRequest : SSUIServiceRequest

{
    UIImage *_image;
    SSUIServiceOptions *_options;
}

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) SSUIServiceOptions *options;

+ (id)entitlement;

- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;

@end
