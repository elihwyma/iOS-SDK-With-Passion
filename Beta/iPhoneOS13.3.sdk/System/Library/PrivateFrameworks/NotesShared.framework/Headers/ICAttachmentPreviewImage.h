/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <NotesShared/ICCloudSyncingObject.h>

@class ICAccount, ICAttachment, NSData, NSDate, NSObject, NSString;

@protocol OS_dispatch_queue;

@interface ICAttachmentPreviewImage : ICCloudSyncingObject

{
    ICAccount *placeholderAccount;
    NSObject<OS_dispatch_queue> *_fileQueue;
    unsigned long long _imageID;
}

@property (weak, nonatomic) ICAccount *placeholderAccount;
@property (retain, nonatomic) NSData *encryptedMetadata;
@property (retain, nonatomic) NSData *cryptoMetadataInitializationVector;
@property (retain, nonatomic) NSData *cryptoMetadataTag;
@property (nonatomic) unsigned long long imageID;
@property (readonly) NSObject<OS_dispatch_queue> *fileQueue;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) double scale;
@property (nonatomic) short appearanceType;
@property (nonatomic) short version;
@property (nonatomic) _Bool versionOutOfDate;
@property (retain, nonatomic) NSDate *modifiedDate;
@property (retain, nonatomic) ICAttachment *attachment;
@property (nonatomic) _Bool scaleWhenDrawing;
@property (retain, nonatomic) NSData *metadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)attachmentPreviewImageIdentifiersForAccount:(id)arg1;
+ (void)purgePreviewImageFilesForIdentifiers:(id)arg1 account:(id)arg2;
+ (void)deleteStrandedAttachmentPreviewImagesInContext:(id)arg1;
+ (id)previewImageURLsForIdentifier:(id)arg1 account:(id)arg2;
+ (id)fileGlobalQueue;
+ (id)fileQueueGroup;
+ (long long)updateFileWriteCounterBy:(long long)arg1 identifier:(id)arg2;
+ (void)purgeAllPreviewImageFiles;
+ (id)concurrentFileLoadLimitSemaphore;
+ (void)waitUntilAllFileWritesAreFinished;
+ (id)identifierForContentIdentifier:(id)arg1 scale:(double)arg2 width:(double)arg3 height:(double)arg4 appearanceType:(unsigned long long)arg5;
+ (id)allAttachmentPreviewImagesInContext:(id)arg1;
+ (id)attachmentPreviewImagesMatchingPredicate:(id)arg1 inContext:(id)arg2;
+ (id)newAttachmentPreviewImageWithIdentifier:(id)arg1 attachment:(id)arg2;
+ (void)purgeAllAttachmentPreviewImagesInContext:(id)arg1;
+ (id)attachmentPreviewImageWithIdentifier:(id)arg1 inContext:(id)arg2;
+ (id)visibleAttachmentPreviewImagesInContext:(id)arg1;

- (struct CGSize)size;
- (void)invalidateCache;
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;
- (void)willTurnIntoFault;
- (void)prepareForDeletion;
- (_Bool)shouldSyncToCloud;
- (id)ic_loggingValues;
- (id)cloudAccount;
- (void)deleteFromLocalDatabase;
- (_Bool)needsInitialFetchFromCloud;
- (void)saveAndClearDecryptedData;
- (void)accountWillChangeToAccount:(id)arg1;
- (id)parentEncryptableObject;
- (void)invalidateOrientedImage;
- (_Bool)setImageData:(id)arg1 withSize:(struct CGSize)arg2 scale:(double)arg3 appearanceType:(unsigned long long)arg4;
- (id)containerAccount;
- (id)orientedPreviewImageURLWithoutCreating;
- (void)removeItemAtURL:(id)arg1;
- (id)previewImageURL;
- (id)encryptedPreviewImageURL;
- (void)invalidateImage;
- (_Bool)makeSurePreviewImageDirectoryExists:(id *)arg1;
- (_Bool)writeEncryptedImageFromData:(id)arg1;
- (void)updateFlagToExcludeFromCloudBackup;
- (id)previewImagePathExtension;
- (void)createOrientedPreviewIfNeeded;
- (id)_decryptedImageData;
- (struct CGAffineTransform)orientedImageTransform;
- (_Bool)imageIsValid;
- (_Bool)imageIsWriting;
- (_Bool)setScaledImageFromImageSrc:(struct CGImageSource *)arg1 typeUTI:(struct __CFString *)arg2;
- (_Bool)hasAnyPNGPreviewImageFiles;
- (id)orientedPreviewImageURL;
- (long long)minimumSupportedNotesVersion;
- (_Bool)needsToBePushedToCloud;
- (_Bool)needsToBeDeletedFromCloud;
- (_Bool)needsToBeFetchedFromCloud;
- (id)decryptedImageData;

@end
