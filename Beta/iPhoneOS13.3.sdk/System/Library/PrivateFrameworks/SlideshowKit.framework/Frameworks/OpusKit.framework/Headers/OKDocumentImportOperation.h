/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusFoundation/OFNSOperation.h>

@class NSURL, OKDocument;

@interface OKDocumentImportOperation : OFNSOperation

{
    OKDocument *_document;
    NSURL *_resourceURL;
    NSURL *_importedResourceURL;
    _Bool _opaque;
    NSURL *_temporaryDownloadedMediaFileURL;
    NSURL *_temporaryTranscodedMediaFileURL;
    NSURL *_temporaryThumbnailMediaFileURL;
}

@property (retain, nonatomic) NSURL *temporaryDownloadedMediaFileURL;
@property (retain, nonatomic) NSURL *temporaryTranscodedMediaFileURL;
@property (retain, nonatomic) NSURL *temporaryThumbnailMediaFileURL;
@property (copy, nonatomic, readonly) NSURL *importedResourceURL;

- (id)init;
- (void)dealloc;
- (void)cancelOperation;
- (unsigned long long)launchOperation;
- (void)finishOperation;
- (void)cleanupOperation;
- (id)initWithDocument:(id)arg1 resourceURL:(id)arg2 importedResourceURL:(id)arg3 opaque:(_Bool)arg4;

@end
