/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <CoreParsec/Swift-Protocol.h>

@class NSArray, NSData, NSString, _PARLocation, _PARMapsSession;

@protocol _PARFlightRequest <Swift>

@property (copy, nonatomic) NSString *query;
@property (nonatomic) unsigned long long date;
@property (copy, nonatomic) NSString *secretKey;
@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSString *locale;
@property (copy, nonatomic) NSString *effectiveSystemLanguage;
@property (copy, nonatomic) NSArray *preferredLanguages;
@property (copy, nonatomic) NSString *inputMode;
@property (retain, nonatomic) _PARLocation *location;
@property (copy, nonatomic) NSData *installedAppsSignature;
@property (nonatomic) int routineMode;
@property (nonatomic) int transportationMode;
@property (copy, nonatomic) NSString *userGUID;
@property (nonatomic) float uiScale;
@property (retain, nonatomic) _PARMapsSession *mapsSession;
@property (copy, nonatomic) NSString *flightBundleId;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;
- (unsigned short)addPreferredLanguages: /* Error: Ran out of types for this method. */;
- (unsigned short)clearPreferredLanguages;
- (unsigned short)preferredLanguagesCount;
- (unsigned short)preferredLanguagesAtIndex: /* Error: Ran out of types for this method. */;

@end
