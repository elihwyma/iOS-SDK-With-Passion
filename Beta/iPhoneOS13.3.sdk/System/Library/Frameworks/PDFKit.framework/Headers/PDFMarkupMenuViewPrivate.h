/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, UIImageView, _UIBackdropView;

@protocol PDFMarkupMenuViewDelegate;

__attribute__((visibility("hidden")))
@interface PDFMarkupMenuViewPrivate : NSObject

{
    unsigned long long markupStyle;
    unsigned long long markupNoteStyle;
    id <PDFMarkupMenuViewDelegate> delegate;
    NSDictionary *menuControls;
    NSArray *activeControlKeys;
    double calloutArrowX;
    _Bool calloutArrowPointsUp;
    _UIBackdropView *backgroundView;
    _UIBackdropView *separatorBackgroundView;
    UIImageView *blurMaskView;
    UIImageView *tintMaskView;
    UIImageView *separatorMaskView;
}

@end
