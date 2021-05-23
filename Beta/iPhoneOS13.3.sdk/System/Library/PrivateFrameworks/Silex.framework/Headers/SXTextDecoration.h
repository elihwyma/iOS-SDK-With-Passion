/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXJSONObject.h>

@class UIColor;

@interface SXTextDecoration : SXJSONObject

@property (nonatomic, readonly) UIColor *color;
@property (nonatomic, readonly) long long width;
@property (nonatomic, readonly) int style;

- (int)styleWithValue:(id)arg1 withType:(int)arg2;

@end
