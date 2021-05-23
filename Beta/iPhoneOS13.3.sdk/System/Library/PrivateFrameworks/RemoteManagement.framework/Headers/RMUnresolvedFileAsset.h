/*
 Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

#import <NSObject.h>

@class NSString, NSURL, RMAsset;

@interface RMUnresolvedFileAsset : NSObject

{
    RMAsset *_asset;
    NSURL *_downloadToFileURL;
}

@property (retain, nonatomic) RMAsset *asset;
@property (retain, nonatomic) NSURL *downloadToFileURL;
@property (copy, nonatomic, readonly) NSString *identifier;

- (void)resolveWithAssetResolver:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithAsset:(id)arg1 downloadToFileURL:(id)arg2;

@end
