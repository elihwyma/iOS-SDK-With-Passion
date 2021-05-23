/*
 Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <AssetsLibraryServices/Swift-Protocol.h>

@class NSString;

@protocol PLThumbPersistenceManager <Swift>

@property (nonatomic, readonly) NSString *path;
@property (nonatomic, readonly) _Bool isReadOnly;

- (unsigned short)_debugDescription;
- (unsigned short)beginThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)endThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:withToken: /* Error: Ran out of types for this method. */;
- (unsigned short)validateData:withToken: /* Error: Ran out of types for this method. */;
- (unsigned short)imageDataWithIdentifier:orIndex:width:height:bytesPerRow:dataWidth:dataHeight:dataOffset: /* Error: Ran out of types for this method. */;
- (unsigned short)usesThumbIdentifiers;
- (unsigned short)preheatDataForThumbnailIndexes: /* Error: Ran out of types for this method. */;
- (unsigned short)createImageWithIdentifier:orIndex:decodeSession: /* Error: Ran out of types for this method. */;

@end
