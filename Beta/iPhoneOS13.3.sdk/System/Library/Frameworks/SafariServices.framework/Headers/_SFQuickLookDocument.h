/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class LSDocumentProxy, NSString, NSURL;

@protocol _SFQuickLookDocumentSource;

@interface _SFQuickLookDocument : NSObject

{
    LSDocumentProxy *_documentProxy;
    _Bool _needsQuickLookDocumentView;
    NSString *_savedPath;
    NSString *_savedPathWithProperExtension;
    _Bool _shouldDeleteSavedPath;
    _Bool _shouldDeleteSavedPathWithProperExtension;
    NSString *_fileName;
    NSString *_mimeType;
    NSString *_uti;
    NSURL *_sourceURL;
    id <_SFQuickLookDocumentSource> _documentSource;
}

@property (retain, nonatomic) LSDocumentProxy *documentProxy;
@property (copy, nonatomic) NSString *savedPath;
@property (copy, nonatomic) NSString *savedPathWithProperExtension;
@property (copy, nonatomic) NSString *fileName;
@property (copy, nonatomic) NSString *mimeType;
@property (copy, nonatomic) NSString *uti;
@property (nonatomic, readonly) _Bool needsQuickLookDocumentView;
@property (copy, nonatomic, readonly) NSURL *savedURLWithProperExtension;
@property (nonatomic, readonly) unsigned long long fileSize;
@property (copy, nonatomic, readonly) NSString *inferredUTI;
@property (copy, nonatomic, readonly) NSString *localizedType;
@property (retain, nonatomic) NSURL *sourceURL;
@property (nonatomic, readonly) _Bool shouldUnzipByUIDocumentInteractionController;
@property (weak, nonatomic) id <_SFQuickLookDocumentSource> documentSource;

+ (_Bool)_hasSuitableApplicationForOpeningDocument:(id)arg1;

- (void)dealloc;
- (id)initWithFileName:(id)arg1 mimeType:(id)arg2 uti:(id)arg3 needsQuickLookDocumentView:(_Bool)arg4;
- (void)saveToFileIfNeeded;
- (void)addQuickLookPrintSettingsToPrintInfo:(id)arg1;
- (void)setSavedPath:(id)arg1 shouldDelete:(_Bool)arg2;
- (void)_deleteSavedPathIfNecessary;
- (void)_deleteSavedPathWithProperExtensionIfNecessary;
- (void)setSavedPathWithProperExtension:(id)arg1 shouldDelete:(_Bool)arg2;
- (void)setFileNameForPDFDocument:(id)arg1;

@end
