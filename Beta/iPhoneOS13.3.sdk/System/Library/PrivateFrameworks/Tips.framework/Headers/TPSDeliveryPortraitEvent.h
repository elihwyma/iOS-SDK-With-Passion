/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Tips/TPSDeliveryEvent.h>

@class NSString;

@interface TPSDeliveryPortraitEvent : TPSDeliveryEvent

{
    double _confidenceThreshold;
    NSString *_topicID;
}

@property (nonatomic) double confidenceThreshold;
@property (copy, nonatomic) NSString *topicID;

+ (_Bool)supportsSecureCoding;
+ (id)classSet;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (unsigned int)minObservationCount;

@end
