/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

#import <Home/Swift-Protocol.h>

@class HFRGBColor, HFTemperatureColor, NSString;

@protocol HFColorPrimitive;

@interface HFColorCollection : NSObject <Swift>

{
    HFRGBColor *_RGBColor;
    HFTemperatureColor *_temperatureColor;
}

@property (copy, nonatomic, readonly) HFRGBColor *RGBColor;
@property (copy, nonatomic, readonly) HFTemperatureColor *temperatureColor;
@property (copy, nonatomic, readonly) id <HFColorPrimitive> preferredColorPrimitive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)na_identity;

- (_Bool)isEqual:(id)arg1;
- (id)initWithPrimitiveColors:(id)arg1;
- (id)colorPrimitives;
- (id)initWithPrimitiveColor:(id)arg1;
- (id)colorByAdjustingForProfile:(id)arg1;

@end
