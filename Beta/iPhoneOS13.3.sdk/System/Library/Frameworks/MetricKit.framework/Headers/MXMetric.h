/*
 Image: /System/Library/Frameworks/MetricKit.framework/MetricKit
 */

#import <Foundation/NSObject.h>

@class NSMeasurementFormatter;

@interface MXMetric : NSObject

{
    NSMeasurementFormatter *_measurementFormatter;
}

@property (retain) NSMeasurementFormatter *measurementFormatter;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)toDictionary;
- (id)JSONRepresentation;
- (id)DictionaryRepresentation;

@end
