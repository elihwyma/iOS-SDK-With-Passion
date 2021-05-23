/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXComponentSizer.h>

@interface SXMapComponentSizer : SXComponentSizer

+ (_Bool)isSpanSetOnRegion:(CDStruct_2b0c6e0b)arg1;
+ (_Bool)isCenterSetOnRegion:(CDStruct_2b0c6e0b)arg1;
+ (CDStruct_2b0c6e0b)regionForCoordinates:(id)arg1;
+ (CDStruct_2b0c6e0b)regionFromRegion:(CDStruct_2b0c6e0b)arg1 coordinates:(id)arg2;
+ (CDStruct_02837cd9)mapRectForRegion:(CDStruct_2b0c6e0b)arg1;

- (double)calculateHeightForWidth:(double)arg1 layoutContext:(id)arg2;

@end
