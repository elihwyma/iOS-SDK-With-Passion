/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UIImageAsset;

__attribute__((visibility("hidden")))
@interface _UIImageAssetMapEnvelope : NSObject

{
    UIImageAsset *_imageAsset;
    NSString *_assetName;
}

@property (weak, nonatomic) UIImageAsset *imageAsset;
@property (copy, nonatomic) NSString *assetName;

+ (id)wrapAsset:(id)arg1;

- (id)description;

@end
