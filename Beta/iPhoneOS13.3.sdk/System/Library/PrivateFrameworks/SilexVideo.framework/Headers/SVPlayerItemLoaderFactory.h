/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SVPlayerItemFactory, SVURLAssetLoaderFactory, SVVideoMetadataProviding;

@interface SVPlayerItemLoaderFactory : NSObject

{
    id <SVPlayerItemFactory> _playerItemFactory;
    id <SVURLAssetLoaderFactory> _URLAssetLoaderFactory;
    id <SVVideoMetadataProviding> _metadataProvider;
}

@property (nonatomic, readonly) id <SVPlayerItemFactory> playerItemFactory;
@property (nonatomic, readonly) id <SVURLAssetLoaderFactory> URLAssetLoaderFactory;
@property (nonatomic, readonly) id <SVVideoMetadataProviding> metadataProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)createPlayerItemLoaderForVideo:(id)arg1;
- (id)initWithPlayerItemFactory:(id)arg1 URLAssetLoaderFactory:(id)arg2 metadataProvider:(id)arg3;

@end
