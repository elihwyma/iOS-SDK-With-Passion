/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <QuickLook/QLImageItemContents.h>

@class NSURL;

@interface QLImageItemURLContents : QLImageItemContents

{
    NSURL *_imageURL;
}

@property (copy, nonatomic) NSURL *imageURL;

+ (_Bool)supportsSecureCoding;
+ (id)imageItemContentsWithImage:(id)arg1 imageURL:(id)arg2;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
