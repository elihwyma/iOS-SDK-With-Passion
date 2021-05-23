/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXJSONObject.h>

@interface SXComponentAnimation : SXJSONObject

@property (nonatomic, readonly) _Bool userControllable;
@property (nonatomic, readonly) int transitionBehavior;

- (Class)handlerClass;

@end
