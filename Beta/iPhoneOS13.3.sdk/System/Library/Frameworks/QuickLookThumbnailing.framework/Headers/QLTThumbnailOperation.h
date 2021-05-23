/*
 Image: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

#import <QuickLookThumbnailing/QLThumbnailRequestOperation.h>

@class NSError, UIImage;

@interface QLTThumbnailOperation : QLThumbnailRequestOperation

{
    UIImage *_image;
    NSError *_error;
    CDUnknownBlockType _needsAdditionalTime;
}

@property (readonly) UIImage *image;
@property (readonly) NSError *error;
@property (copy) CDUnknownBlockType needsAdditionalTime;

@end
