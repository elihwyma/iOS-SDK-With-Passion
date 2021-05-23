/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <Foundation/NSObject.h>

@class AXMPixelBufferWrapper, CIImage, NSURL;

@interface AXMPipelineContextInput : NSObject

{
    long long _inputType;
    CIImage *_ciImage;
    AXMPixelBufferWrapper *_pixelBuffer;
    struct CGColorSpace *_extendedSRGBColorSpace;
    NSURL *_URL;
    struct CGSize _cachedImageURLSize;
}

@property (nonatomic, readonly) long long inputType;
@property (nonatomic, readonly) CIImage *ciImage;
@property (nonatomic, readonly) AXMPixelBufferWrapper *pixelBuffer;
@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) struct CGSize size;
@property (nonatomic, readonly) struct CGColorSpace *imageColorSpace;

+ (id)new;
+ (_Bool)supportsSecureCoding;
+ (id)inputWithCIImage:(id)arg1;
+ (id)inputWithPixelBuffer:(id)arg1;
+ (id)inputWithURL:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithURL:(id)arg1;
- (id)_initWithCIImage:(id)arg1;
- (id)_initWithPixelBuffer:(id)arg1;

@end
