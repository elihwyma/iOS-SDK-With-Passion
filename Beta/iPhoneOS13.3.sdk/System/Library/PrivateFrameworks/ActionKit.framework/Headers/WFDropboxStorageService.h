/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WFDropboxStorageService : NSObject

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
+ (Class)resultItemClass;

- (void)retrieveFilesAtPath:(id)arg1 options:(unsigned long long)arg2 progress:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)saveFiles:(id)arg1 toPath:(id)arg2 options:(unsigned long long)arg3 progress:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)getSharingURLsForFiles:(id)arg1 usePublicURLs:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)deleteFiles:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)createFolderAtPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)appendText:(id)arg1 toPath:(id)arg2 options:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)searchFiles:(id)arg1 inPath:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)finishRetrievalWithContentsOfFolderAtPath:(id)arg1 sessionManager:(id)arg2 retrievalHandler:(CDUnknownBlockType)arg3;

@end
