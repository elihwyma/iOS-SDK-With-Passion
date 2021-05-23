/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <Foundation/NSObject.h>

@class PDFPage, PDFRenderingProperties;

@protocol PDFTilePoolDelegate;

__attribute__((visibility("hidden")))
@interface TileRenderRequest : NSObject

{
    id <PDFTilePoolDelegate> target;
    PDFPage *page;
    PDFRenderingProperties *renderingProperties;
    struct CGRect tileFrame;
    double zoomFactor;
    struct CGAffineTransform matrix;
}

@end
