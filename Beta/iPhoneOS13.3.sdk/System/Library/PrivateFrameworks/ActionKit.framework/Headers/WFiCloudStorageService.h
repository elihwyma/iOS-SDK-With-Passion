/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSProgress, NSString;

@interface WFiCloudStorageService : NSObject

{
    NSMapTable *_documentPickerCompletionTable;
    NSProgress *_progress;
}

@property (retain, nonatomic) NSMapTable *documentPickerCompletionTable;
@property (weak, nonatomic) NSProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) Class objectRepresentationClass;
@property (nonatomic, readonly) Class accessResourceClass;
@property (nonatomic, readonly) NSString *storageLocationPrefix;
@property (nonatomic, readonly) _Bool hasPublicURLs;
@property (nonatomic, readonly) _Bool supportsJumpingToSubdirectoryInUI;

+ (id)serviceName;
+ (id)containerName;
+ (id)containerIdentifier;
+ (Class)resultItemClass;
+ (void)createDocumentsDirectoryIfNecessary;
+ (id)documentsDirectoryWithError:(id *)arg1;

- (void)documentPickerWasCancelled:(id)arg1;
- (void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2;
- (void)retrieveFilesWithUserInterface:(id)arg1 initialDirectoryPath:(id)arg2 options:(unsigned long long)arg3 progress:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)saveFiles:(id)arg1 withUserInterface:(id)arg2 options:(unsigned long long)arg3 progress:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)retrieveFilesAtPath:(id)arg1 options:(unsigned long long)arg2 progress:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)saveFiles:(id)arg1 toPath:(id)arg2 options:(unsigned long long)arg3 progress:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)getSharingURLsForFiles:(id)arg1 usePublicURLs:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)deleteFiles:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)createFolderAtPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)appendText:(id)arg1 toPath:(id)arg2 options:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)searchFiles:(id)arg1 inPath:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)retrieveFilesForAppendingAtPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)presentDocumentPicker:(id)arg1 withUserInterface:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)completeOperationForDocumentPicker:(id)arg1 withFiles:(id)arg2 error:(id)arg3;

@end
