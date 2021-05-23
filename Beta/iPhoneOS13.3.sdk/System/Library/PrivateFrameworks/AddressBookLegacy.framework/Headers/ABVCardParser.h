/*
 Image: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
 */

#import <Foundation/NSObject.h>

@class ABVCardLexer, ABVCardValueSetter, ABVCardWatchdogTimer, NSData, NSMutableArray, NSMutableDictionary, NSMutableString, NSString;

@interface ABVCardParser : NSObject

{
    ABVCardValueSetter *_valueSetter;
    void *_source;
    ABVCardLexer *_lexer;
    NSData *_data;
    unsigned long long _defaultEncoding;
    _Bool _hasImportErrors;
    _Bool _30vCard;
    NSString *_first;
    NSString *_last;
    NSString *_org;
    NSString *_formattedName;
    NSMutableArray *_emails;
    NSMutableArray *_dates;
    NSMutableArray *_phones;
    NSMutableArray *_addresses;
    NSMutableArray *_aims;
    NSMutableArray *_jabbers;
    NSMutableArray *_msns;
    NSMutableArray *_yahoos;
    NSMutableArray *_icqs;
    NSMutableArray *_untypedIMs;
    NSMutableArray *_instantMessengers;
    NSMutableArray *_socialProfiles;
    NSMutableArray *_relatedNames;
    NSMutableArray *_urls;
    NSMutableDictionary *_activityAlerts;
    NSMutableString *_notes;
    NSMutableString *_otherNotes;
    NSMutableDictionary *_extensions;
    NSString *_uid;
    NSData *_imageData;
    NSString *_imageURI;
    int _cropRectX;
    int _cropRectY;
    int _cropRectWidth;
    int _cropRectHeight;
    NSData *_cropRectChecksum;
    NSMutableArray *_itemParameters;
    NSString *_grouping;
    unsigned long long _encoding;
    _Bool _quotedPrintable;
    _Bool _base64;
    ABVCardWatchdogTimer *_timer;
}

@property (nonatomic) void *source;

+ (struct __CFArray *)supportedProperties;

- (id)init;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)_valueSetter;
- (id)defaultLabel;
- (id)dateFromISO8601String:(id)arg1;
- (id)sortedPeopleAndProperties:(const struct __CFArray **)arg1;
- (_Bool)_usesArrayForExternalPropKey:(id)arg1;
- (id)initWithData:(id)arg1 watchdogTimer:(id)arg2;
- (void)cleanUpCardState;
- (void)setLocalRecordHasAdditionalProperties:(_Bool)arg1;
- (void)_setValueFromExtension:(id)arg1 forKey:(id)arg2 onAddress:(id)arg3 toKey:(id)arg4;
- (int)_addIMPPProfiles:(id)arg1 multiValue:(void *)arg2 uniquenessCheckingMultiValue:(void *)arg3;
- (int)_addIMHandles:(id)arg1 toService:(struct __CFString *)arg2 multiValue:(void *)arg3 uniquenessCheckingMultiValue:(void *)arg4;
- (_Bool)_setPersonSounds:(void *)arg1 identifier:(int)arg2 fromActivity:(id)arg3 alert:(id)arg4 otherValue:(id)arg5;
- (void)noteLackOfValueForProperty:(unsigned int)arg1;
- (void)addMultiValues:(id)arg1 toProperty:(unsigned int)arg2 valueComparator:(CDUnknownBlockType)arg3;
- (_Bool)_setStringValueOrNoteIfNull:(id)arg1 forProperty:(unsigned int)arg2;
- (id)_genericLabel;
- (id)parseSingleValue;
- (id)genericLabel;
- (id)phoneLabel;
- (id)_socialProfileService;
- (id)_socialProfileUsername;
- (id)_socialProfileUserId;
- (id)_socialProfileDisplayName;
- (id)_socialProfileTeamIdentifier;
- (id)_socialProfileBundleIdentifiers;
- (id)parseInstantMessengerProfile:(id)arg1;
- (_Bool)_setDataValueOrNoteIfNull:(id)arg1 forProperty:(unsigned int)arg2;
- (id)parseRemainingLine;
- (_Bool)parseUID;
- (_Bool)parseTEL;
- (_Bool)parseADR;
- (_Bool)parseORG;
- (id)parseURL;
- (id)defaultURLLabel;
- (_Bool)parseADD;
- (_Bool)parseEMAIL;
- (_Bool)addIMValueTo:(id)arg1;
- (_Bool)parsePhoto:(id)arg1;
- (_Bool)parseN;
- (_Bool)parseVERSION;
- (_Bool)parseABUID;
- (_Bool)parseABExtensionType:(id)arg1;
- (_Bool)parseBDAY;
- (_Bool)parseIMPP;
- (_Bool)parseNICKNAME;
- (_Bool)parseABDATE;
- (void)parseABOrder;
- (void)parseABPhoto;
- (_Bool)parseAlternateBirthday;
- (void)parseABShowAs;
- (_Bool)parseIMAGETYPE;
- (_Bool)parseIMAGEHASH;
- (_Bool)parseABMaiden;
- (_Bool)parseSocialProfiles;
- (_Bool)parseABReleatedNames;
- (_Bool)parseActivityAlerts;
- (_Bool)parseGuardianWhitelisted;
- (id)parseValueArray;
- (_Bool)_usesRemainingLineForExternalPropKey:(id)arg1;
- (_Bool)_handleUnknownTag:(id)arg1 withValue:(id)arg2;
- (_Bool)importToValueSetter:(id)arg1;
- (_Bool)parseItem;
- (_Bool)_setMultiValuesOrNoteIfNull:(id)arg1 forProperty:(unsigned int)arg2 valueComparator:(CDUnknownBlockType)arg3;
- (void)addAddressMultiValues;
- (void)addSocialProfileMultiValues;
- (void)addInstantMessageMultiValues;
- (void)addActivityAlertMultiValues;
- (void)noteLackOfValueForImageData;
- (_Bool)importToPerson:(void *)arg1 foundProperties:(const struct __CFArray **)arg2;
- (void *)copyNextPersonWithLength:(int *)arg1 foundProperties:(const struct __CFArray **)arg2;
- (_Bool)hasImportErrors;
- (struct __CFArray *)peopleAndProperties:(const struct __CFArray **)arg1;
- (_Bool)_setIntValueOrNoteIfNull:(int)arg1 forProperty:(int)arg2;
- (id)defaultADRLabel;

@end
