/*
 Image: /System/Library/PrivateFrameworks/NewDeviceOutreach.framework/NewDeviceOutreach
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSString;

@interface NDOWarranty : NSObject

{
    _Bool _covered;
    _Bool _acOfferEligible;
    _Bool _acOfferDisplay;
    _Bool _acOfferSettingsAppBadge;
    _Bool _acOfferSettingsRowBadge;
    NSDate *_coverageEndDate;
    NSString *_localizedCoveredDeviceDateLabelFormat;
    NSString *_coverageLocalizedLabel;
    NSString *_coverageLocalizedDesc;
    NSString *_coverageLocalizedDescLong;
    NSString *_coverageLocalizedExpirationLabel;
    NSString *_footer1FormatString;
    NSString *_footer1LinkLabel;
    NSString *_footer1LinkURL;
    NSString *_footer2FormatString;
    NSString *_footer2LinkLabel;
    NSString *_footer2LinkURL;
    NSDate *_acOfferEligibleUntil;
    NSString *_acOfferIdentifier;
    NSString *_acLocalizedOfferLabel;
    NSString *_acLocalizedOfferPluralDescFormat;
    NSString *_acLocalizedOfferSingularDesc;
    NSString *_acLocalizedOfferCTA;
    NSString *_acLocalizedOfferDetails;
    NSString *_acLocalizedOfferDetailsPluralEligibilityFormat;
    NSString *_acLocalizedOfferDetailsSingularEligibility;
    double _acOfferDurationBeforeEndDate;
    NSArray *_acOfferToggle;
    NSDate *_coverageValidityDate;
    NSDictionary *_dictionaryRepresentation;
}

@property _Bool covered;
@property (retain) NSDate *coverageEndDate;
@property (retain) NSDate *coverageValidityDate;
@property (retain) NSString *localizedCoveredDeviceDateLabelFormat;
@property (retain) NSString *coverageLocalizedLabel;
@property (retain) NSString *coverageLocalizedDesc;
@property (retain) NSString *coverageLocalizedDescLong;
@property (retain) NSString *coverageLocalizedExpirationLabel;
@property (retain) NSString *footer1FormatString;
@property (retain) NSString *footer1LinkLabel;
@property (retain) NSString *footer1LinkURL;
@property (retain) NSString *footer2FormatString;
@property (retain) NSString *footer2LinkLabel;
@property (retain) NSString *footer2LinkURL;
@property _Bool acOfferEligible;
@property (retain) NSDate *acOfferEligibleUntil;
@property (retain) NSString *acOfferIdentifier;
@property (retain) NSString *acLocalizedOfferLabel;
@property (retain) NSString *acLocalizedOfferPluralDescFormat;
@property (retain) NSString *acLocalizedOfferSingularDesc;
@property (retain) NSString *acLocalizedOfferCTA;
@property (retain) NSString *acLocalizedOfferDetails;
@property (retain) NSString *acLocalizedOfferDetailsPluralEligibilityFormat;
@property (retain) NSString *acLocalizedOfferDetailsSingularEligibility;
@property _Bool acOfferDisplay;
@property _Bool acOfferSettingsAppBadge;
@property _Bool acOfferSettingsRowBadge;
@property double acOfferDurationBeforeEndDate;
@property (retain) NSArray *acOfferToggle;
@property (retain) NSDictionary *dictionaryRepresentation;
@property (readonly) NSString *acLocalizedOfferDesc;
@property (readonly) NSString *acLocalizedOfferDetailsEligibility;
@property (readonly) unsigned int daysEligible;

+ (_Bool)supportsSecureCoding;
+ (id)_warrantyPath;
+ (id)warrantyWithDictionary:(id)arg1;
+ (id)cachedWarranty;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)cache;
- (id)_dateWithEpochNumber:(id)arg1;

@end
