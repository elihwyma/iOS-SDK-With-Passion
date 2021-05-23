/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSArray, NSDate;

@interface PKPaymentTransactionQuestion : NSObject <Swift>

{
    _Bool _answered;
    _Bool _answeredOnThisDevice;
    unsigned long long _type;
    NSDate *_expirationDate;
}

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSDate *expirationDate;
@property (nonatomic) _Bool answered;
@property (nonatomic) _Bool answeredOnThisDevice;
@property (nonatomic, readonly) NSArray *allowedAnswers;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (_Bool)isEqualToQuestion:(id)arg1;

@end
