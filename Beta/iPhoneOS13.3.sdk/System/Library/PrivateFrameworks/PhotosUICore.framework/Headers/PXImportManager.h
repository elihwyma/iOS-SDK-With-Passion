/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSProgress;

@interface PXImportManager : NSObject

{
    NSMapTable *_progressToProvidersMapping;
    NSMapTable *_progressToCompletionHandlerMapping;
    NSMapTable *_progressToSharedSourcesCompletionHandlerMapping;
    NSMapTable *_progressToErrorsMapping;
    NSMapTable *_providersToImportedResultObjectMapping;
    NSProgress *_progress;
}

@property (nonatomic, readonly) NSProgress *progress;

+ (id)defaultManager;
+ (id)supportedTypeIdentifiers;

- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)importDragItems:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)importSharedSourcesForDragItems:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleCompletionOfImportForItemProvider:(id)arg1 resultObject:(id)arg2 progress:(id)arg3 error:(id)arg4;
- (void)_addProgress:(id)arg1 forItemProviders:(id)arg2 sharedSourceCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_addProgress:(id)arg1 forItemProviders:(id)arg2 assetCreationCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_addProgress:(id)arg1 forItemProviders:(id)arg2;
- (id)_assetsForImportedItemProviders:(id)arg1;
- (id)_sourcesForItemProviders:(id)arg1;
- (void)fetchAssetsFromDrop:(id)arg1 importIfNeeded:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;

@end
