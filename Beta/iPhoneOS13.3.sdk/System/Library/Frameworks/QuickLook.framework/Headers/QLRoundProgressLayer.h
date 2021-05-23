/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <CALayer.h>

__attribute__((visibility("hidden")))
@interface QLRoundProgressLayer : CALayer

@property (nonatomic) double progress;

+ (_Bool)needsDisplayForKey:(id)arg1;

- (id)initWithLayer:(id)arg1;
- (_Bool)needsDisplayOnBoundsChange;

@end
