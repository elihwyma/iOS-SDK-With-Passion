/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <Foundation/NSObject.h>

@class PDFIconsView, PDFView, UIColor;

__attribute__((visibility("hidden")))
@interface PDFThumbnailViewPrivate : NSObject

{
    PDFView *pdfView;
    struct CGSize thumbnailSize;
    UIColor *backgroundColor;
    long long layoutMode;
    struct UIEdgeInsets contentInset;
    PDFIconsView *iconsView;
}

@end
