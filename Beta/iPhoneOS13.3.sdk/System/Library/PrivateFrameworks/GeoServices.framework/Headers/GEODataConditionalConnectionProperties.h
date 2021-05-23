/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

#import <GeoServices/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface GEODataConditionalConnectionProperties : NSObject <Swift>

{
    unsigned long long _workLoad;
    double _timeWindowStartTime;
    double _timeWindowDuration;
}

@property (nonatomic, readonly) unsigned long long workLoad;
@property (nonatomic, readonly) double timeWindowStartTime;
@property (nonatomic, readonly) double timeWindowDuration;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithWorkload:(unsigned long long)arg1 timeWindowDuration:(double)arg2;
- (id)initWithWorkload:(unsigned long long)arg1 timeWindowStartTime:(double)arg2 timeWindowDuration:(double)arg3;

@end
