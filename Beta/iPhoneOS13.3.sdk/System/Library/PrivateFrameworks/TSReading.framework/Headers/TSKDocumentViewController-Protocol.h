/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@class NSArray;

@protocol TSKDocumentViewController

@property (retain, nonatomic, readonly) id documentRoot;
@property (nonatomic, readonly) _Bool isCJKEnabled;
@property (nonatomic, readonly) NSArray *CJKLanguages;
@property (nonatomic, readonly) _Bool isBiDiEnabled;
@property (nonatomic, readonly) NSArray *bidiLanguages;
@property (nonatomic, readonly) NSArray *listLanguages;

- (unsigned short)inPrintPreviewMode;
- (unsigned short)inFindReplaceMode;
- (unsigned short)toolsControllerIsVisible;
- (unsigned short)insertControllerIsVisible;
- (unsigned short)showInsertPopoverFromRect:popoverType:withDoneButton: /* Error: Ran out of types for this method. */;
- (unsigned short)isInspectorVisible;

@end
