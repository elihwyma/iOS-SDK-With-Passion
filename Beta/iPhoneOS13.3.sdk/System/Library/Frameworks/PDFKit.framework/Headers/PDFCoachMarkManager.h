/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <Foundation/NSObject.h>

@class PDFCoachMarkManagerPrivate;

__attribute__((visibility("hidden")))
@interface PDFCoachMarkManager : NSObject

{
    PDFCoachMarkManagerPrivate *_private;
}

- (void)_cleanCoachMarks;
- (id)_pageLayerForPage:(id)arg1;
- (id)initWithPDFRenderingProperties:(id)arg1;
- (void)createCoachMarkForPage:(id)arg1 atFrame:(struct CGRect)arg2;
- (void)pageLayerDidAppear:(id)arg1;
- (void)pageLayerWillRemove:(id)arg1;

@end
