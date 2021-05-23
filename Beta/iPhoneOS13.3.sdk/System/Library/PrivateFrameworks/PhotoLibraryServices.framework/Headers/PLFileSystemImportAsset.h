/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSSet, NSString, PLAssetJournalEntryPayload;

@protocol PLAlbumProtocol;

@interface PLFileSystemImportAsset : NSObject

{
    NSString *_path;
    _Bool _pathContainsDCIM;
    NSMutableSet *_urls;
    int _assetKind;
    struct NSObject *_destinationAlbum;
    PLAssetJournalEntryPayload *_assetPayload;
}

@property (retain, nonatomic) NSObject<PLAlbumProtocol> *destinationAlbum;
@property (nonatomic) int assetKind;
@property (nonatomic, readonly) NSSet *urls;
@property (nonatomic, readonly) PLAssetJournalEntryPayload *assetPayload;

- (id)description;
- (long long)compare:(id)arg1;
- (id)initWithDestinationAlbum:(struct NSObject *)arg1 assetKind:(int)arg2;
- (id)initWithAssetPayload:(id)arg1;
- (_Bool)isCameraKit;
- (void)addURL:(id)arg1;
- (void)addURLs:(id)arg1;

@end
