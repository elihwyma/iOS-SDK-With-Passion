/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSLock;

@interface PLThumbnailCascadingDownscaleContext : NSObject

{
    NSLock *_lock;
    struct _FigCascadeContext *_portraitContext;
    struct _FigCascadeContext *_landscapeContext;
}

- (id)init;
- (void)dealloc;
- (void)discardContexts;
- (_Bool)downscaleImageSurface:(struct __IOSurface *)arg1 destinationCount:(int)arg2 sizes:(CDStruct_1ef3fb1f *)arg3 cropModes:(int *)arg4 pixelFormat:(unsigned int)arg5 bytesPerRowAlignment:(int)arg6 destinationData:(id)arg7;

@end
