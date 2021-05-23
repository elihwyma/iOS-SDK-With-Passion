/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

#import <VideosUI/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface VUIMediaEntityAssetControllerState : NSObject <Swift>

{
    _Bool _supportsCancellation;
    _Bool _supportsPausing;
    unsigned long long _status;
    double _downloadProgress;
    unsigned long long _bytesToDownload;
    unsigned long long _bytesDownloaded;
}

@property (nonatomic) unsigned long long status;
@property (nonatomic) double downloadProgress;
@property (nonatomic) _Bool supportsCancellation;
@property (nonatomic) _Bool supportsPausing;
@property (nonatomic) unsigned long long bytesToDownload;
@property (nonatomic) unsigned long long bytesDownloaded;
@property (nonatomic, readonly, getter=isDownloadInProgress) _Bool downloadInProgress;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
