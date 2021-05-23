/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Tips/TPSDeliveryEvent.h>

@class NSString;

@interface TPSDeliveryContentStatusEvent : TPSDeliveryEvent

{
    long long _statusType;
    NSString *_contentID;
}

@property (nonatomic) long long statusType;
@property (copy, nonatomic) NSString *contentID;

+ (_Bool)supportsSecureCoding;
+ (id)classSet;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (unsigned int)minObservationCount;
- (void)updateStatusTypeIfOutOfBound;

@end
