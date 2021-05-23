/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface NTKColorCurve : NSObject

{
    NSArray *_colorCurveElements;
}

@property (nonatomic, readonly) NSArray *colorCurveElements;

- (id)colorForFraction:(float)arg1;
- (id)initWithColorCurveElements:(id)arg1;

@end
