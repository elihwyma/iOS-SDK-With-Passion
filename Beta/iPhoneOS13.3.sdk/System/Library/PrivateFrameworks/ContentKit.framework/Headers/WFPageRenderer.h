/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSObject.h>

@class UIPrintPageRenderer;

@interface WFPageRenderer : NSObject

{
    _Bool _matchInputSize;
    _Bool _includeMargin;
    UIPrintPageRenderer *_renderer;
    struct CGSize _inputSize;
}

@property (nonatomic, readonly) double margin;
@property (nonatomic, readonly) UIPrintPageRenderer *renderer;
@property (nonatomic) struct CGSize inputSize;
@property (nonatomic) _Bool matchInputSize;
@property (nonatomic) _Bool includeMargin;

- (struct CGSize)sizeForPageAtIndex:(long long)arg1;
- (void)renderToPDF:(id)arg1 startingAtPage:(long long)arg2 endingAtPage:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_renderToPDF:(id)arg1 startingAtPage:(long long)arg2 endingAtPage:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)renderPDFPageIndex:(long long)arg1 pages:(long long)arg2 measuredIndicesByFormatter:(id)arg3 drawnIndicesByFormatter:(id)arg4 linkMetricsByWebView:(id)arg5 y:(double)arg6 paperSize:(struct CGSize)arg7 shouldDrawPageAtIndexHandler:(CDUnknownBlockType)arg8 completionHandler:(CDUnknownBlockType)arg9;
- (id)renderToImage;
- (void)updateRendererSize;

@end
