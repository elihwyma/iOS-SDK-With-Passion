/*
 Image: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

#import <Foundation/NSObject.h>

@interface QLTBitmapFormat : NSObject

{
    unsigned int _bitmapInfo;
    unsigned long long _width;
    unsigned long long _height;
    unsigned long long _bitsPerComponent;
    unsigned long long _bitsPerPixel;
    unsigned long long _bytesPerRow;
    struct CGColorSpace *_colorSpace;
}

@property unsigned long long width;
@property unsigned long long height;
@property unsigned long long bitsPerComponent;
@property unsigned long long bitsPerPixel;
@property unsigned long long bytesPerRow;
@property unsigned int bitmapInfo;
@property (retain) struct CGColorSpace *colorSpace;

+ (_Bool)supportsSecureCoding;
+ (id)bitmapFormatWithBitmapImage:(struct CGImage *)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToFormat:(id)arg1;
- (id)initWithBitmapContext:(struct CGContext *)arg1;

@end
