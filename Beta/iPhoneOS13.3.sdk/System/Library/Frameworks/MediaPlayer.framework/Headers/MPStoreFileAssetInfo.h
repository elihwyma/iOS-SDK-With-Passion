/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class ICStoreFileAssetInfo, NSArray, NSData, NSString, NSURL;

@interface MPStoreFileAssetInfo : NSObject

{
    ICStoreFileAssetInfo *_internalInfo;
}

@property (copy, nonatomic, readonly) NSURL *assetURL;
@property (copy, nonatomic, readonly) NSString *downloadKey;
@property (copy, nonatomic, readonly) NSArray *fairPlayInfoList;
@property (nonatomic, readonly) long long flavorType;
@property (copy, nonatomic, readonly) NSString *fileExtension;
@property (nonatomic, readonly) unsigned long long fileSize;
@property (copy, nonatomic, readonly) NSData *md5;
@property (nonatomic, readonly) long long protectionType;

- (id)initWithiTunesCloudStoreFileAssetInfo:(id)arg1;

@end
