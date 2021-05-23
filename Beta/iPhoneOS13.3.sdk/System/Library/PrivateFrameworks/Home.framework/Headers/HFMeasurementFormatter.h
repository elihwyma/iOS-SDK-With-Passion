/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSMeasurementFormatter.h>

@interface HFMeasurementFormatter : NSMeasurementFormatter

{
    CDUnknownBlockType _measurementBlock;
}

@property (copy, nonatomic) CDUnknownBlockType measurementBlock;

- (id)init;
- (id)stringForObjectValue:(id)arg1;
- (id)initWithMeasurementBlock:(CDUnknownBlockType)arg1;

@end
