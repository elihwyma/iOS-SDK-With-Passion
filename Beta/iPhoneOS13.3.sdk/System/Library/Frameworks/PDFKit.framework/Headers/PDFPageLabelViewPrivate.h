/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <Foundation/NSObject.h>

@class PDFTimer, UILabel, _UIBackdropView;

__attribute__((visibility("hidden")))
@interface PDFPageLabelViewPrivate : NSObject

{
    _UIBackdropView *backdropView;
    UILabel *label;
    PDFTimer *visibilityTimer;
}

@end
