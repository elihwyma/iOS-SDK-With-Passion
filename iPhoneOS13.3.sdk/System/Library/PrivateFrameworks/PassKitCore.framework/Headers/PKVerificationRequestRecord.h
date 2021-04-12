//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSDate, NSDictionary, NSString, PKVerificationChannel;

@interface PKVerificationRequestRecord : NSObject <NSSecureCoding>
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

+ (BOOL)supportsSecureCoding;
+ (id)verificationRequestRecordForPass:(id)arg1;
@property(copy, nonatomic) NSDictionary *requiredFieldData; // @synthesize requiredFieldData=_requiredFieldData;
@property(copy, nonatomic) NSArray *allChannels; // @synthesize allChannels=_allChannels;
@property(copy, nonatomic) PKVerificationChannel *channel; // @synthesize channel=_channel;
@property(copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(copy, nonatomic) NSString *passUniqueID; // @synthesize passUniqueID=_passUniqueID;
@property(nonatomic) long long verificationStatus; // @synthesize verificationStatus=_verificationStatus;
@property(copy, nonatomic) NSString *previousStepIdentifier; // @synthesize previousStepIdentifier=_previousStepIdentifier;
@property(copy, nonatomic) NSString *currentStepIdentifier; // @synthesize currentStepIdentifier=_currentStepIdentifier;
// - (void).cxx_destruct;
- (id)requiredVerificationFields;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

