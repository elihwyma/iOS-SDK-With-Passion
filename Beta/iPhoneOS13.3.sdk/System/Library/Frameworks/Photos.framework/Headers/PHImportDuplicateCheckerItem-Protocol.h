/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/Swift-Protocol.h>

@class IPAMetadata, NSDate, NSMutableDictionary, NSString, NSURL;

@protocol PHImportDuplicateCheckerItem;

@protocol PHImportDuplicateCheckerItem <Swift>

@property (readonly) id uuid;
@property (readonly) NSURL *url;
@property (readonly) id avchdAssetId;
@property (readonly) id assetId;
@property (readonly) id originatingAssetID;
@property (readonly) NSString *fileName;
@property (readonly) NSDate *exifImageDate;
@property (readonly) NSDate *fileCreationDate;
@property (readonly) id nameKey;
@property (readonly) id sizeKey;
@property (readonly) NSDate *dateKey;
@property _Bool isDuplicate;
@property (readonly) _Bool isLivePhoto;
@property (retain) NSDate *lastDuplicateCheck;
@property (readonly) id <PHImportDuplicateCheckerItem> videoComplement;
@property (retain) NSMutableDictionary *duplicates;
@property unsigned char duplicateStateConfidence;
@property (readonly) IPAMetadata *metadata;

- (unsigned short)setDuplicates:forLibrary: /* Error: Ran out of types for this method. */;
- (unsigned short)duplicateAssetsForLibrary: /* Error: Ran out of types for this method. */;
- (unsigned short)loadMetadataSync;

@end
