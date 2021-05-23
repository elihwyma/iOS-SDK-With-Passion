/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, UIColor;

@interface IKColor : NSObject

{
    UIColor *_color;
    NSArray *_gradientColors;
    long long _colorType;
    long long _gradientType;
    long long _gradientDirectionType;
    NSString *_colorMapKey;
    NSArray *_gradientPoints;
}

@property (copy, nonatomic) NSString *colorMapKey;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) long long colorType;
@property (copy, nonatomic, readonly) NSArray *gradientPoints;
@property (copy, nonatomic) NSArray *gradientColors;
@property (nonatomic) long long gradientDirectionType;
@property (nonatomic) long long gradientType;

+ (id)colorMap;
+ (void)registerColorNameMap:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithColor:(id)arg1;
- (void)setGradientColors:(id)arg1 andPoints:(id)arg2;
- (id)initWithColorMapKey:(id)arg1;

@end
