/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntent.h>

@class NSString;

@interface INCancelRideIntent : INIntent

{
    NSString *_rideIdentifier;
}

@property (copy, nonatomic, readonly) NSString *rideIdentifier;

+ (_Bool)supportsSecureCoding;
+ (id)intentDescription;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_dictionaryRepresentation;
- (id)initWithRideIdentifier:(id)arg1;

@end
