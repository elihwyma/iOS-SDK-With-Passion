/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/Swift-Protocol.h>

@class NSString;

@protocol PLAlbumContainer <Swift>

@property (nonatomic, readonly) unsigned long long albumsCount;
@property (nonatomic, readonly) _Bool isFolder;
@property (copy, nonatomic, readonly) CDUnknownBlockType albumsSortingComparator;
@property (nonatomic, readonly) int filter;
@property (nonatomic, readonly) unsigned long long unreadAlbumsCount;
@property (retain, nonatomic, readonly) NSString *_prettyDescription;
@property (retain, nonatomic, readonly) NSString *_typeDescription;

- (unsigned short)identifier;
- (unsigned short)albums;
- (unsigned short)hasAtLeastOneAlbum;
- (unsigned short)albumListType;
- (unsigned short)canEditAlbums;
- (unsigned short)albumHasFixedOrder: /* Error: Ran out of types for this method. */;
- (unsigned short)setNeedsReordering;
- (unsigned short)needsReordering;
- (unsigned short)updateAlbumsOrderIfNeeded;
- (unsigned short)preheatAlbumsForProperties:relationships: /* Error: Ran out of types for this method. */;
- (unsigned short)preheatAlbumsAtIndexes:forProperties:relationships: /* Error: Ran out of types for this method. */;

@end
