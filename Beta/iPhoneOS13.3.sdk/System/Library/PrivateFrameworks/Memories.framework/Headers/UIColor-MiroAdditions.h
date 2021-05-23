/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <UIKit/UIColor.h>

@interface UIColor (MiroAdditions)

+ (id)popoverBackgroundColor;
+ (id)colorWithHexString:(id)arg1;
+ (id)randomColor;
+ (id)colorFromPlist:(id)arg1;
+ (id)iMovieBlueColor;
+ (id)iMoviePluginTintColor;
+ (id)iMovieTintColor;
+ (id)iMovieDisabledColor;
+ (id)blTableviewBackgroundColor;

- (double)whiteComponent;
- (void)_getRed:(double *)arg1 green:(double *)arg2 blue:(double *)arg3;
- (id)hexString;
- (_Bool)isSimilarToColor:(id)arg1;
- (double)perceptualLuminance;
- (int)colorModel;
- (void)_getCIEL:(double *)arg1 a:(double *)arg2 b:(double *)arg3;
- (void)_getX:(double *)arg1 y:(double *)arg2 z:(double *)arg3;
- (struct CGColor *)_CreateCIELABColor;
- (_Bool)isReallySimilarToColor:(id)arg1;
- (id)plistRepresentation;

@end
