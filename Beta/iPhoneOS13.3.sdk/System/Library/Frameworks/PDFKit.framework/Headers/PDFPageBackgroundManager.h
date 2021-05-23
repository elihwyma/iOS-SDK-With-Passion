/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <Foundation/NSObject.h>

@class PDFPageBackgroundManagerPrivate;

__attribute__((visibility("hidden")))
@interface PDFPageBackgroundManager : NSObject

{
    PDFPageBackgroundManagerPrivate *_private;
}

- (void)dealloc;
- (void)cancel;
- (void)_update;
- (void)_cleanup;
- (id)initWithDelegate:(id)arg1 andRenderingProperties:(id)arg2;
- (void)updateActivePageIndex:(unsigned long long)arg1;
- (void)willForceUpdate;
- (void)forceUpdateActivePageIndex:(unsigned long long)arg1 withMaxDuration:(double)arg2;
- (id)backgroundImageForPageIndex:(unsigned long long)arg1 withFoundQuality:(int *)arg2;
- (void)didInsertPageAtIndex:(unsigned long long)arg1;
- (void)didRemovePageAtIndex:(unsigned long long)arg1;
- (void)didSwapPageAtIndex:(unsigned long long)arg1 withIndex:(unsigned long long)arg2;
- (void)_drawPageImage:(unsigned long long)arg1 forQuality:(int)arg2;
- (void)_shiftImagesAtIndex:(unsigned long long)arg1 downwards:(_Bool)arg2;
- (_Bool)_findPageIndexNeedingUpdate:(unsigned long long *)arg1 forQuality:(int *)arg2;
- (_Bool)_expectedQualityIndexForPageIndex:(unsigned long long)arg1 forQuality:(int *)arg2;
- (_Bool)drawProgressCallback;
- (void)forceSetBackgroundImage:(id)arg1 forPageIndex:(unsigned long long)arg2;

@end
