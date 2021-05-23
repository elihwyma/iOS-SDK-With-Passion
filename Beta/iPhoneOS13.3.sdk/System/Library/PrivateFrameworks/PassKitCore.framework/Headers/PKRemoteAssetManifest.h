/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSDictionary, NSMutableDictionary, NSURL;

@interface PKRemoteAssetManifest : NSObject

{
    NSURL *_fileURL;
    NSURL *_passURL;
    NSMutableDictionary *_remoteAssets;
}

@property (nonatomic, readonly) NSURL *fileURL;
@property (nonatomic, readonly) NSDictionary *remoteAssets;

+ (Class)_remoteAssestManifestItemClassWithValues:(id)arg1;

- (id)deviceSpecificAssetForScreenScale:(double)arg1 suffix:(id)arg2;
- (id)initWithFileURL:(id)arg1 passURL:(id)arg2 error:(id *)arg3;
- (id)deviceSpecificAsset;

@end
