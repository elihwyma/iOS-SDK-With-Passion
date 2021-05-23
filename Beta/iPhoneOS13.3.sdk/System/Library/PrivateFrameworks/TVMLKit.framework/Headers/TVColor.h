/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSObject.h>

@class IKColor, NSArray, UIColor;

@interface TVColor : NSObject

{
    IKColor *_ikColor;
}

@property (weak, nonatomic, readonly) IKColor *ikColor;
@property (nonatomic, readonly) long long colorType;
@property (nonatomic, readonly) UIColor *color;
@property (nonatomic, readonly) NSArray *gradientColors;
@property (nonatomic, readonly) NSArray *gradientPoints;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithColor:(id)arg1;

@end
