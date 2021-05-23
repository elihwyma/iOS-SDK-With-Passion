/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <Foundation/NSObject.h>

#import <AppStoreDaemon/Swift-Protocol.h>

@class NSArray, NSDate, NSString, NSURL;

@interface ASDPurchaseHistoryApp : NSObject <Swift>

{
    _Bool _familyShared;
    _Bool _firstParty;
    _Bool _hasMessagesExtension;
    _Bool _hasP3;
    _Bool _hidden;
    _Bool _hiddenFromSpringboard;
    _Bool _is32BitOnly;
    _Bool _isPreorder;
    _Bool _supportsIPad;
    _Bool _supportsIPhone;
    _Bool _supportsLayeredImage;
    _Bool _watchAppDeliveredIniOSApp;
    _Bool _watchAppRunsIndependently;
    _Bool _watchOnly;
    unsigned int _purchaseToken;
    NSString *_bundleID;
    NSString *_circularIconURLString;
    long long _contentRatingFlags;
    NSDate *_datePurchased;
    NSString *_developerName;
    long long _genreID;
    NSString *_genreName;
    NSString *_iconURLString;
    NSString *_longTitle;
    NSString *_ovalIconURLString;
    NSURL *_preflightPackageURL;
    NSURL *_productURL;
    long long _purchaserDSID;
    NSString *_redownloadParams;
    NSArray *_requiredCapabilities;
    long long _storeItemID;
    NSString *_title;
    unsigned long long _lockerItemID;
}

@property (copy) NSString *bundleID;
@property (copy) NSString *circularIconURLString;
@property long long contentRatingFlags;
@property (copy) NSDate *datePurchased;
@property (copy) NSString *developerName;
@property (getter=isFamilyShared) _Bool familyShared;
@property (getter=isFirstParty) _Bool firstParty;
@property long long genreID;
@property (copy) NSString *genreName;
@property _Bool hasMessagesExtension;
@property _Bool hasP3;
@property (getter=isHidden) _Bool hidden;
@property (getter=isHiddenFromSpringboard) _Bool hiddenFromSpringboard;
@property (copy) NSString *iconURLString;
@property _Bool is32BitOnly;
@property _Bool isPreorder;
@property (copy) NSString *longTitle;
@property (copy) NSString *ovalIconURLString;
@property (copy) NSURL *preflightPackageURL;
@property (copy) NSURL *productURL;
@property long long purchaserDSID;
@property (copy) NSString *redownloadParams;
@property (copy) NSArray *requiredCapabilities;
@property long long storeItemID;
@property _Bool supportsIPad;
@property _Bool supportsIPhone;
@property _Bool supportsLayeredImage;
@property (copy) NSString *title;
@property _Bool watchAppDeliveredIniOSApp;
@property _Bool watchAppRunsIndependently;
@property _Bool watchOnly;
@property unsigned int purchaseToken;
@property unsigned long long lockerItemID;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (int)_bitfieldForBooleanProperties;
- (void)_setBooleanPropertiesForBitfield:(int)arg1;

@end
