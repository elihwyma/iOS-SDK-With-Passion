/*
 Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

#import <NSString.h>

@interface NSString (WeatherStringAdditions)

+ (id)stringWithFormat:(id)arg1 andArguments:(id)arg2;

- (void)drawAtPoint:(struct CGPoint)arg1 forWidth:(float)arg2 withFont:(id)arg3 fontColor:(id)arg4 shadowColor:(id)arg5;
- (void)drawWithDegreeAtPoint:(struct CGPoint)arg1 font:(id)arg2 degreeFont:(id)arg3 degreeOffset:(struct CGSize)arg4;
- (struct CGSize)sizeWithDegreeWithFont:(id)arg1 degreeFont:(id)arg2 degreeOffset:(struct CGSize)arg3;

@end
