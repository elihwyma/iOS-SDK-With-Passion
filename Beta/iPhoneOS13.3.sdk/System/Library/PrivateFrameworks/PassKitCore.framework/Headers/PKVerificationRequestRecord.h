/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSString, PKVerificationChannel;

@interface PKVerificationRequestRecord : NSObject <Swift>

{
    NSString *_currentStepIdentifier;
    NSString *_previousStepIdentifier;
    long long _verificationStatus;
    NSString *_passUniqueID;
    NSDate *_date;
    PKVerificationChannel *_channel;
    NSArray *_allChannels;
    NSDictionary *_requiredFieldData;
}

@property (copy, nonatomic) NSString *currentStepIdentifier;
@property (copy, nonatomic) NSString *previousStepIdentifier;
@property (nonatomic) long long verificationStatus;
@property (copy, nonatomic) NSString *passUniqueID;
@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) PKVerificationChannel *channel;
@property (copy, nonatomic) NSArray *allChannels;
@property (copy, nonatomic) NSDictionary *requiredFieldData;

+ (_Bool)supportsSecureCoding;
+ (id)verificationRequestRecordForPass:(id)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)requiredVerificationFields;

@end
