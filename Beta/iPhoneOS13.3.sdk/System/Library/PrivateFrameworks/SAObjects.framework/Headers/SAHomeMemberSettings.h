/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSArray, NSNumber, NSString, SAPerson, SAVoice;

@interface SAHomeMemberSettings : AceObject <Swift>

@property (copy, nonatomic) NSString *countryCode;
@property (retain, nonatomic) SAPerson *meCard;
@property (copy, nonatomic) NSArray *parentalRestrictions;
@property (copy, nonatomic) NSString *preferredLanguage;
@property (copy, nonatomic) NSString *region;
@property (copy, nonatomic) NSString *temperatureUnit;
@property (retain, nonatomic) SAVoice *ttsVoice;
@property (copy, nonatomic) NSNumber *twentyFourHourTimeDisplay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)homeMemberSettings;
+ (id)homeMemberSettingsWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
