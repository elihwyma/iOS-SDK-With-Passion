/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface SVPlayerItemFactory : NSObject

{
    NSArray *_automaticallyLoadedAssetKeys;
}

@property (copy, nonatomic, readonly) NSArray *automaticallyLoadedAssetKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)createPlayerItemWithAsset:(id)arg1;
- (id)initWithAutomaticallyLoadedAssetKeys:(id)arg1;

@end
