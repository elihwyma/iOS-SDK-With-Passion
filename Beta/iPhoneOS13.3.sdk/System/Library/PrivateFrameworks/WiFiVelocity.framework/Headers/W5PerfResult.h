/*
 Image: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
 */

#import <Foundation/NSObject.h>

@class NSData, NSNumber, W5PerfConfiguration;

@interface W5PerfResult : NSObject

{
    W5PerfConfiguration *_configuration;
    NSData *_standardOut;
    NSData *_standardErr;
    NSNumber *_bandwidth;
    NSNumber *_jitter;
    NSNumber *_loss;
    double _start;
    double _end;
}

@property (copy, nonatomic) W5PerfConfiguration *configuration;
@property (copy, nonatomic) NSData *standardOut;
@property (copy, nonatomic) NSData *standardErr;
@property (copy, nonatomic) NSNumber *bandwidth;
@property (copy, nonatomic) NSNumber *jitter;
@property (copy, nonatomic) NSNumber *loss;
@property (nonatomic) double start;
@property (nonatomic) double end;

+ (_Bool)supportsSecureCoding;
+ (id)parseCompletedOutput:(id)arg1 configuration:(id)arg2;

- (void)dealloc;
- (_Bool)conformsToProtocol:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
