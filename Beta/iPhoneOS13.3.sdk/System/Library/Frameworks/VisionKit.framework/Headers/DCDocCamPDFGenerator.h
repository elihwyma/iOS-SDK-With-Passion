/*
 Image: /System/Library/Frameworks/VisionKit.framework/VisionKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface DCDocCamPDFGenerator : NSObject

+ (void)initialize;
+ (void)applicationWillTerminate:(id)arg1;
+ (id)fileManager;
+ (id)fileQueue;
+ (id)rootPDFFolderPath;
+ (id)syncGeneratorQueue;
+ (void)deleteAllDocCamPDFs;
+ (id)folderPathForDocumentInfoCollectionIdentifier:(id)arg1;
+ (id)folderPathForDocumentInfoCollection:(id)arg1;
+ (id)versionfolderPathForDocumentInfoCollection:(id)arg1;
+ (id)versionPDFPathForDocumentInfoCollection:(id)arg1;
+ (void)createTmpDirectory:(id)arg1;
+ (void)deletePDFFolderIfExistsForDocumentInfoCollection:(id)arg1;
+ (id)blockingGeneratepdfURLForDocumentInfoCollection:(id)arg1 imageCache:(id)arg2 withProgress:(id)arg3 error:(id *)arg4;
+ (id)pdfURLForDocumentInfoCollection:(id)arg1;
+ (void)deletePDFForDocumentInfoCollectionIfExists:(id)arg1;
+ (void)performPDFGenerationWithGenerator:(id)arg1 docInfoCollection:(id)arg2 imageCache:(id)arg3 progress:(id)arg4;
+ (void)createEmptyPDFFileAtURLIFNecessaryForDocumentInfoCollection:(id)arg1;
+ (void)generatePDFsIfNecessaryForDocumentInfoCollection:(id)arg1 imageCache:(id)arg2 displayWindow:(struct UIWindow *)arg3 presentingViewController:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;

@end
