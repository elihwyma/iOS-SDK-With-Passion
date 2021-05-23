/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <CoreTelephony/CTSubscriberAlgorithm.h>

@class NSData;

@interface CTSubscriberAlgorithmEAPAKA : CTSubscriberAlgorithm

{
    NSData *_rand;
    NSData *_autn;
}

@property (retain, nonatomic) NSData *rand;
@property (retain, nonatomic) NSData *autn;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
