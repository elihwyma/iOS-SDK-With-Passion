/*
 Image: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
 */

#import <NSObject.h>

@class NSArray, NSDate, NSDictionary, NSSet, NSString;

@interface BYLocationController : NSObject

{
    NSString *_guessedCountryFromTelephony;
    NSArray *_guessedCountries;
    NSDictionary *_aliasDict;
    NSSet *_validCountries;
    struct __WiFiManagerClient *fWifiManager;
    struct __WiFiDeviceClient *fWifiDevice;
    _Bool _fakeMode;
    NSArray *_firstGuessedLanguages;
    NSDate *_wirelessScanStartDate;
}

@property (retain, nonatomic) NSDate *wirelessScanStartDate;
@property (retain, nonatomic) NSArray *guessedCountries;
@property (retain, nonatomic) NSArray *firstGuessedLanguages;
@property (nonatomic) _Bool fakeMode;

+ (id)sharedBuddyLocationController;

- (id)init;
- (void)dealloc;
- (void)reset;
- (id)aliasDict;
- (id)_checkForAliases:(id)arg1;
- (id)_countriesFromDefaults;
- (_Bool)getCountryFromTelephony;
- (void)_startWifiScan;
- (void)_closeWifiConnection;
- (id)_countryFromTelephony;
- (id)_checkedArrayForString:(id)arg1;
- (void)_setGuessedCountryDefault:(id)arg1;
- (void)_getWifiDevice;
- (void)_scanWifiList;
- (id)_checkForAliasesOrInvalid:(id)arg1;
- (id)guessedCountryFromTelephony;
- (id)guessedLanguages;
- (void)_scanWifiListWithDevice:(struct __WiFiDeviceClient *)arg1;
- (void)_scanComplete:(id)arg1 error:(_Bool)arg2;

@end
