/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/CNContact.h>

@class CNActivityAlert, CNContactKeyVector, NSArray, NSData, NSDate, NSDateComponents, NSDictionary, NSString;

@interface CNMutableContact : CNContact

{
    _Bool _hasChanges;
    NSString *_cropRectID;
    NSData *_cropRectHash;
}

@property (copy) NSString *nameTitle;
@property (copy) NSString *firstName;
@property (copy) NSString *lastName;
@property (copy) NSString *maidenName;
@property (copy) NSString *phoneticFirstName;
@property (copy) NSString *phoneticLastName;
@property (copy) NSString *companyName;
@property (copy) NSArray *relatedNames;
@property (nonatomic) int iOSLegacyIdentifier;
@property (nonatomic) _Bool imageDataAvailable;
@property (copy, nonatomic) NSArray *calendarURIs;
@property (copy, nonatomic) NSString *cardDAVUID;
@property (copy, nonatomic) CNContactKeyVector *availableKeyDescriptor;
@property (copy, nonatomic) NSString *storeIdentifier;
@property (copy, nonatomic) NSDictionary *storeInfo;
@property (copy, nonatomic) NSString *searchIndex;
@property (copy, nonatomic) NSDictionary *activityAlerts;
@property (copy, nonatomic) NSString *sectionForSortingByGivenName;
@property (copy, nonatomic) NSString *sectionForSortingByFamilyName;
@property (copy, nonatomic) NSDate *modificationDate;
@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) CNContact *snapshot;
@property (nonatomic, getter=isPreferredForName) _Bool preferredForName;
@property (nonatomic, getter=isPreferredForImage) _Bool preferredForImage;
@property (copy, nonatomic) NSArray *linkedContacts;
@property (copy, nonatomic) NSString *linkIdentifier;
@property (nonatomic) struct CGRect cropRect;
@property (copy, nonatomic) NSData *thumbnailImageData;
@property (copy, nonatomic) NSString *cropRectID;
@property (copy, nonatomic) NSData *cropRectHash;
@property (copy, nonatomic) NSData *fullscreenImageData;
@property (copy, nonatomic) NSData *syncImageData;
@property (copy, nonatomic) CNActivityAlert *callAlert;
@property (copy, nonatomic) CNActivityAlert *textAlert;
@property (copy, nonatomic) NSString *phonemeData;
@property (copy, nonatomic) NSString *phoneticCompanyName;
@property (copy, nonatomic) NSString *externalIdentifier;
@property (copy, nonatomic) NSData *externalRepresentation;
@property (copy, nonatomic) NSString *externalModificationTag;
@property (copy, nonatomic) NSString *externalUUID;
@property (copy, nonatomic) NSString *externalImageURI;
@property (copy, nonatomic) NSString *mapsData;
@property (nonatomic, readonly) _Bool hasChanges;
@property (copy, nonatomic) NSString *pronunciationGivenName;
@property (copy, nonatomic) NSString *pronunciationFamilyName;
@property (copy, nonatomic) NSString *preferredLikenessSource;
@property (copy, nonatomic) NSString *preferredApplePersonaIdentifier;
@property (copy, nonatomic) NSString *preferredChannel;
@property (copy, nonatomic) NSString *downtimeWhitelist;
@property (copy, nonatomic) NSString *imageType;
@property (copy, nonatomic) NSData *imageHash;
@property (nonatomic) long long contactType;
@property (copy, nonatomic) NSString *namePrefix;
@property (copy, nonatomic) NSString *givenName;
@property (copy, nonatomic) NSString *middleName;
@property (copy, nonatomic) NSString *familyName;
@property (copy, nonatomic) NSString *previousFamilyName;
@property (copy, nonatomic) NSString *nameSuffix;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *organizationName;
@property (copy, nonatomic) NSString *departmentName;
@property (copy, nonatomic) NSString *jobTitle;
@property (copy, nonatomic) NSString *phoneticGivenName;
@property (copy, nonatomic) NSString *phoneticMiddleName;
@property (copy, nonatomic) NSString *phoneticFamilyName;
@property (copy, nonatomic) NSString *phoneticOrganizationName;
@property (copy, nonatomic) NSString *note;
@property (copy, nonatomic) NSData *imageData;
@property (copy, nonatomic) NSArray *phoneNumbers;
@property (copy, nonatomic) NSArray *emailAddresses;
@property (copy, nonatomic) NSArray *postalAddresses;
@property (copy, nonatomic) NSArray *urlAddresses;
@property (copy, nonatomic) NSArray *contactRelations;
@property (copy, nonatomic) NSArray *socialProfiles;
@property (copy, nonatomic) NSArray *instantMessageAddresses;
@property (copy, nonatomic) NSDateComponents *birthday;
@property (copy, nonatomic) NSDateComponents *nonGregorianBirthday;
@property (copy, nonatomic) NSArray *dates;

+ (id)unifyContacts:(id)arg1;
+ (id)imageDataDescriptions;
+ (void)freezeIfInstancetypeIsImmutable:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)freeze;
- (void)setNilValueForKey:(id)arg1;
- (id)initWithContact:(id)arg1;
- (void)_setExternalIdentifier:(id)arg1;
- (void)_setExternalRepresentation:(id)arg1;
- (void)_setExternalModificationTag:(id)arg1;
- (void)_setExternalUUID:(id)arg1;
- (void)_setExternalImageURI:(id)arg1;
- (void)_setNamePrefix:(id)arg1;
- (void)_setGivenName:(id)arg1;
- (void)_setMiddleName:(id)arg1;
- (void)_setFamilyName:(id)arg1;
- (void)_setNameSuffix:(id)arg1;
- (void)_setPreviousFamilyName:(id)arg1;
- (void)_setNickname:(id)arg1;
- (void)_setPhoneticGivenName:(id)arg1;
- (void)_setPhoneticMiddleName:(id)arg1;
- (void)_setPhoneticFamilyName:(id)arg1;
- (void)_setPhoneticOrganizationName:(id)arg1;
- (void)_setPronunciationGivenName:(id)arg1;
- (void)_setPronunciationFamilyName:(id)arg1;
- (void)_setSectionForSortingByGivenName:(id)arg1;
- (void)_setSectionForSortingByFamilyName:(id)arg1;
- (void)_setOrganizationName:(id)arg1;
- (void)_setDepartmentName:(id)arg1;
- (void)_setJobTitle:(id)arg1;
- (void)_setBirthday:(id)arg1;
- (void)_setNonGregorianBirthday:(id)arg1;
- (void)_setCreationDate:(id)arg1;
- (void)_setModificationDate:(id)arg1;
- (void)_setNote:(id)arg1;
- (void)_setImageData:(id)arg1;
- (void)_setThumbnailImageData:(id)arg1;
- (void)_setFullscreenImageData:(id)arg1;
- (void)_setSyncImageData:(id)arg1;
- (void)_setLinkIdentifier:(id)arg1;
- (void)_setPreferredLikenessSource:(id)arg1;
- (void)_setPreferredApplePersonaIdentifier:(id)arg1;
- (void)_setPhoneNumbers:(id)arg1;
- (void)_setEmailAddresses:(id)arg1;
- (void)_setUrlAddresses:(id)arg1;
- (void)_setCalendarURIs:(id)arg1;
- (void)_setDates:(id)arg1;
- (void)_setContactRelations:(id)arg1;
- (void)_setInstantMessageAddresses:(id)arg1;
- (void)_setSocialProfiles:(id)arg1;
- (void)_setPostalAddresses:(id)arg1;
- (void)_setPhonemeData:(id)arg1;
- (void)_setCallAlert:(id)arg1;
- (void)_setTextAlert:(id)arg1;
- (void)_setMapsData:(id)arg1;
- (void)_setPreferredChannel:(id)arg1;
- (void)_setDowntimeWhitelist:(id)arg1;
- (void)_setImageType:(id)arg1;
- (void)_setImageHash:(id)arg1;
- (void)setFrozenSelfAsSnapshot;
- (id)freezeWithSelfAsSnapshot;
- (void)_setSearchIndex:(id)arg1;
- (void)updateImageDataAvailableFromCurrentState;
- (void)resetToNewContact;
- (void)overwriteStateFromContact:(id)arg1;
- (id)copyWithSelfAsSnapshot;
- (_Bool)preferredForName;
- (_Bool)preferredForImage;
- (void)updateStateFromContact:(id)arg1;
- (void)removeKeys:(id)arg1;

@end
