/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSString, PKEnteredValueActionItem;

@interface PKPaymentPassAction : NSObject <Swift>

{
    NSDictionary *_rawDictionary;
    NSDictionary *_localizations;
    _Bool _hasRemoteContent;
    _Bool _featured;
    NSString *_identifier;
    unsigned long long _type;
    NSString *_title;
    NSString *_actionDescription;
    NSString *_confirmationTitle;
    NSString *_relevantPropertyIdentifier;
    NSDate *_availableFrom;
    NSDate *_availableUntil;
    NSString *_unavailableBeforeReason;
    NSString *_unavailableAfterReason;
    NSString *_serviceProviderIdentifier;
    NSString *_serviceProviderCountryCode;
    NSArray *_serviceProviderSupportedNetworks;
    unsigned long long _serviceProviderCapabilities;
    PKEnteredValueActionItem *_enteredValueItem;
    NSString *_headerText;
    NSString *_footerText;
    NSArray *_selectedActionItems;
}

@property (copy, nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) _Bool hasRemoteContent;
@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *actionDescription;
@property (copy, nonatomic, readonly) NSString *confirmationTitle;
@property (nonatomic, readonly) _Bool featured;
@property (copy, nonatomic, readonly) NSString *relevantPropertyIdentifier;
@property (copy, nonatomic, readonly) NSDate *availableFrom;
@property (copy, nonatomic, readonly) NSDate *availableUntil;
@property (copy, nonatomic, readonly) NSString *unavailableBeforeReason;
@property (copy, nonatomic, readonly) NSString *unavailableAfterReason;
@property (copy, nonatomic, readonly) NSString *serviceProviderIdentifier;
@property (copy, nonatomic, readonly) NSString *serviceProviderCountryCode;
@property (copy, nonatomic, readonly) NSArray *serviceProviderSupportedNetworks;
@property (nonatomic, readonly) unsigned long long serviceProviderCapabilities;
@property (nonatomic, readonly) PKEnteredValueActionItem *enteredValueItem;
@property (copy, nonatomic, readonly) NSString *headerText;
@property (copy, nonatomic, readonly) NSString *footerText;
@property (copy, nonatomic, readonly) NSArray *selectedActionItems;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2;
- (void)_processLocalizableStrings:(CDUnknownBlockType)arg1;
- (id)_localizableKeys;
- (id)actionUpdatedWithDictionary:(id)arg1;

@end
