/*
 Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

#import <AvatarKit/AVTCompositor.h>

@class NSMutableDictionary;

@interface AVTCompositor_CPU : AVTCompositor

{
    NSMutableDictionary *_combinedImages;
}

- (id)init;
- (void)skinColorDidChange;
- (void)componentDidChangeForType:(long long)arg1;
- (void)updateMaterial:(id)arg1 propertyNamed:(id)arg2 memoji:(id)arg3;

@end
