/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <QuickLook/QLImageItemContents.h>

@class NSData;

@interface QLImageItemDataContents : QLImageItemContents

{
    NSData *_imageData;
}

@property (retain, nonatomic) NSData *imageData;

+ (_Bool)supportsSecureCoding;
+ (id)imageItemContentsWithImage:(id)arg1 imageData:(id)arg2;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
