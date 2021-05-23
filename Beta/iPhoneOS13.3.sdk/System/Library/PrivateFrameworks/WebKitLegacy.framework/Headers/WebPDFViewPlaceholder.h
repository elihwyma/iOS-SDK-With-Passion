/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <WebCore/WAKView.h>

@class NSArray, NSObject, NSString, WebDataSource;

@protocol WebPDFViewPlaceholderDelegate;

@interface WebPDFViewPlaceholder : WAKView

{
    NSString *_title;
    NSArray *_pageRects;
    NSArray *_pageYOrigins;
    struct CGPDFDocument *_document;
    WebDataSource *_dataSource;
    NSObject<WebPDFViewPlaceholderDelegate> *_delegate;
    _Bool _didFinishLoad;
    struct CGSize _containerSize;
    _Bool _didCompleteLayout;
}

@property (retain) NSArray *pageRects;
@property (retain) NSArray *pageYOrigins;
@property (retain) NSString *title;
@property NSObject<WebPDFViewPlaceholderDelegate> *delegate;
@property (readonly) struct CGPDFDocument *document;
@property (readonly) struct CGPDFDocument *doc;
@property (readonly) unsigned long long totalPages;
@property struct CGSize containerSize;
@property (nonatomic, readonly) _Bool didCompleteLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)setAsPDFDocRepAndView;
+ (id)supportedMIMETypes;
+ (Class)_representationClassForWebFrame:(id)arg1;

- (void)dealloc;
- (void)setDataSource:(id)arg1;
- (void)layout;
- (void)setDocument:(struct CGPDFDocument *)arg1;
- (void)didUnlockDocument;
- (void)clearDocument;
- (void)simulateClickOnLinkToURL:(id)arg1;
- (struct CGRect)rectForPageNumber:(unsigned long long)arg1;
- (id)documentSource;
- (void)finishedLoadingWithDataSource:(id)arg1;
- (void)receivedData:(id)arg1 withDataSource:(id)arg2;
- (void)dataSourceUpdated:(id)arg1;
- (void)receivedError:(id)arg1 withDataSource:(id)arg2;
- (void)viewWillMoveToHostWindow:(id)arg1;
- (void)viewDidMoveToHostWindow;
- (_Bool)canProvideDocumentSource;
- (void)_updateTitleForURL:(id)arg1;
- (void)_notifyDidCompleteLayout;
- (struct CGSize)_computePageRects:(struct CGPDFDocument *)arg1;
- (void)_updateTitleForDocumentIfAvailable;
- (void)_evaluateJSForDocument:(struct CGPDFDocument *)arg1;
- (void)_doPostLoadOrUnlockTasks;
- (struct CGRect)_getPDFPageBounds:(struct CGPDFPage *)arg1;

@end
