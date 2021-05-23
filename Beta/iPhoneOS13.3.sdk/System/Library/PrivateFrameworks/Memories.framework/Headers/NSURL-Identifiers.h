/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSURL.h>

@interface NSURL (Identifiers)

+ (id)perThreadPhotosQueryDateFormatter;
+ (id)photosIdentifierURLWithQuery:(id)arg1;
+ (id)pluginEditedAssetURL;
+ (id)localIdentifierURLForAsset:(id)arg1;
+ (id)generateImportedKenBurnsIdentifierURL;
+ (id)generateRecordedKenBurnsIdentifierURL;
+ (id)localIdentifierURLForAssetRepresentation:(id)arg1;

- (id)modificationDate;
- (long long)mediaType;
- (id)localIdentifier;
- (_Bool)isImported;
- (id)modificationDateString;
- (_Bool)isPluginEditedAssetURL;
- (_Bool)isKenBurnsIdentifierURL;
- (_Bool)isAssetsLibraryPersistentURL;
- (_Bool)isPhotoKitCompatibleIdentifierURL;
- (_Bool)isMediaPlayerPersistentURL;
- (_Bool)isSharedMediaURL;
- (_Bool)isSFXorThemeMusicURL;
- (id)shortQuery;
- (id)kenBurnsIdentifier;
- (id)localIdentifierURLWithModificationDate:(id)arg1;
- (id)localIdentifierURLByRemovingModificationDate;
- (id)valueForQueryKey:(id)arg1;
- (_Bool)isKenBurnsFileURL;
- (_Bool)isRecorded;
- (id)standardizedQuery;
- (_Bool)isPhotosIdentifierURL;
- (_Bool)isAdjustedVersion;

@end
