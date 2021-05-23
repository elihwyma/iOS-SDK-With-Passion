/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSDate, NSString, NSTimeZone;

@interface PKAccountPaymentScheduleDetails : NSObject <Swift>

{
    NSTimeZone *_productTimeZone;
    long long _frequency;
    long long _scheduledDay;
    long long _preset;
    NSDate *_scheduledDate;
    NSString *_paymentTermsIdentifier;
}

@property (nonatomic) long long frequency;
@property (nonatomic) long long scheduledDay;
@property (nonatomic) long long preset;
@property (copy, nonatomic) NSDate *scheduledDate;
@property (copy, nonatomic) NSString *paymentTermsIdentifier;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)hashString;
- (id)jsonDictionaryRepresentation;
- (id)jsonString;
- (void)setScheduleTimeZone:(id)arg1;
- (id)initWithDictionary:(id)arg1 productTimeZone:(id)arg2;

@end
