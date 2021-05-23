/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/Swift-Protocol.h>

@class TSKDocumentRoot;

@protocol TSDInteractiveCanvasControllerDelegate <Swift>

@property (retain, nonatomic, readonly) TSKDocumentRoot *documentRoot;
@property (nonatomic, readonly) _Bool isCanvasInteractive;
@property (nonatomic, readonly) _Bool isPrintingCanvas;
@property (nonatomic, readonly) _Bool spellCheckingSupported;
@property (nonatomic, readonly) _Bool spellCheckingSuppressed;
@property (nonatomic, readonly) _Bool shouldResizeCanvasToScrollView;
@property (nonatomic, readonly) _Bool shouldClipToScrollViewBoundsInVisibleBounds;
@property (nonatomic, readonly) _Bool shouldShowTextOverflowGlyphs;
@property (nonatomic, readonly) _Bool shouldShowInstructionalText;
@property (nonatomic, readonly) _Bool shouldPopKnobsOutsideEnclosingScrollView;
@property (nonatomic, readonly) struct CGSize sizeOfScrollViewEnclosingCanvas;
@property (nonatomic, readonly) _Bool allowEditMenuToAppear;
@property (nonatomic, readonly) _Bool allowTextEditingToBegin;

@end
