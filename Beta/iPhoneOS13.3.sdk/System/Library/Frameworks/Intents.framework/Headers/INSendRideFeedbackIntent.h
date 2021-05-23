/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntent.h>

@class INCurrencyAmount, NSNumber, NSString;

@interface INSendRideFeedbackIntent : INIntent

{
    NSString *_rideIdentifier;
    NSNumber *_rating;
    INCurrencyAmount *_tip;
}

@property (copy, nonatomic, readonly) NSString *rideIdentifier;
@property (copy, nonatomic) NSNumber *rating;
@property (copy, nonatomic) INCurrencyAmount *tip;

+ (_Bool)supportsSecureCoding;
+ (id)intentDescription;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_dictionaryRepresentation;
- (id)initWithRideIdentifier:(id)arg1;

@end
