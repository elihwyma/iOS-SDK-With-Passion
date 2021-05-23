/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXComponentBehavior.h>

@interface SXMotionComponentBehavior : SXComponentBehavior

@property (nonatomic, readonly) double amplitude;
@property (nonatomic, readonly) _Bool windowed;
@property (nonatomic, readonly) _Bool horizontal;
@property (nonatomic, readonly) _Bool vertical;

- (Class)handlerClassForComponent:(id)arg1;

@end
