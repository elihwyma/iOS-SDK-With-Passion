/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@interface SXFontMatching : NSObject

+ (id)matchFontFaceForAttributes:(id)arg1 fromFamily:(id)arg2;
+ (long long)lighterWeightForWeight:(long long)arg1;
+ (long long)bolderWeightForWeight:(long long)arg1;
+ (long long)bestWidthForIntendedWidth:(long long)arg1 forFonts:(id)arg2;
+ (long long)bestStyleForIntendedStyle:(long long)arg1 forFonts:(id)arg2;
+ (long long)bestWeightForIntendedWeight:(long long)arg1 forFonts:(id)arg2;
+ (id)fontFaceWithAttributes:(id)arg1 fromFamily:(id)arg2;

@end
