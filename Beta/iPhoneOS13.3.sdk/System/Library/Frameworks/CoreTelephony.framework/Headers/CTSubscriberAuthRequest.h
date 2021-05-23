/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@class CTSubscriberAlgorithm;

@interface CTSubscriberAuthRequest : NSObject

{
    CTSubscriberAlgorithm *_algorithm;
}

@property (retain, nonatomic) CTSubscriberAlgorithm *algorithm;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
