/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

@class NSNumber;

@interface HMPresenceEventActivation : NSObject

{
    unsigned long long _value;
}

@property (nonatomic, readonly) NSNumber *number;
@property (nonatomic, readonly) unsigned long long value;

+ (id)activationGranularityWithNumber:(id)arg1;
+ (id)activationGranularityWithValue:(unsigned long long)arg1;
+ (id)activationGranularityWithMessage:(id)arg1;
+ (id)activationGranularityWithDict:(id)arg1;
+ (id)activationGranularityWithCoder:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithNumber:(id)arg1;
- (void)addToCoder:(id)arg1;
- (void)addToPayload:(id)arg1;

@end
