/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSDecimalNumber;

@interface PKPaymentBalanceReminder : NSObject <Swift>

{
    _Bool _enabled;
    NSDecimalNumber *_threshold;
}

@property (retain, nonatomic) NSDecimalNumber *threshold;
@property (nonatomic, getter=isEnabled) _Bool enabled;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithThreshold:(id)arg1 isEnabled:(_Bool)arg2;

@end
