/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class CIImage, NSData, NSString;

@interface PLImageContainer : NSObject

{
    void *_ioSurface;
    CIImage *_CIImage;
    struct CGSize _pixelSize;
    struct CGImage *_CGImage;
    NSData *_data;
    NSString *_uniformTypeIdentifier;
}

@property (nonatomic, readonly) struct CGSize pixelSize;
@property (nonatomic, readonly) struct CGImage *CGImage;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSString *uniformTypeIdentifier;
@property (nonatomic, readonly) void *ioSurface;

- (void)dealloc;
- (id)description;
- (id)initWithIOSurface:(struct __IOSurface *)arg1;
- (id)initWithCGImage:(struct CGImage *)arg1;
- (id)initWithCGImage:(struct CGImage *)arg1 ioSurface:(void *)arg2 CIImage:(id)arg3 backingData:(id)arg4 uniformTypeIdentifier:(id)arg5 size:(struct CGSize)arg6;
- (id)initWithPLImage:(struct NSObject *)arg1 backingData:(id)arg2 uniformTypeIdentifier:(id)arg3;
- (id)initWithPLImage:(struct NSObject *)arg1;

@end
