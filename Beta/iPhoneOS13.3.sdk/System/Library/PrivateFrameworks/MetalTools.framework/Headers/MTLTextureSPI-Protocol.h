/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/Swift-Protocol.h>

@protocol MTLTextureSPI <Swift>

@property (readonly) struct __IOSurface *iosurface;
@property (readonly) unsigned long long iosurfacePlane;
@property (readonly) unsigned long long rotation;
@property (readonly) _Bool isCompressed;
@property (readonly) long long compressionFeedback;
@property (readonly) unsigned long long uniqueIdentifier;
@property (nonatomic) unsigned long long resourceIndex;
@property (readonly) unsigned int swizzleKey;
@property (readonly) unsigned long long numFaces;
@property (readonly) _Bool isDrawable;
@property (readonly) unsigned long long sparseSurfaceDefaultValue;

@end
