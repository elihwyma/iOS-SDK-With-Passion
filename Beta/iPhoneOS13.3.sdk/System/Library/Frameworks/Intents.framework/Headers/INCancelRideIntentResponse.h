/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntentResponse.h>

@class INCurrencyAmount, NSDateComponents;

@interface INCancelRideIntentResponse : INIntentResponse

{
    INCurrencyAmount *_cancellationFee;
    NSDateComponents *_cancellationFeeThreshold;
}

@property (nonatomic, readonly) long long code;
@property (copy, nonatomic) INCurrencyAmount *cancellationFee;
@property (copy, nonatomic) NSDateComponents *cancellationFeeThreshold;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_dictionaryRepresentation;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)initWithBackingStore:(id)arg1;

@end
