/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHImportExceptionRecorder.h>

@class NSMutableArray, NSString, PHImportAsset, PHImportTimerCollection;

@interface PHImportRecord : PHImportExceptionRecorder

{
    NSString *_rawAssetIdentifier;
    _Bool _referencedImport;
    unsigned char _importType;
    NSString *_assetIdentifier;
    PHImportAsset *_importAsset;
    NSMutableArray *_relatedRecords;
    NSString *_downloadedPath;
    PHImportTimerCollection *_timers;
}

@property (retain, nonatomic) NSMutableArray *relatedRecords;
@property (nonatomic) _Bool referencedImport;
@property (retain, nonatomic) NSString *assetIdentifier;
@property (nonatomic, readonly) NSString *rawAssetIdentifier;
@property (retain, nonatomic) PHImportAsset *importAsset;
@property (retain, nonatomic) NSString *downloadedPath;
@property (retain, nonatomic) PHImportTimerCollection *timers;
@property (nonatomic) unsigned char importType;
@property (readonly) _Bool canReference;

- (id)description;
- (id)initWithImportAsset:(id)arg1;
- (id)descriptionWithPrefix:(id)arg1;
- (void)cleanupAfterFailure;
- (id)allAssetIdentifiers;
- (void)addRelatedRecord:(id)arg1;
- (id)recordForAsset:(id)arg1;
- (id)allImportAssets;
- (id)allImportRecords;
- (_Bool)needsDownload;

@end
