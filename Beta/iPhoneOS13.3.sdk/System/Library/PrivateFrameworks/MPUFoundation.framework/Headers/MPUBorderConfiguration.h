/*
 Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

#import <Foundation/NSObject.h>

@class UIColor;

@interface MPUBorderConfiguration : NSObject

{
    double _borderAlpha;
    UIColor *_borderColor;
    double _borderWidth;
    double _fillAlpha;
    UIColor *_fillColor;
    double _dropShadowAlpha;
    UIColor *_dropShadowColor;
    unsigned long long _dropShadowEdges;
    double _dropShadowWidth;
}

@property (nonatomic) double borderAlpha;
@property (retain, nonatomic) UIColor *borderColor;
@property (nonatomic) double borderWidth;
@property (nonatomic) double fillAlpha;
@property (retain, nonatomic) UIColor *fillColor;
@property (nonatomic) double dropShadowAlpha;
@property (retain, nonatomic) UIColor *dropShadowColor;
@property (nonatomic) unsigned long long dropShadowEdges;
@property (nonatomic) double dropShadowWidth;
@property (nonatomic, readonly, getter=isFullyTransparent) _Bool fullyTransparent;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
