/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSData, NSString, NSURL, WKWebView, _SFQuickLookDocument;

@interface _SFWebArchiveProvider : NSObject

{
    _SFQuickLookDocument *_quickLookDocument;
    NSData *_webArchiveData;
    NSString *_cachedWebViewTitle;
    NSURL *_cachedWebViewURL;
    WKWebView *_webView;
}

@property (weak, nonatomic, readonly) WKWebView *webView;
@property (nonatomic, readonly) NSString *suggestedFilenameWithExtension;
@property (nonatomic, readonly) NSString *suggestedFilenameWithoutExtension;
@property (nonatomic, readonly) _Bool canGenerateWebArchive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithWebView:(id)arg1;
- (void)generateWebArchiveWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_suggestedFilenameWithoutExtension;
- (id)_webViewUTI;
- (id)_quickLookDocument;
- (id)dataForQuickLookDocument:(id)arg1;
- (id)suggestedFileNameForQuickLookDocument:(id)arg1;
- (id)suggestedFileExtensionForQuickLookDocument:(id)arg1;

@end
