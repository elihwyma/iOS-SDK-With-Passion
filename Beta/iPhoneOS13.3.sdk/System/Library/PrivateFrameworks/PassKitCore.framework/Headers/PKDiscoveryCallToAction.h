/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSDictionary, NSSet, NSString, PKColor, PKDiscoveryMedia;

@interface PKDiscoveryCallToAction : NSObject <Swift>

{
    NSSet *_allowedFeatureIdentifiers;
    NSString *_transitNetworkIdentifier;
    NSString *_referrerIdentifier;
    _Bool _foregroundContentModeIsSet;
    _Bool _roundIcon;
    NSString *_titleKey;
    NSString *_subtitleKey;
    NSString *_buttonTextKey;
    long long _action;
    NSDictionary *_actionInfo;
    PKDiscoveryMedia *_icon;
    PKColor *_backgroundColor;
    long long _foregroundContentMode;
    NSString *_localizedTitle;
    NSString *_localizedSubtitle;
    NSString *_localizedButtonText;
}

@property (retain, nonatomic) NSString *localizedTitle;
@property (retain, nonatomic) NSString *localizedSubtitle;
@property (retain, nonatomic) NSString *localizedButtonText;
@property (nonatomic, readonly) NSString *titleKey;
@property (nonatomic, readonly) NSString *subtitleKey;
@property (nonatomic, readonly) NSString *buttonTextKey;
@property (nonatomic, readonly) long long action;
@property (nonatomic, readonly) NSDictionary *actionInfo;
@property (nonatomic, readonly) NSString *referrerIdentifier;
@property (nonatomic, readonly) PKDiscoveryMedia *icon;
@property (nonatomic, getter=shouldRoundIcon) _Bool roundIcon;
@property (nonatomic, readonly) PKColor *backgroundColor;
@property (nonatomic) long long foregroundContentMode;
@property (nonatomic, readonly) long long paymentSetupMode;
@property (nonatomic, readonly) NSSet *allowedFeatureIdentifiers;
@property (nonatomic, readonly) NSString *transitNetworkIdentifier;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)localizeWithBundle:(id)arg1;
- (void)localizeWithBundle:(id)arg1 table:(id)arg2;

@end
