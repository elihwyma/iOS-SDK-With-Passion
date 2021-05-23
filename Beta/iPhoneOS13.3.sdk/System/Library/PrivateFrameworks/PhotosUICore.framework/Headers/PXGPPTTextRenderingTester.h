/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class PXGPPTStringsLayout, PXGStringTextureProvider;

@interface PXGPPTTextRenderingTester : NSObject

{
    PXGStringTextureProvider *_stringTextureProvider;
    PXGPPTStringsLayout *_stringsLayout;
    CDUnknownBlockType _textureProviderDidProvideCGImageHandler;
}

@property (retain, nonatomic) PXGStringTextureProvider *stringTextureProvider;
@property (retain, nonatomic) PXGPPTStringsLayout *stringsLayout;
@property (copy, nonatomic) CDUnknownBlockType textureProviderDidProvideCGImageHandler;

- (void)textureProvider:(id)arg1 didProvideNothingForRequestID:(int)arg2;
- (void)textureProvider:(id)arg1 didProvideCGImage:(struct CGImage *)arg2 orientation:(unsigned int)arg3 forRequestID:(int)arg4;
- (void)textureProvider:(id)arg1 didProvideImageData:(id)arg2 withSpecAtIndex:(long long)arg3 bytesPerRow:(unsigned long long)arg4 contentsRect:(struct CGRect)arg5 forRequestID:(int)arg6;
- (void)textureProvider:(id)arg1 didProvidePixelBuffer:(struct __CVBuffer *)arg2 orientationTransform:(struct CGAffineTransform)arg3 forRequestID:(int)arg4;
- (void)textureProvider:(id)arg1 didProvidePayload:(id)arg2 forRequestID:(int)arg3;
- (void)textureProviderNeedsToRegisterToDisplayLinkUpdates:(id)arg1;
- (void)textureProviderNeedsToUnregisterFromDisplayLinkUpdates:(id)arg1;
- (void)runRenderTextTestWithOptions:(id)arg1 latencyMeter:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 failureHandler:(CDUnknownBlockType)arg4;

@end
