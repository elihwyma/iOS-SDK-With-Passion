/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSDecimalNumber, NSString;

@interface PKAccountAssistanceProgramMessage : NSObject <Swift>

{
    NSDecimalNumber *_pastDue;
    NSDecimalNumber *_chargeOffPreventionAmount;
    NSDecimalNumber *_currentBalance;
}

@property (retain, nonatomic) NSDecimalNumber *pastDue;
@property (retain, nonatomic) NSDecimalNumber *chargeOffPreventionAmount;
@property (retain, nonatomic) NSDecimalNumber *currentBalance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)recordType;
+ (id)recordNamePrefix;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecord:(id)arg1;
- (void)encodeWithRecord:(id)arg1;

@end
