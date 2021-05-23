/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@interface CAMEffectFilterManager : NSObject

+ (id)filtersForFilterType:(long long)arg1 lightingType:(long long)arg2 applyDepthEffect:(_Bool)arg3;
+ (id)aggdNameForType:(long long)arg1;
+ (id)displayNameForType:(long long)arg1;
+ (id)ciFilterNameForFilterType:(long long)arg1;
+ (id)ciFilterNameForFilterType:(long long)arg1 lightingType:(long long)arg2;

@end
