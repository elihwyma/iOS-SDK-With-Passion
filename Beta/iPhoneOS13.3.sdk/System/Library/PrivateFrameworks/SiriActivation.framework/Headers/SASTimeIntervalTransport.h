/*
 Image: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
 */

#import <Foundation/NSObject.h>

@class NSNumber;

@interface SASTimeIntervalTransport : NSObject

{
    NSNumber *_transport;
}

@property (retain, nonatomic) NSNumber *transport;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)timeInterval;
- (id)initWithTimeInterval:(double)arg1;

@end
