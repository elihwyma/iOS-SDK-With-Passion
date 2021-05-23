/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <Foundation/NSObject.h>

@interface NSGlyphGenerator : NSObject

+ (void)initialize;
+ (id)defaultGlyphGenerator;
+ (id)sharedGlyphGenerator;

- (void)generateGlyphsForGlyphStorage:(id)arg1 desiredNumberOfCharacters:(unsigned long long)arg2 glyphIndex:(unsigned long long *)arg3 characterIndex:(unsigned long long *)arg4;

@end
