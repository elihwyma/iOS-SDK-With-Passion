/*
 Image: /System/Library/PrivateFrameworks/vCard.framework/vCard
 */

#import <Foundation/NSObject.h>

@class CNVCardDateComponentsParser, CNVCardLexer, CNVCardMutableNameComponents, CNVCardReadingOptions, CNVCardSelectorMap, NSArray, NSData, NSDateComponents, NSMutableArray, NSMutableDictionary, NSMutableString, NSString;

@protocol CNVCardParsedResultBuilder;

@interface CNVCardParser : NSObject

{
    CNVCardReadingOptions *_options;
    CNVCardLexer *_lexer;
    NSData *_data;
    unsigned long long _defaultEncoding;
    _Bool _hasImportErrors;
    CNVCardDateComponentsParser *_dateComponentsParser;
    CNVCardSelectorMap *_parsingSelectorMap;
    CNVCardSelectorMap *_parameterSelectorMap;
    id <CNVCardParsedResultBuilder> _resultBuilder;
    _Bool _30vCard;
    CNVCardMutableNameComponents *_nameComponents;
    NSDateComponents *_bday;
    NSDateComponents *_altBday;
    NSMutableArray *_emails;
    NSMutableArray *_dateComponents;
    NSMutableArray *_phones;
    NSMutableArray *_addresses;
    NSMutableArray *_relatedNames;
    NSMutableArray *_urls;
    NSMutableArray *_calendarURIs;
    NSMutableString *_notes;
    NSMutableDictionary *_extensions;
    NSMutableArray *_unknowns;
    NSString *_uid;
    NSString *_carddavUID;
    NSMutableArray *_instantMessagingAddresses;
    NSMutableArray *_socialProfiles;
    NSMutableDictionary *_activityAlerts;
    NSMutableArray *_cropRects;
    _Bool _fullNameHasZeroLength;
    NSData *_imageData;
    NSString *_imageGroup;
    NSString *_imageReference;
    unsigned long long _startingPositionOfCurrentProperty;
    NSArray *_itemParameters;
    NSString *_grouping;
    unsigned long long _encoding;
    _Bool _quotedPrintable;
    _Bool _base64;
}

@property (nonatomic, readonly) CNVCardReadingOptions *options;
@property (nonatomic, readonly) id <CNVCardParsedResultBuilder> resultBuilder;
@property (copy, nonatomic) NSData *imageData;

+ (unsigned long long)countOfCardsInData:(id)arg1;
+ (id)parseData:(id)arg1 options:(id)arg2 resultFactory:(id)arg3;
+ (_Bool)parseFirstResultInData:(id)arg1 resultBuilder:(id)arg2;
+ (unsigned long long)inferredStringEncodingFromData:(id)arg1;
+ (id)newParsingSelectorMap;
+ (id)newParameterSelectorMap;
+ (id)parseData:(id)arg1 resultFactory:(id)arg2;

- (id)initWithData:(id)arg1;
- (id)initWithData:(id)arg1 options:(id)arg2;
- (id)validCountryCodes;
- (long long)currentPosition;
- (id)nextBase64Data;
- (_Bool)atEOF;
- (void)cleanUpCardState;
- (id)phoneLabel;
- (id)parseRemainingLine;
- (_Bool)hasImportErrors;
- (_Bool)parseNextResultUsingResultBuilder:(id)arg1;
- (_Bool)parse_ADD;
- (_Bool)parse_ADR;
- (_Bool)parse_BDAY;
- (_Bool)parse_CALURI;
- (_Bool)parse_EMAIL;
- (_Bool)parse_FN;
- (_Bool)parse_IMPP;
- (_Bool)parse_N;
- (_Bool)parse_NICKNAME;
- (_Bool)parse_NOTE;
- (_Bool)parse_ORG;
- (_Bool)parse_X_PHONETIC_ORG;
- (_Bool)parse_PHOTO;
- (_Bool)parse_PRODID;
- (_Bool)parse_REV;
- (_Bool)parse_TEL;
- (_Bool)parse_TITLE;
- (_Bool)parse_UID;
- (_Bool)parse_URL;
- (_Bool)parse_VERSION;
- (_Bool)parse_X_ABADR;
- (_Bool)parse_X_ABDATE;
- (_Bool)parse_X_ABLABEL;
- (_Bool)parse_X_ABORDER;
- (_Bool)parse_X_ABPHOTO;
- (_Bool)parse_X_AIM;
- (_Bool)parse_X_AIM_ID;
- (_Bool)parse_X_ABRELATEDNAMES;
- (_Bool)parse_X_ABSHOWAS;
- (_Bool)parse_X_ABUID;
- (_Bool)parse_X_ACTIVITY_ALERT;
- (_Bool)parse_X_ALTBDAY;
- (_Bool)parse_X_APPLE_SUBADMINISTRATIVEAREA;
- (_Bool)parse_X_APPLE_SUBLOCALITY;
- (_Bool)parse_X_GOOGLE_ID;
- (_Bool)parse_X_GOOGLE_TALK;
- (_Bool)parse_X_GTALK;
- (_Bool)parse_X_ICQ;
- (_Bool)parse_X_ICQ_ID;
- (_Bool)parse_X_JABBER;
- (_Bool)parse_X_JABBER_ID;
- (_Bool)parse_X_MAIDENNAME;
- (_Bool)parse_X_MSN;
- (_Bool)parse_X_MSN_ID;
- (_Bool)parse_X_PHONETIC_FIRST_NAME;
- (_Bool)parse_X_PHONETIC_LAST_NAME;
- (_Bool)parse_X_PHONETIC_MIDDLE_NAME;
- (_Bool)parse_X_PRONUNCIATION_FIRST_NAME;
- (_Bool)parse_X_PRONUNCIATION_LAST_NAME;
- (_Bool)parse_X_QQ;
- (_Bool)parse_X_QQ_ID;
- (_Bool)parse_X_SKYPE;
- (_Bool)parse_X_SKYPE_ID;
- (_Bool)parse_X_SKYPE_USERNAME;
- (_Bool)parse_X_SOCIALPROFILE;
- (_Bool)parse_X_YAHOO;
- (_Bool)parse_X_YAHOO_ID;
- (_Bool)parse_X_ADDRESSBOOKSERVER_PHONEME_DATA;
- (_Bool)parse_X_APPLE_LIKENESS_SERVICE_IDENTIFIER;
- (_Bool)parse_X_APPLE_LIKENESS_SOURCE;
- (_Bool)parse_X_APPLE_GUARDIAN_WHITELISTED;
- (void)parameter_QUOTED_PRINTABLE:(id)arg1;
- (void)parameter_BASE64:(id)arg1;
- (void)parameter_CHARSET:(id)arg1;
- (void)parameter_ENCODING:(id)arg1;
- (id)nextResultWithFactory:(id)arg1 progressLength:(long long *)arg2;
- (id)pool_nextResultWithFactory:(id)arg1 progressLength:(long long *)arg2;
- (_Bool)parseLine;
- (void)reportValues;
- (id)parseParameters;
- (SEL)parsingSelectorForTag:(id)arg1;
- (_Bool)parseValueUsingSelector:(SEL)arg1;
- (id)parseUnknownValueStartingAtPosition:(unsigned long long)arg1;
- (id)makeLineWithValue:(id)arg1 forProperty:(id)arg2;
- (_Bool)advancePastSemicolon;
- (id)parseStringValue;
- (_Bool)parseInstantMessageValueWithService:(id)arg1;
- (void)reportValue:(id)arg1 forProperty:(id)arg2;
- (_Bool)parseExtension:(id)arg1;
- (id)parseArrayValue;
- (id)firstValueForKey:(id)arg1 inExtension:(id)arg2;
- (id)firstParameterWithName:(id)arg1;
- (id)parameterValuesForName:(id)arg1;
- (id)genericLabelForProperty:(id)arg1;
- (id)makeLineWithLabel:(id)arg1 value:(id)arg2;
- (id)nextParameterInCurrentLine;
- (SEL)handlerSelectorForParameterName:(id)arg1;
- (id)parseParameterValues;
- (void)processNameValues;
- (void)processExtensionValues;
- (void)reportMultiValueLines:(id)arg1 forProperty:(id)arg2;
- (_Bool)valueIsEmpty:(id)arg1;
- (id)firstValueForKey:(id)arg1 inExtensionGroup:(id)arg2;
- (id)fallbackLabelForProperty:(id)arg1;
- (id)typeParameters;
- (id)firstCustomLabelForProperty:(id)arg1 types:(id)arg2;
- (id)resultsWithFactory:(id)arg1;
- (id)firstValueForParameterWithName:(id)arg1;
- (id)unparsedStringForCurrentProperty;
- (id)parseBase64Data;

@end
