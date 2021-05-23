/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, PKPrinter, UIPrintFormatter, UIPrintInfo, UIPrintPageRenderer, UIPrintPaper, UIWindowScene;

@protocol OS_dispatch_queue, UIPrintInteractionControllerActivityDelegate, UIPrintInteractionControllerDelegate;

@interface UIPrintInteractionController : NSObject

{
    _Bool _hidesNumberOfCopies;
    _Bool _isContentManaged;
    CDUnknownBlockType _completionHandler;
    unsigned long long _backgroundTaskIdentifier;
    NSObject<OS_dispatch_queue> *_previewQueue;
    id _printState;
    id _temporaryRetainCycle;
    _Bool _showsPageRange;
    _Bool _showsPaperSelectionForLoadedPapers;
    UIPrintInfo *_printInfo;
    id <UIPrintInteractionControllerDelegate> _delegate;
    UIPrintPaper *_printPaper;
    UIPrintPageRenderer *_printPageRenderer;
    UIPrintFormatter *_printFormatter;
    id _printingItem;
    NSArray *_printingItems;
    UIWindowScene *_hostingWindowScene;
    id <UIPrintInteractionControllerActivityDelegate> _printActivityDelegate;
}

@property (nonatomic, readonly) long long pageCount;
@property (retain, nonatomic) NSArray *pageRanges;
@property (retain, nonatomic) PKPrinter *printer;
@property (retain, nonatomic) UIWindowScene *hostingWindowScene;
@property (retain, nonatomic) UIPrintPaper *paper;
@property (nonatomic) _Bool isContentManaged;
@property (weak, nonatomic) id <UIPrintInteractionControllerActivityDelegate> printActivityDelegate;
@property (retain, nonatomic) UIPrintInfo *printInfo;
@property (weak, nonatomic) id <UIPrintInteractionControllerDelegate> delegate;
@property (nonatomic) _Bool showsPageRange;
@property (nonatomic) _Bool showsNumberOfCopies;
@property (nonatomic) _Bool showsPaperSelectionForLoadedPapers;
@property (nonatomic, readonly) UIPrintPaper *printPaper;
@property (retain, nonatomic) UIPrintPageRenderer *printPageRenderer;
@property (retain, nonatomic) UIPrintFormatter *printFormatter;
@property (copy, nonatomic) id printingItem;
@property (copy, nonatomic) NSArray *printingItems;

+ (id)sharedPrintController;
+ (_Bool)isPrintingAvailable;
+ (id)printableUTIs;
+ (_Bool)canPrintURL:(id)arg1;
+ (_Bool)canPrintData:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)dismissAnimated:(_Bool)arg1;
- (id)_currentPrintInfo;
- (_Bool)_canShowColor;
- (void)_printPanelDidPresent;
- (void)_generatePrintPreview:(CDUnknownBlockType)arg1;
- (void)_printPanelWillDismiss:(_Bool)arg1;
- (void)_printPanelDidDismiss;
- (void)_cancelAllPreviewGeneration;
- (void)_updatePageCount;
- (struct CGSize)_printItemContentSize;
- (_Bool)_canShowDuplex;
- (_Bool)_canShowPageRange;
- (_Bool)_canShowCopies;
- (_Bool)_canShowPaperList;
- (_Bool)_canShowPreview;
- (_Bool)_canShowStaple;
- (_Bool)_canShowAnnotations;
- (void)_cleanPrintState;
- (_Bool)_setupPrintPanel:(CDUnknownBlockType)arg1;
- (void)_endPrintJob:(_Bool)arg1 error:(id)arg2;
- (void)_ensurePDFIsUnlockedFirstAttempt:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)_presentAnimated:(_Bool)arg1 hostingScene:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)presentAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)_printingItemIsReallyTallPDF;
- (void)_setPrintInfoState:(int)arg1;
- (_Bool)savePDFToURL:(id)arg1 showProgress:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)_canPrintPDFURL:(id)arg1;
- (_Bool)_canPrintPDFData:(id)arg1;
- (id)_paperForPDFItem:(id)arg1 withDuplexMode:(long long)arg2;
- (void)_updatePrintPaper;
- (id)_newPDFPreviewURLWithPath:(id)arg1 isContentManaged:(_Bool)arg2;
- (struct CGContext *)_newSaveContext:(id)arg1 withMediaRect:(struct CGRect)arg2;
- (void)_startPrinting;
- (void)_updateCutterBehavior;
- (struct CGSize)_printablePDFURLSize:(id)arg1;
- (struct CGSize)_printablePDFDataSize:(id)arg1;
- (double)_getCutLengthFromDelegateForPaper:(id)arg1;
- (id)_getChosenPaperFromDelegateForPaperList:(id)arg1;
- (id)_paperForContentType:(long long)arg1;
- (void)_preparePrintInfo;
- (void)_printPage;
- (id)_printPageRenderer:(id)arg1;
- (id)_printItem:(id)arg1;
- (_Bool)presentFromRect:(struct CGRect)arg1 inView:(id)arg2 animated:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)presentFromBarButtonItem:(id)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)printToPrinter:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)savePDFToURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)_canShowPunch;
- (void)_enableManualPrintPage:(_Bool)arg1;
- (void)_manualPrintPage;
- (void)_cancelManualPrintPage;

@end
