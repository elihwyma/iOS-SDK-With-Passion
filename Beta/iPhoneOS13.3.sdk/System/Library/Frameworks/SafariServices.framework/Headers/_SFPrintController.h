/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, SFPrintQueueItem, UIPrintInfo, UIPrintInteractionController, WBUPrintPageRenderer, WKWebView, _SFReaderController;

@protocol _SFDialogPresenting, _SFPrintControllerDelegate;

@interface _SFPrintController : NSObject

{
    UIPrintInfo *_cachedPrintInfo;
    WBUPrintPageRenderer *_cachedPrintPageRenderer;
    UIPrintInteractionController *_printInteractionController;
    NSString *_urlString;
    NSString *_pageTitle;
    NSString *_loadingDialogTitle;
    NSMutableArray *_printQueue;
    SFPrintQueueItem *_currentItem;
    _Bool _hasReservedPrintInteractionController;
    _Bool _suppressingPrintUI;
    WKWebView *_webView;
    _SFReaderController *_readerController;
    id <_SFDialogPresenting> _dialogPresenter;
    id <_SFPrintControllerDelegate> _delegate;
}

@property (weak, nonatomic) WKWebView *webView;
@property (weak, nonatomic) _SFReaderController *readerController;
@property (weak, nonatomic) id <_SFDialogPresenting> dialogPresenter;
@property (weak, nonatomic) id <_SFPrintControllerDelegate> delegate;
@property (nonatomic, readonly) WBUPrintPageRenderer *printRenderer;
@property (nonatomic, readonly) UIPrintInfo *printInfo;
@property (nonatomic, readonly) NSString *suggestedPDFFileName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)isDisplayingPrintUI;

- (id)init;
- (void)dealloc;
- (id)printInteractionControllerParentViewController:(id)arg1;
- (void)printInteractionControllerDidFinish;
- (void)preparePrintInteractionControllerForUsage:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)clearQueue;
- (void)_preparePrintInteractionControllerForUsage:(long long)arg1 onlyIfLoaded:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_shouldPrintWhileLoadingForUsage:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updatePrintInfo;
- (void)_didFinishPrintingCurrentItemWithResult:(long long)arg1 fromPrintInteractionControllerCompletion:(_Bool)arg2;
- (void)handleNextPrintRequest;
- (void)_enqueuePrintItem:(id)arg1;
- (_Bool)reservePrintInteractionController;
- (id)_dequeuePrintItem;
- (void)_printCurrentItem;
- (void)_shouldAllowBlockedPrintWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)presentingViewControllerForPrintPageRenderer:(id)arg1;
- (void)printFrame:(id)arg1 initiatedByWebContent:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getPDFDataForUsage:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)resetPrintUISuppression;

@end
