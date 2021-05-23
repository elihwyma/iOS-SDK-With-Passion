/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSArray, UIColor;

@interface HKGradient : NSObject

{
    NSArray *_colors;
    NSArray *_locations;
}

@property (retain, nonatomic) NSArray *colors;
@property (retain, nonatomic) NSArray *locations;
@property (nonatomic, readonly) UIColor *topColor;
@property (nonatomic, readonly) UIColor *bottomColor;

+ (id)defaultGradient;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTopColor:(id)arg1 bottomColor:(id)arg2;
- (id)initWithColors:(id)arg1 locations:(id)arg2;
- (_Bool)isEqualToHKGradient:(id)arg1;

@end
