/*
 Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface AVTAvatarAssetLibrary : NSObject

{
    NSMutableArray *_assets[28];
    NSMutableDictionary *_assetsByName[28];
}

+ (id)sharedAvatarAssetLibrary;

- (void)reload;
- (id)assetsWithType:(long long)arg1;
- (id)assetWithType:(long long)arg1 identifier:(id)arg2;

@end
