/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <NSObject.h>

@class UIImage;

@interface QLImageItemContents : NSObject

{
    UIImage *_image;
}

@property (copy, nonatomic) UIImage *image;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithImage:(id)arg1;

@end
