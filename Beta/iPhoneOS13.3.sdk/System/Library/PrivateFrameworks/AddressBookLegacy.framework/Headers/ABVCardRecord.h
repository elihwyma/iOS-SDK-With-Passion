/*
 Image: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
 */

#import <Foundation/NSObject.h>

@interface ABVCardRecord : NSObject

{
    void *_record;
    struct __CFArray *_properties;
}

+ (struct __CFArray *)supportedProperties;
+ (_Bool)includeREVInVCards;
+ (_Bool)includeNotesInVCards;
+ (_Bool)includeImageURIInVCards;
+ (_Bool)includeABClipRectInVCardPhotos;
+ (_Bool)privateVCardEnabled;
+ (void)setPrivateVCardEnabled:(_Bool)arg1;
+ (void)setVCardField:(id)arg1 isPrivate:(_Bool)arg2;
+ (void)clearPrivateFields;
+ (_Bool)vcardFieldisPrivate:(id)arg1;
+ (void)setIncludeNotesInVCards:(_Bool)arg1;
+ (void)setIncludeREVInVCards:(_Bool)arg1;
+ (void)setIncludePhotosInVCards:(_Bool)arg1;
+ (_Bool)includePhotosInVCards;

- (id)init;
- (void)dealloc;
- (id)_fullName;
- (void *)valueForProperty:(unsigned int)arg1;
- (_Bool)setValue:(void *)arg1 forProperty:(unsigned int)arg2;
- (id)imageData;
- (void *)record;
- (id)initWithRecord:(void *)arg1;
- (id)alternateName;
- (id)_21vCardRepresentationAsData;
- (id)_copyVCardRepresentationAsStringIncludeExternalProperties:(_Bool)arg1 withPhoto:(id)arg2 extraPhotoParameters:(id)arg3 includePrivateData:(_Bool)arg4;
- (_Bool)useThumbnailImageFormatIfAvailable;
- (id)_copyGroupVCardRepresentationAsStringIncludeExternalProperties:(_Bool)arg1;
- (id)newISO8061StringFromDate:(id)arg1;
- (id)stringForAlternateBirthdayComponent:(id)arg1 key:(id)arg2 format:(id)arg3;
- (void *)copyValueForProperty:(unsigned int)arg1;
- (_Bool)_showField:(unsigned int)arg1 identifier:(int)arg2;
- (struct __CFString *)_vCardKeyForGenericLabel:(id)arg1;
- (void)appendLabel:(id)arg1 toVCardRep:(id)arg2 inGroup:(id)arg3;
- (id)encodedDataForValue:(id)arg1 charsetName:(id *)arg2;
- (id)encodedLineForValue:(id)arg1;
- (id)propertyLineForIMHandles:(id)arg1 labels:(id)arg2 vCardProperty:(id)arg3;
- (id)_valueForPersonSounds:(void *)arg1 identifier:(int)arg2;
- (void)_addPersonSounds:(void *)arg1 identifier:(int)arg2 toActivityAlerts:(id *)arg3 activity:(id)arg4 alert:(id)arg5;
- (id)_dictionaryForActivityAlerts;
- (id)_typeParameterForToneType:(id)arg1;
- (id)_fullNameIncludingAuxiliaryElements:(_Bool)arg1;
- (_Bool)_isCompany;
- (id)_realCompositeName;
- (struct __CFString *)_vCardKeyForEmailLabel:(id)arg1;
- (id)_vCardKeysForPhoneLabel:(id)arg1;
- (id)_vCardKeyForAddressLabel:(id)arg1 vCard3:(_Bool)arg2;
- (id)propertyLineForGenericABProperty21:(unsigned int)arg1 vCardProperty:(id)arg2;
- (_Bool)_showField:(unsigned int)arg1;
- (id)ISO8061StringFromDate:(id)arg1;
- (id)dataForInstantMessageProperties;
- (id)dataForSocialProfileProperty:(void *)arg1 groupCount:(long long *)arg2 includePrivateData:(_Bool)arg3;
- (id)ISO8061StringFromDateTime:(id)arg1;
- (id)stringFromAlternateBirthday:(id)arg1;
- (_Bool)_usesArrayForExternalPropKey:(id)arg1;
- (id)_prodID;
- (void)_appendPropValue:(id)arg1 forPropKey:(id)arg2 toOutString:(id)arg3 usingDelimiter:(id)arg4 inGroup:(id)arg5;
- (id)propertyLineForGenericABProperty:(unsigned int)arg1 vCardProperty:(id)arg2 is21:(_Bool)arg3 groupCount:(long long *)arg4;
- (id)propertyLineForInstantMessageHandles:(_Bool)arg1 groupCount:(long long *)arg2 includePrivateData:(_Bool)arg3;
- (id)propertyLineForIMPPProperty:(_Bool)arg1 groupCount:(long long *)arg2 includePrivateData:(_Bool)arg3;
- (id)dataForSoundProperty:(void *)arg1;
- (id)initWithVCardRepresentation:(id)arg1;
- (id)vCardRepresentationForMode:(int)arg1;

@end
