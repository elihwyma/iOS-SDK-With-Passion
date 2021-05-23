/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/MotionGeneratorClip.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface SolidColorGeneratorClip : MotionGeneratorClip

{
    UIColor *_color;
}

@property (retain, nonatomic) UIColor *color;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)generatorEffect;
- (id)plistRepresentationFromProject:(id)arg1;
- (void)setContentsFromPlist:(id)arg1 inProject:(id)arg2;

@end
