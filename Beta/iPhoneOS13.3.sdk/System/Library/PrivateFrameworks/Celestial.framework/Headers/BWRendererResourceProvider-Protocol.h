/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/Swift-Protocol.h>

@protocol BWRendererResourceProvider <Swift>

- (unsigned short)provideStreamingCVAFilterRenderer;
- (unsigned short)provideCoreImageFilterRenderer;
- (unsigned short)provideStillImageMetalSDOFRenderer;
- (unsigned short)provideStillImageMetalBlurMapRenderer;
- (unsigned short)provideMetalFilterRenderer;
- (unsigned short)provideColorLookupCache;

@end
