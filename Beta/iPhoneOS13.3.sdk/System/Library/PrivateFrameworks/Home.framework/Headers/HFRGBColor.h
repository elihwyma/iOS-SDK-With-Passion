/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

#import <Home/Swift-Protocol.h>

@class NSString, UIColor;

@interface HFRGBColor : NSObject <Swift>

{
    float _red;
    float _green;
    float _blue;
}

@property (nonatomic, readonly) float red;
@property (nonatomic, readonly) float green;
@property (nonatomic, readonly) float blue;
@property (copy, nonatomic, readonly) UIColor *UIColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3;
- (id)initWithUIColor:(id)arg1;
- (id)hf_RGBColorRepresentation;
- (id)initWithHue:(float)arg1 saturation:(float)arg2 brightness:(float)arg3;
- (void)getHue:(float *)arg1 saturation:(float *)arg2 brightness:(float *)arg3;

@end
