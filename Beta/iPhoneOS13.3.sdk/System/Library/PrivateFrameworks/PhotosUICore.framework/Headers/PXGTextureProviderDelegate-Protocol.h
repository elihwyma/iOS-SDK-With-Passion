/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@protocol PXGTextureProviderDelegate

- (unsigned short)textureProvider:didProvideNothingForRequestID: /* Error: Ran out of types for this method. */;
- (unsigned short)textureProvider:didProvideCGImage:orientation:forRequestID: /* Error: Ran out of types for this method. */;
- (unsigned short)textureProvider:didProvideImageData:withSpecAtIndex:bytesPerRow:contentsRect:forRequestID: /* Error: Ran out of types for this method. */;
- (unsigned short)textureProvider:didProvidePixelBuffer:orientationTransform:forRequestID: /* Error: Ran out of types for this method. */;
- (unsigned short)textureProvider:didProvidePayload:forRequestID: /* Error: Ran out of types for this method. */;
- (unsigned short)textureProviderNeedsToRegisterToDisplayLinkUpdates: /* Error: Ran out of types for this method. */;
- (unsigned short)textureProviderNeedsToUnregisterFromDisplayLinkUpdates: /* Error: Ran out of types for this method. */;

@end
