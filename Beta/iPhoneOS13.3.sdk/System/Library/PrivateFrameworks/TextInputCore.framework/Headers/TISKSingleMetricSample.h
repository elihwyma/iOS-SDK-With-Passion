/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface TISKSingleMetricSample : NSObject

{
    NSMutableArray *_samples;
}

@property (retain, nonatomic) NSMutableArray *samples;

+ (_Bool)supportsSecureCoding;
+ (id)makeMetric;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (_Bool)isEmpty;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)size;
- (void)merge:(id)arg1;
- (void)addSample:(id)arg1;
- (double)average;
- (double)variance;
- (id)generateDataForSR:(id)arg1;

@end
