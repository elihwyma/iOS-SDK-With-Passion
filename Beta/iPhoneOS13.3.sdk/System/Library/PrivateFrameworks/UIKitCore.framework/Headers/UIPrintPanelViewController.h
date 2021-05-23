/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, PKPrinter, UINavigationController, UIPopoverController, UIPrintInteractionController, UIPrintPanelTableViewController, UIPrintPaper, UIViewController, UIWindow;

__attribute__((visibility("hidden")))
@interface UIPrintPanelViewController : NSObject

{
    UIPrintInteractionController *_printInteractionController;
    int _lastUsedPrinterIndex;
    UINavigationController *_navigationController;
    UIPrintPanelTableViewController *_tableViewController;
    UIViewController *_parentController;
    UIPopoverController *_poverController;
    UIWindow *_window;
    PKPrinter *_printer;
    _Bool _dismissed;
    _Bool _animated;
    _Bool _observingRotation;
    _Bool _canShowColor;
    CDUnknownBlockType _previewCompletionHandler;
    _Bool _contentLargerThanRollPaper;
    NSArray *_lastUsedPrinterArray;
}

@property (retain, nonatomic) PKPrinter *printer;
@property (nonatomic, readonly) long long pageCount;
@property (retain, nonatomic) NSArray *pageRanges;
@property (nonatomic) _Bool duplex;
@property (nonatomic) _Bool grayscale;
@property (nonatomic) _Bool staple;
@property (nonatomic) _Bool punch;
@property (nonatomic, readonly) NSArray *paperList;
@property (retain, nonatomic) UIPrintPaper *paper;
@property (nonatomic) long long copies;
@property (nonatomic) _Bool scaleUpDocument;
@property (nonatomic) _Bool annotationsImaged;
@property (retain, nonatomic) NSString *jobAccountID;
@property (nonatomic, readonly) _Bool showDuplex;
@property (nonatomic, readonly) _Bool showColor;
@property (nonatomic, readonly) _Bool showPageRange;
@property (nonatomic, readonly) _Bool showCopies;
@property (nonatomic, readonly) _Bool showPaper;
@property (nonatomic, readonly) _Bool showPaperSelection;
@property (nonatomic, readonly) _Bool showPrinterWarning;
@property (nonatomic, readonly) _Bool showPreview;
@property (nonatomic, readonly) _Bool showMoreOptions;
@property (nonatomic, readonly) _Bool showStaple;
@property (nonatomic, readonly) _Bool showPunch;
@property (nonatomic, readonly) _Bool showScaleUp;
@property (nonatomic, readonly) _Bool contentLargerThanRollPaper;
@property (nonatomic, readonly) _Bool showJobAccountID;
@property (nonatomic, readonly) _Bool isJobAccountIDRequired;
@property (nonatomic, readonly) _Bool hasJobAccountID;
@property (nonatomic, readonly) _Bool showAnnotationSwitch;
@property (retain) NSArray *lastUsedPrinterArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)dismissAnimated:(_Bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)cancelPrinting;
- (id)localizedPageRangeText;
- (void)startPrinting;
- (void)lookupLastUsedPrinter;
- (void)printPanelDidDisappear;
- (void)printerBrowserViewDidDisappear;
- (void)printPaperViewDidDisappear;
- (void)printRangeViewDidDisappear;
- (void)printMoreOptionsViewDidDisappear;
- (void)_printNavigationConrollerDidDismiss;
- (struct CGSize)_makeContentSizeeWithLongSize:(double)arg1 shortSize:(double)arg2;
- (void)_keyWindowWillRotate:(id)arg1;
- (struct CGSize)_getPreferredContentSize:(struct CGRect)arg1 windowFrame:(struct CGRect)arg2;
- (void)_presentInParentAnimated:(_Bool)arg1;
- (void)presentPrintPanelAnimated:(_Bool)arg1 hostingScene:(id)arg2;
- (void)dismissPrintPanel:(_Bool)arg1 animated:(_Bool)arg2;
- (id)_removeRollsFrom:(id)arg1;
- (_Bool)testIfContentLargerThanRollPaper:(id)arg1;
- (_Bool)filtersPrinters;
- (id)initWithPrintInterationController:(id)arg1 inParentController:(id)arg2;
- (void)presentPrintPanelFromRect:(struct CGRect)arg1 inView:(id)arg2 animated:(_Bool)arg3;
- (void)presentPrintPanelFromBarButtonItem:(id)arg1 animated:(_Bool)arg2;

@end
