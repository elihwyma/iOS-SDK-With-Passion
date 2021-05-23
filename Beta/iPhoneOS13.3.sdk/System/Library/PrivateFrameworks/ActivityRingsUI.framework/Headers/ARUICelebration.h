/*
 Image: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
 */

#import <Foundation/NSObject.h>

@class MISSING_TYPE;

@interface ARUICelebration : NSObject

{
    float _time;
    MISSING_TYPE *_topColor;
    MISSING_TYPE *_bottomColor;
    MISSING_TYPE *_contrastColor;
}

@property (nonatomic, readonly) float time;

- (unsigned long long)type;
- (id)_init;
- (void)endWithCompletion:(CDUnknownBlockType)arg1;
- (void)update:(double)arg1;
- (void)setTopColor: /* Error: Ran out of types for this method. */;
- (void)storeCelebration:(id)arg1 withRing:(id)arg2;
- (void)setBottomColor: /* Error: Ran out of types for this method. */;
- (void)setContrastColor: /* Error: Ran out of types for this method. */;
- (void *)timeBytes;

@end
