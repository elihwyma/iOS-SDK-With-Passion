/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface TISKPositionalMetricSample : NSObject

{
    NSMutableArray *_positionalMetricSample;
}

@property (retain, nonatomic) NSMutableArray *positionalMetricSample;

+ (_Bool)supportsSecureCoding;
+ (id)makeMetric:(unsigned long long)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (_Bool)isEmpty;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)size;
- (void)merge:(id)arg1;
- (id)description:(_Bool)arg1;
- (id)generateDataForSR:(id)arg1;
- (void)addSample:(id)arg1 withPosition:(unsigned long long)arg2;
- (id)singleMetricSample:(unsigned long long)arg1;

@end
