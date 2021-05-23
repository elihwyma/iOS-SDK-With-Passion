/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

#import <CloudDocsDaemon/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface BRCSyncBudgetThrottle : NSObject <Swift>

{
    double _t0;
    float _values[8];
}

@property (nonatomic, readonly) float lastMinute;
@property (nonatomic, readonly) float lastHour;
@property (nonatomic, readonly) float lastDay;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (void)clear;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateForTime:(double)arg1;
- (float)availableBudgetWithDefaults:(id)arg1;
- (double)nextDateWithBudgetWithDefaults:(id)arg1;
- (id)debugDescriptionWithDefaults:(id)arg1;
- (double)_timeToLoseAmount:(float)arg1 count:(int)arg2;
- (void)consume:(float)arg1;

@end
