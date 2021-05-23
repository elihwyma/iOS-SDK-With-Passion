/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSDate, NSString, PKCurrencyAmount;

@interface PKAccountServicingEvent : NSObject <Swift>

{
    NSString *_identifier;
    unsigned long long _status;
    unsigned long long _activityType;
    NSString *_activityIdentifier;
    NSDate *_openDate;
    NSDate *_lastUpdatedDate;
    PKCurrencyAmount *_amount;
    NSString *_reasonCode;
}

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long status;
@property (nonatomic) unsigned long long activityType;
@property (copy, nonatomic) NSString *activityIdentifier;
@property (copy, nonatomic) NSDate *openDate;
@property (copy, nonatomic) NSDate *lastUpdatedDate;
@property (copy, nonatomic) PKCurrencyAmount *amount;
@property (copy, nonatomic) NSString *reasonCode;
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
- (id)initWithDictionary:(id)arg1;
- (id)initWithRecord:(id)arg1;
- (void)encodeWithRecord:(id)arg1;

@end
