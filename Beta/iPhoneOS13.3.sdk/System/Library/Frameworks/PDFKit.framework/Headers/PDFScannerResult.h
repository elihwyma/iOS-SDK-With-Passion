/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <Foundation/NSObject.h>

@class PDFScannerResultPrivate;

__attribute__((visibility("hidden")))
@interface PDFScannerResult : NSObject

{
    PDFScannerResultPrivate *_private;
}

- (struct CGRect)bounds;
- (_Bool)containsPoint:(struct CGPoint)arg1;
- (id)rects;
- (id)ddResult;
- (_Bool)resultIsPastDate;
- (_Bool)hasActionsForResult;
- (struct __DDHighlight *)highlightRef;
- (_Bool)containsPoint:(struct CGPoint)arg1 onPageLayer:(id)arg2;
- (_Bool)pointIsOnButton:(struct CGPoint)arg1 onPageLayer:(id)arg2;
- (id)initWithDDScannerResult:(id)arg1 foundOnPage:(id)arg2;
- (void)setHighlightRef:(struct __DDHighlight *)arg1;
- (_Bool)pointIsOnButton:(struct CGPoint)arg1;
- (void)setButtonPressed:(_Bool)arg1;

@end
