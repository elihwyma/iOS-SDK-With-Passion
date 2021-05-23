/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/Swift-Protocol.h>

@class NSMutableOrderedSet, NSNumber, NSObject, NSString, NSURL, PLPhotoLibrary;

@protocol PLAlbumProtocol <Swift>

@property (nonatomic, readonly) PLPhotoLibrary *photoLibrary;
@property (retain, nonatomic, readonly) NSNumber *kind;
@property (nonatomic, readonly) int kindValue;
@property (retain, nonatomic, readonly) NSMutableOrderedSet *mutableAssets;
@property (nonatomic) _Bool hasUnseenContentBoolValue;
@property (copy, nonatomic, readonly) NSString *name;
@property (retain, nonatomic, readonly) NSObject *posterImage;
@property (nonatomic, readonly) _Bool isLibrary;
@property (nonatomic, readonly) _Bool isCameraAlbum;
@property (nonatomic, readonly) _Bool isPanoramasAlbum;
@property (nonatomic, readonly) _Bool isPhotoStreamAlbum;
@property (nonatomic, readonly) _Bool isCloudSharedAlbum;
@property (nonatomic, readonly) _Bool isPendingPhotoStreamAlbum;
@property (nonatomic, readonly) _Bool isStandInAlbum;
@property (nonatomic, readonly) _Bool isFolder;
@property (nonatomic, readonly) _Bool isInTrash;
@property (nonatomic, readonly) _Bool isOwnedCloudSharedAlbum;
@property (nonatomic, readonly) _Bool isFamilyCloudSharedAlbum;
@property (nonatomic, readonly) _Bool isMultipleContributorCloudSharedAlbum;
@property (nonatomic, readonly) _Bool isRecentlyAddedAlbum;
@property (nonatomic, readonly) _Bool isUserLibraryAlbum;
@property (nonatomic, readonly) _Bool canContributeToCloudSharedAlbum;
@property (nonatomic, readonly) _Bool shouldDeleteWhenEmpty;
@property (retain, nonatomic) NSString *importSessionID;
@property (retain, nonatomic, readonly) NSURL *groupURL;
@property (copy, nonatomic, readonly) CDUnknownBlockType sortingComparator;
@property (nonatomic) int pendingItemsCount;
@property (nonatomic) int pendingItemsType;
@property (nonatomic) unsigned long long batchSize;

- (unsigned short)reducePendingItemsCountBy: /* Error: Ran out of types for this method. */;
- (unsigned short)batchFetchAssets: /* Error: Ran out of types for this method. */;

@end
