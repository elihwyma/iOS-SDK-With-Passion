/*
 Image: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
 */

#import <Foundation/NSObject.h>

@class NSData, NSDate, NSDictionary, NSNumber, NSString;

@interface CDPDevice : NSObject

{
    NSString *_localizedName;
    NSString *_model;
    NSString *_modelVersion;
    NSString *_modelClass;
    unsigned long long _platform;
    NSString *_recordID;
    NSString *_machineID;
    NSData *_simplePublicKey;
    NSDate *_recordDate;
    NSDictionary *_recordInfo;
    _Bool _hasRandomSecret;
    _Bool _hasNumericSecret;
    NSNumber *_numericSecretLength;
    _Bool _isUsingMultipleiCSC;
    unsigned long long _remainingAttempts;
    NSString *_deviceColor;
    NSString *_enclosureColor;
    NSString *_serialNumber;
    _Bool _isCurrentDevice;
    NSString *_localizedDescription;
    unsigned long long _recoveryStatus;
    NSNumber *_coolOffPeriod;
}

@property (copy, nonatomic) NSString *localizedName;
@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) NSString *modelVersion;
@property (copy, nonatomic) NSString *modelClass;
@property (nonatomic) unsigned long long platform;
@property (copy, nonatomic) NSString *recordID;
@property (copy, nonatomic) NSString *machineID;
@property (copy, nonatomic) NSDate *recordDate;
@property (nonatomic) _Bool hasRandomSecret;
@property (nonatomic) _Bool hasNumericSecret;
@property (copy, nonatomic) NSNumber *numericSecretLength;
@property (nonatomic) _Bool isUsingMultipleiCSC;
@property (nonatomic) unsigned long long remainingAttempts;
@property (copy, nonatomic) NSString *serialNumber;
@property (nonatomic) _Bool isCurrentDevice;
@property (nonatomic) unsigned long long recoveryStatus;
@property (retain, nonatomic) NSNumber *coolOffPeriod;
@property (copy, nonatomic) NSString *deviceColor;
@property (copy, nonatomic) NSString *enclosureColor;
@property (copy, nonatomic) NSDictionary *recordInfo;
@property (copy, nonatomic) NSData *simplePublicKey;
@property (nonatomic, readonly) unsigned long long localSecretType;
@property (copy, nonatomic) NSString *localizedDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
