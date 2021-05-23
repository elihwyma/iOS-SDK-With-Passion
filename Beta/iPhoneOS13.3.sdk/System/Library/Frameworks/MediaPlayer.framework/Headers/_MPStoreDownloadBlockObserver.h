/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MPStoreDownload, NSString;

@interface _MPStoreDownloadBlockObserver : NSObject

{
    CDUnknownBlockType _didFinishDownloadHandler;
    CDUnknownBlockType _didFinishPurchaseHandler;
    MPStoreDownload *_download;
}

@property (copy, nonatomic) CDUnknownBlockType didFinishDownloadHandler;
@property (copy, nonatomic) CDUnknownBlockType didFinishPurchaseHandler;
@property (nonatomic, readonly) MPStoreDownload *download;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2;
- (void)downloadManager:(id)arg1 downloadPurchaseDidFinish:(id)arg2;
- (id)initWithDownload:(id)arg1;

@end
