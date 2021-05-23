/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@interface MPMediaDownload : NSObject

{
    long long _deviceLibraryID;
    long long _storeItemID;
    long long _downloadReason;
    double _downloadProgress;
    unsigned long long _downloadPausedReason;
    long long _libraryID;
    long long _storeSagaID;
}

@property long long libraryID;
@property long long storeSagaID;
@property (nonatomic) long long downloadReason;
@property (nonatomic) double downloadProgress;
@property (nonatomic) unsigned long long downloadPausedReason;
@property (nonatomic, readonly) long long deviceLibraryID;
@property (nonatomic, readonly) long long storeItemID;

+ (unsigned long long)MPMediaDownloadPauseReasonForATAsset:(id)arg1;
+ (long long)_downloadReasonFromStoreDownload:(id)arg1;
+ (id)MPMediaDownloadsFromMPStoreDownloads:(id)arg1;
+ (id)MPMediaDownloadsFromATAssets:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithMPStoreDownload:(id)arg1;
- (id)initWithATAsset:(id)arg1;

@end
