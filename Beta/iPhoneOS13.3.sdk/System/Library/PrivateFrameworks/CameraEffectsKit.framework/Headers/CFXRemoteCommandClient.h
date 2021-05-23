/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@class NSDistributedNotificationCenter;

@interface CFXRemoteCommandClient : NSObject

{
    NSDistributedNotificationCenter *_distributedNotificationCenter;
}

@property (retain, nonatomic) NSDistributedNotificationCenter *distributedNotificationCenter;

- (id)init;
- (void)addShapeWithEffectIdentifier:(id)arg1;
- (void)addStickerWithURL:(id)arg1 offset:(struct CGPoint)arg2 scale:(double)arg3 rotation:(double)arg4;
- (void)addTextWithEffectIdentifier:(id)arg1 string:(id)arg2;
- (void)removeEffectsWithEffectTypeIdentifiers:(id)arg1;
- (void)setAnimojiWithEffectIdentifier:(id)arg1;
- (void)setFilterWithEffectIdentifier:(id)arg1;

@end
