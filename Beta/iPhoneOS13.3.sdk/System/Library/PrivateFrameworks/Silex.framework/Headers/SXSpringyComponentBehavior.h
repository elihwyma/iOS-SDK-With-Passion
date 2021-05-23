/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXComponentBehavior.h>

@interface SXSpringyComponentBehavior : SXComponentBehavior

@property (nonatomic, readonly) double frequency;
@property (nonatomic, readonly) double damping;
@property (nonatomic, readonly) double delta;

- (Class)handlerClassForComponent:(id)arg1;

@end
