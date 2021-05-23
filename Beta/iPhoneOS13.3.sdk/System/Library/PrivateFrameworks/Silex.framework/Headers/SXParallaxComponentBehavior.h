/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXComponentBehavior.h>

@interface SXParallaxComponentBehavior : SXComponentBehavior

{
    int _cachedDirection;
}

@property (nonatomic, readonly) int cachedDirection;
@property (nonatomic, readonly) double factor;
@property (nonatomic, readonly) int direction;

- (Class)handlerClassForComponent:(id)arg1;
- (int)directionWithValue:(id)arg1 withType:(int)arg2;

@end
