/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

@interface UIPrintPageRenderer : NSObject

{
    double _headerHeight;
    double _footerHeight;
    struct CGRect _paperRect;
    struct CGRect _printableRect;
    NSMutableArray *_printFormatters;
    struct CGContext *_printContext;
    long long _cachedPageCount;
}

@property (nonatomic) struct CGRect paperRect;
@property (nonatomic) struct CGRect printableRect;
@property (nonatomic) double headerHeight;
@property (nonatomic) double footerHeight;
@property (nonatomic, readonly) long long numberOfPages;
@property (copy) NSArray *printFormatters;

- (void)dealloc;
- (long long)_numberOfPages;
- (void)_removePrintFormatter:(id)arg1;
- (_Bool)_numberOfPagesIsCached;
- (void)addPrintFormatter:(id)arg1 startingAtPageAtIndex:(long long)arg2;
- (void)prepareForDrawingPages:(struct _NSRange)arg1;
- (void)_startSaveContext:(struct CGContext *)arg1;
- (void)_drawPage:(long long)arg1;
- (void)_endSaveContext;
- (_Bool)_startPrintContext:(id)arg1 printSettings:(id)arg2;
- (void)_endPrintContext:(id)arg1 success:(_Bool)arg2;
- (long long)_maxFormatterPage;
- (void)drawHeaderForPageAtIndex:(long long)arg1 inRect:(struct CGRect)arg2;
- (void)drawContentForPageAtIndex:(long long)arg1 inRect:(struct CGRect)arg2;
- (void)drawPrintFormatter:(id)arg1 forPageAtIndex:(long long)arg2;
- (void)drawFooterForPageAtIndex:(long long)arg1 inRect:(struct CGRect)arg2;
- (void)drawPageAtIndex:(long long)arg1 inRect:(struct CGRect)arg2;
- (id)printFormattersForPageAtIndex:(long long)arg1;

@end
