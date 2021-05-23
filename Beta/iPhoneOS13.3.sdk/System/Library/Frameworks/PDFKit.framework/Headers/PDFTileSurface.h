/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface PDFTileSurface : NSObject

{
    int tileId;
    int pageNumber;
    int tileSize;
    int type;
    struct __IOSurface *ioSurfaceRef;
    struct CGImage *cgImageRef;
}

- (void)releaseSurface;

@end
