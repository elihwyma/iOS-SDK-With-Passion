/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSObject.h>

@interface ICDocCamPDFGenerator : NSObject

+ (id)fileManager;
+ (id)fileQueue;
+ (id)rootPDFFolderPath;
+ (id)rootPDFFolderPathForPWAttachments;
+ (id)folderPathForAttachmentIdentifier:(id)arg1 passwordProtected:(_Bool)arg2;
+ (id)folderPathForAttachment:(id)arg1;
+ (id)versionFolderPathForAttachment:(id)arg1;
+ (id)versionPDFPathForAttachment:(id)arg1;
+ (void)deletePDFFolderIfExistsForAttachment:(id)arg1;
+ (id)pdfURLForAttachment:(id)arg1;
+ (id)blockingGeneratePDFURLForAttachment:(id)arg1 withProgress:(id)arg2 error:(id *)arg3;
+ (id)syncGeneratorQueue;
+ (void)deletePDFForAttachmentIfExists:(id)arg1;
+ (void)performPDFGenerationWithGenerator:(id)arg1 galleryModel:(id)arg2 progress:(id)arg3;
+ (void)createEmptyPDFFileAtURLIFNecessaryForAttachment:(id)arg1;
+ (void)deleteAllDocCamPDFs;
+ (void)deleteAllDocCamPasswordProtectedPDFs;
+ (void)generatePDFsIfNecessaryForGalleryAttachments:(id)arg1 displayWindow:(struct UIWindow *)arg2 presentingViewController:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (id)blockingGeneratePDFDataForAttachment:(id)arg1 withProgress:(id)arg2 queue:(id)arg3 error:(id *)arg4;

@end
