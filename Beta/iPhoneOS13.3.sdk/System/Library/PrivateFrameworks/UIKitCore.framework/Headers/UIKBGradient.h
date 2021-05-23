/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface UIKBGradient : NSObject <Swift>

{
    NSString *_gradientName;
    NSString *_flatColorName;
    NSString *_startColorName;
    NSString *_endColorName;
    NSArray *_colors;
    NSArray *_middleLocations;
    double _opacity;
    _Bool _horizontal;
    _Bool _usesRGBColors;
    _Bool _didQueryRGBColors;
}

@property (nonatomic) double opacity;
@property (nonatomic) _Bool horizontal;
@property (nonatomic, readonly) _Bool usesRGBColors;
@property (nonatomic, readonly) NSString *flatColorName;

+ (id)gradientWithFlatColor:(id)arg1;
+ (id)gradientWith3Colors:(id)arg1 middleLocation:(double)arg2;
+ (id)gradientWithColors:(id)arg1 middleLocations:(id)arg2;
+ (id)gradientWithName:(id)arg1;
+ (id)gradientWithStartColor:(id)arg1 endColor:(id)arg2;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1;
- (struct CGGradient *)CGGradient;
- (id)initWithFlatColor:(id)arg1;
- (id)initWithStartColor:(id)arg1 endColor:(id)arg2;
- (id)initWith3Colors:(id)arg1 middleLocation:(double)arg2;
- (id)initWithColors:(id)arg1 middleLocations:(id)arg2;

@end
