/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLManagedAlbum.h>

@class NSData, NSString;

@interface PLProjectAlbum : PLManagedAlbum

@property (copy, nonatomic) NSData *projectData;
@property (copy, nonatomic) NSString *projectDocumentType;
@property (copy, nonatomic) NSString *projectExtensionIdentifier;
@property (copy, nonatomic) NSString *projectRenderUuid;

+ (id)entityName;
+ (id)validKindsForPersistence;
+ (id)insertIntoPhotoLibrary:(id)arg1 withUUID:(id)arg2 documentType:(id)arg3 projectExtensionIdentifier:(id)arg4;
+ (_Bool)cleanupOrphanedProjectPreviewImagesInLibrary:(id)arg1 error:(id *)arg2;

- (void)awakeFromInsert;
- (void)prepareForDeletion;
- (void)willSave;
- (id)payloadForChangedKeys:(id)arg1;
- (_Bool)canPerformEditOperation:(unsigned long long)arg1;
- (id)projectPreviewImageData;
- (id)duplicateProjectPreviewImageData:(id)arg1 error:(id *)arg2;
- (_Bool)setProjectPreviewImageData:(id)arg1 error:(id *)arg2;
- (id)_previewImageFilename;

@end
