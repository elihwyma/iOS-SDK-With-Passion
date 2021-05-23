/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@protocol SXAVURLAssetFactory;

@interface SXAVPlayerItemFactory : NSObject

{
    NSArray *_automaticallyLoadedAssetKeys;
    id <SXAVURLAssetFactory> _assetFactory;
}

@property (copy, nonatomic, readonly) NSArray *automaticallyLoadedAssetKeys;
@property (nonatomic, readonly) id <SXAVURLAssetFactory> assetFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)createPlayerItemWithURL:(id)arg1;
- (id)initWithAutomaticallyLoadedAssetKeys:(id)arg1 assetFactory:(id)arg2;

@end
