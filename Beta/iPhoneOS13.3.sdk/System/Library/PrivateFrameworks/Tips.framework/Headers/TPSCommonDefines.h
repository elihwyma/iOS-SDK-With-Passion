/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Foundation/NSObject.h>

@class NSDateFormatter, NSMutableArray, NSMutableDictionary, NSSet, NSString, NSUserDefaults, TPSTipStatusController;

@interface TPSCommonDefines : NSObject

{
    long long _experimentCamp;
    NSString *_model;
    NSMutableArray *_cloudDevices;
    _Bool _carryMode;
    _Bool _tipsAccessAllowed;
    _Bool _supportsUIApplication;
    _Bool _phoneUI;
    int _maxVersion;
    NSString *_majorVersion;
    NSUserDefaults *_appGroupDefaults;
    NSMutableDictionary *_appBundleIDMap;
    NSString *_hexRepresentationOfProuctHash;
    NSDateFormatter *_CDSDateFormatter;
    long long _assetRatioType;
    TPSTipStatusController *_tipStatusController;
    NSSet *_complexTargetingRuleSet;
    NSMutableDictionary *_collectionStatusMap;
}

@property (retain, nonatomic) NSSet *complexTargetingRuleSet;
@property (retain, nonatomic) NSMutableDictionary *collectionStatusMap;
@property (nonatomic, readonly) _Bool carryMode;
@property (nonatomic, readonly) _Bool tipsAccessAllowed;
@property (nonatomic) _Bool supportsUIApplication;
@property (nonatomic, readonly) long long experimentCamp;
@property (nonatomic, readonly, getter=isPhoneUI) _Bool phoneUI;
@property (nonatomic) int maxVersion;
@property (retain, nonatomic) NSString *majorVersion;
@property (nonatomic, readonly) NSUserDefaults *appGroupDefaults;
@property (retain, nonatomic) NSMutableDictionary *appBundleIDMap;
@property (retain, nonatomic) NSString *hexRepresentationOfProuctHash;
@property (retain, nonatomic) NSDateFormatter *CDSDateFormatter;
@property (nonatomic, readonly) long long assetRatioType;
@property (retain, nonatomic) TPSTipStatusController *tipStatusController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)osBuild;
+ (_Bool)isInternalBuild;
+ (_Bool)isPriorityDiscoverabilityInAppHint:(unsigned long long)arg1;
+ (id)universalIdentiferWithContentIdentifier:(id)arg1;
+ (id)deviceFamilyIdentifier;
+ (_Bool)isPriorityDiscoverabilityNotification:(unsigned long long)arg1;
+ (void)targetInfoForArray:(id)arg1 targetedArray:(id *)arg2 excludeArray:(id *)arg3 changeToLowerCase:(_Bool)arg4;
+ (_Bool)hardwareChanged;
+ (id)deviceFamilyIdentiferWithContentIdentifier:(id)arg1;
+ (_Bool)validPublishDateForTip:(id)arg1;
+ (unsigned long long)displayTypeForPriority:(unsigned long long)arg1;

- (id)init;
- (void)reloadModelInformation;
- (_Bool)hasLocaleChanged;
- (void)clearDataCache;
- (void)updateCollectionStatus:(unsigned long long)arg1 collections:(id)arg2;
- (id)dateForCollectionIdentifier:(id)arg1 dateType:(unsigned long long)arg2;
- (id)collectionStatusForCollectionIdentifier:(id)arg1;
- (void)syncCollectionStatusMap;
- (id)lowercaseModelWithDashSeparator;
- (id)lowercaseModelWithNoSpace;
- (id)modelWithSeparator:(id)arg1 lowercase:(_Bool)arg2;
- (id)contentURLWithTipIdentifier:(id)arg1 maxLanguageCount:(unsigned long long)arg2;
- (_Bool)appValidWithIdentifier:(id)arg1;
- (_Bool)validWithSystem:(id)arg1;
- (_Bool)validWithTargetRegions:(id)arg1;
- (_Bool)validWithTargetDevices:(id)arg1;
- (_Bool)validWithTargetApps:(id)arg1;
- (id)appBundleIDForInstalledAppWithIdentifier:(id)arg1;
- (void)updateExperimentCamp:(long long)arg1;
- (id)reloadAppGroupDefaults;
- (id)collectionIdentifierToUseForCollectionIdentifiers:(id)arg1;
- (void)featuredCollection:(id)arg1;
- (void)viewedCollection:(id)arg1;
- (void)activatedCollections:(id)arg1;
- (void)resetCollectionStatusMap;
- (id)activateDateForCollectionIdentifier:(id)arg1;
- (id)collectionPathForCollectionIdentifier:(id)arg1 languageCode:(id)arg2 isDark:(_Bool)arg3;
- (id)tipURLForIdentifier:(id)arg1;
- (id)tipsListURL;
- (id)tipsDeliveryRulesURL;
- (_Bool)tipAllowsSimpleTargetingRulesMatch:(id)arg1;
- (_Bool)tipValidWithSimpleTargetingRules:(id)arg1;

@end
