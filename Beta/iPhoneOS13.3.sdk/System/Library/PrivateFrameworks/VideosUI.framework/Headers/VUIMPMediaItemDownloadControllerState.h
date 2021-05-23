/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

#import <VideosUI/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface VUIMPMediaItemDownloadControllerState : NSObject <Swift>

{
    _Bool _downloadSucceeded;
    _Bool _downloadInProgress;
    unsigned long long _status;
    double _downloadProgress;
    unsigned long long _bytesToDownload;
    unsigned long long _bytesDownloaded;
}

@property (nonatomic) unsigned long long status;
@property (nonatomic) double downloadProgress;
@property (nonatomic) unsigned long long bytesToDownload;
@property (nonatomic) unsigned long long bytesDownloaded;
@property (nonatomic, getter=isDownloadInProgress) _Bool downloadInProgress;
@property (nonatomic) _Bool downloadSucceeded;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
