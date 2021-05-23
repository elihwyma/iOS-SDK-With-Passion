/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@protocol _UIImageContentEffect, _UIImageContentLayoutSource;

__attribute__((visibility("hidden")))
@interface _UIImageContentContextualEffect : NSObject

{
    id <_UIImageContentEffect> _effect;
    id <_UIImageContentLayoutSource> _source;
}

@property (nonatomic, readonly) id <_UIImageContentEffect> effect;
@property (nonatomic, readonly) id <_UIImageContentLayoutSource> source;

+ (id)effect:(id)arg1 withSource:(id)arg2;

- (id)_renditionWithCGImageProvider:(CDUnknownBlockType)arg1 size:(struct CGSize)arg2 lazy:(_Bool)arg3;

@end
