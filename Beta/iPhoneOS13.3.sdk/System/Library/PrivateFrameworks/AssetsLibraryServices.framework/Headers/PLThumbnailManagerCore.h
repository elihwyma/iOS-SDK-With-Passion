/*
 Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSLock, NSMutableDictionary, PLPhotoLibraryPathManager;

@protocol PLThumbPersistenceManager;

@interface PLThumbnailManagerCore : NSObject

{
    NSMutableDictionary *_thumbnailConfigurationDict;
    struct os_unfair_lock_s _ivarLock;
    NSLock *_thumbManagersLock;
    id <PLThumbPersistenceManager> _lastUsedThumbManager;
    unsigned short _lastUsedThumbManagerFormatID;
    NSArray *_fastImageTables;
    NSMutableDictionary *_thumbManagersByFormat;
    PLPhotoLibraryPathManager *_pathManager;
}

@property (readonly) NSMutableDictionary *thumbManagersByFormat;
@property (readonly) PLPhotoLibraryPathManager *pathManager;

+ (id)supportedThumbnailFormatIDs;
+ (id)supportedThumbnailFormatIDsForDeviceConfiguration:(id)arg1;

- (void)dealloc;
- (id)thumbManagerForFormatID:(unsigned short)arg1 thumbFileManagerClass:(Class)arg2;
- (id)fastThumbPersistenceManagers;
- (id)imageTableSpecifications;
- (_Bool)useImageTableForFormat:(unsigned short)arg1;
- (void)stampThumbnailConfigurationToFile:(_Bool)arg1;
- (int)thumbnailVersionCurrent;
- (id)thumbnailConfigurationDict;
- (id)thumbnailConfigurationPath;
- (id)initWithPhotoLibraryPathManager:(id)arg1;
- (id)supportedTableFormats;
- (id)_thumbManagerForFormatID:(unsigned short)arg1;

@end
