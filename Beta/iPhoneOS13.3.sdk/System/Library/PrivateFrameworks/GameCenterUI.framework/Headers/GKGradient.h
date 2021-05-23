/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <Foundation/NSObject.h>

@interface GKGradient : NSObject

{
    struct CGGradient *_CGGradient;
}

+ (id)gradientWithColors:(id)arg1 atLocations:(const double *)arg2;

- (void)dealloc;
- (struct CGGradient *)CGGradient;
- (id)initWithColors:(id)arg1 atLocations:(const double *)arg2;

@end
