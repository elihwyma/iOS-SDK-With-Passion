/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSString, UIDocumentPickerViewController, _SFActivityItemProviderCollection, _SFDownload;

@protocol _SFSaveToFilesOperationDelegate;

@interface _SFSaveToFilesOperation : NSObject

{
    _SFActivityItemProviderCollection *_collection;
    NSString *_containerDirectoryPath;
    UIDocumentPickerViewController *_documentPickerViewController;
    CDUnknownBlockType _downloadPlaceholderCompletionHandler;
    CDUnknownBlockType _prepareDownloadPlaceholderHandler;
    _SFDownload *_download;
    id <_SFSaveToFilesOperationDelegate> _delegate;
}

@property (weak, nonatomic) id <_SFSaveToFilesOperationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)start;
- (void)documentPickerWasCancelled:(id)arg1;
- (void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2;
- (id)initWithActivityItemProviderCollection:(id)arg1;
- (void)_showDocumentPickerForFileURL:(id)arg1 sourceURL:(id)arg2;
- (void)_finishWithURL:(id)arg1;
- (void)_copyFileData:(CDUnknownBlockType)arg1;
- (id)_suggestedFilenameFromWebView;
- (id)_temporaryFileWithName:(id)arg1;
- (void)importPlaceholderForDownload:(id)arg1 fromURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
