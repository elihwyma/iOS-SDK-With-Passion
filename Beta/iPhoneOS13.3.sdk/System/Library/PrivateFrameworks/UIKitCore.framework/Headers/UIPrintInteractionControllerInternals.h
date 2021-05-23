/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableSet, NSURL, PKPrintSettings, PKPrinter, UIPrintInfo, UIPrintPageRenderer, UIPrintPanelViewController, UIPrintPaper, UIPrintingProgress;

__attribute__((visibility("hidden")))
@interface UIPrintInteractionControllerInternals : NSObject

{
    long long _pageCount;
    NSArray *_pageRanges;
    long long _currentPage;
    struct _NSRange _currentRange;
    long long _pageCountWithRanges;
    long long _pagesDrawn;
    UIPrintPanelViewController *_printPanelViewController;
    UIPrintingProgress *_printingProgress;
    PKPrintSettings *_printSettings;
    UIPrintInfo *_activePrintInfo;
    int _printInfoState;
    _Bool _supressNotifyDismissed;
    UIPrintPageRenderer *_formatterRenderer;
    _Bool _manualPrintPageEnabled;
    NSURL *_saveFileURL;
    NSURL *_tempPreviewFileURL;
    _Bool _showPrintingProgress;
    NSMutableSet *_previewStates;
    PKPrinter *_printer;
    UIPrintPaper *_paper;
}

@property long long pageCount;
@property (retain) NSArray *pageRanges;
@property long long pageCountWithRanges;
@property (retain) NSMutableSet *previewStates;
@property (retain) NSURL *tempPreviewFileURL;
@property (retain) PKPrinter *printer;
@property (retain) UIPrintPaper *paper;

- (id)init;

@end
