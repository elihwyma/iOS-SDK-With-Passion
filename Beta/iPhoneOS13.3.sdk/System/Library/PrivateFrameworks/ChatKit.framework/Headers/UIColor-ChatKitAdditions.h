/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIColor.h>

@interface UIColor (ChatKitAdditions)

+ (id)ckColorNamed:(id)arg1;
+ (id)_ckSystemBackgroundColor;
+ (id)dynamicColorWithLightColor:(id)arg1 darkColor:(id)arg2;
+ (id)_ckSecondarySystemBackgroundColor;
+ (id)_ckTertiarySystemBackgroundColor;
+ (id)_ckSystemGroupedBackgroundColor;
+ (id)_ckSecondarySystemGroupedBackgroundColor;

- (id)colorByBlendingWithColor:(id)arg1;
- (id)resolvedColorForTraitCollection:(id)arg1;
- (id)colorByBlendingWithColor:(id)arg1 withFraction:(double)arg2;

@end
