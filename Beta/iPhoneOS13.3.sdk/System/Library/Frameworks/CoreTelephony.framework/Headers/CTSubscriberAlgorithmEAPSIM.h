/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <CoreTelephony/CTSubscriberAlgorithm.h>

@class NSData;

@interface CTSubscriberAlgorithmEAPSIM : CTSubscriberAlgorithm

{
    NSData *_rand;
}

@property (retain, nonatomic) NSData *rand;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
