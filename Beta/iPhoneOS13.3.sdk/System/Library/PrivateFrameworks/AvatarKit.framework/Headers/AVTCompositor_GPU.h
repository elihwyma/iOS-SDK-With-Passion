/*
 Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

#import <AvatarKit/AVTCompositor.h>

@class NSMutableSet;

@interface AVTCompositor_GPU : AVTCompositor

{
    NSMutableSet *_textureProviders;
}

- (id)init;
- (void)addClient:(id)arg1;
- (void)removeClient:(id)arg1;
- (void)skinColorDidChange;
- (void)componentDidChangeForType:(long long)arg1;
- (void)updateMaterial:(id)arg1 propertyNamed:(id)arg2 memoji:(id)arg3;

@end
