//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVPlayerItemLoaderFactory-Protocol.h>

@protocol SVPlayerItemFactory, SVURLAssetLoaderFactory, SVVideoMetadataProviding;

@interface SVPlayerItemLoaderFactory : NSObject <SVPlayerItemLoaderFactory>
{
    id <SVPlayerItemFactory> _playerItemFactory;
    id <SVURLAssetLoaderFactory> _URLAssetLoaderFactory;
    id <SVVideoMetadataProviding> _metadataProvider;
}

@property(readonly, nonatomic) id <SVVideoMetadataProviding> metadataProvider; // @synthesize metadataProvider=_metadataProvider;
@property(readonly, nonatomic) id <SVURLAssetLoaderFactory> URLAssetLoaderFactory; // @synthesize URLAssetLoaderFactory=_URLAssetLoaderFactory;
@property(readonly, nonatomic) id <SVPlayerItemFactory> playerItemFactory; // @synthesize playerItemFactory=_playerItemFactory;
// - (void).cxx_destruct;
- (id)createPlayerItemLoaderForVideo:(id)arg1;
- (id)initWithPlayerItemFactory:(id)arg1 URLAssetLoaderFactory:(id)arg2 metadataProvider:(id)arg3;

@end

