/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _WKPreviewControllerDataSource : NSObject

{
    struct RetainPtr<NSItemProvider> _itemProvider;
    struct RetainPtr<ARQuickLookWebKitItem> _item;
    struct URL _originatingPageURL;
    struct URL _downloadedURL;
    struct SystemPreviewController *_previewController;
    CDUnknownBlockType _completionHandler;
    NSString *_mimeType;
}

@property (copy) CDUnknownBlockType completionHandler;
@property (copy) NSString *mimeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)failWithError:(id)arg1;
- (id).cxx_construct;
- (void)finish:(struct URL)arg1;
- (void)setProgress:(float)arg1;
- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;
- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;
- (void)previewItem:(id)arg1 didReceiveMessage:(id)arg2;
- (id)initWithSystemPreviewController:(struct SystemPreviewController *)arg1 MIMEType:(id)arg2 originatingPageURL:(struct URL)arg3;

@end
