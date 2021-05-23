/*
 Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

#import <Foundation/NSObject.h>

@class SCNNode;

@interface AVTStickerCamera : NSObject

{
    SCNNode *_node;
}

@property (retain, nonatomic) SCNNode *node;

+ (id)stickerCameraCache;
+ (id)cameraFromDictionary:(id)arg1 assetsPath:(id)arg2;

- (id)buildNode;
- (id)initWithScene:(id)arg1 cameraName:(id)arg2;

@end
