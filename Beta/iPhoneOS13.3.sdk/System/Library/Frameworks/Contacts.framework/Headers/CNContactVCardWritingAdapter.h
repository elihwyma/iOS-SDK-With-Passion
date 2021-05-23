/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class CNContact, NSArray, NSData, NSDateComponents, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface CNContactVCardWritingAdapter : NSObject

{
    CNContact *_contact;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NSString *firstName;
@property (readonly) NSString *lastName;
@property (readonly) NSString *middleName;
@property (readonly) NSString *title;
@property (readonly) NSString *suffix;
@property (readonly) NSString *companyName;
@property (readonly) _Bool isCompany;
@property (readonly) NSString *nickname;
@property (readonly) NSString *maidenName;
@property (readonly) NSString *phoneticFirstName;
@property (readonly) NSString *phoneticMiddleName;
@property (readonly) NSString *phoneticLastName;
@property (readonly) NSString *pronunciationFirstName;
@property (readonly) NSString *pronunciationLastName;
@property (readonly) NSString *organization;
@property (readonly) NSString *phoneticOrganization;
@property (readonly) NSString *department;
@property (readonly) NSString *jobTitle;
@property (readonly) _Bool isMe;
@property (readonly) int nameOrder;
@property (readonly) NSArray *emailAddresses;
@property (readonly) NSArray *phoneNumbers;
@property (readonly) NSArray *postalAddresses;
@property (readonly) NSArray *socialProfiles;
@property (readonly) NSArray *instantMessagingAddresses;
@property (readonly) NSArray *urls;
@property (readonly) NSArray *calendarURIs;
@property (readonly) NSDictionary *activityAlerts;
@property (readonly) NSArray *imageReferences;
@property (readonly) NSDictionary *imageCropRects;
@property (readonly) NSDictionary *largeImageCropRects;
@property (readonly) NSData *largeImageData;
@property (readonly) NSData *imageData;
@property (readonly) NSDateComponents *birthdayComponents;
@property (readonly) NSDateComponents *alternateBirthdayComponents;
@property (readonly) NSArray *otherDateComponents;
@property (readonly) NSArray *relatedNames;
@property (readonly) NSString *note;
@property (readonly) NSArray *namesOfParentGroups;
@property (readonly) NSString *cardDAVUID;
@property (readonly) NSString *uid;
@property (readonly) NSString *phonemeData;
@property (readonly) int downtimeWhitelistAuthorization;
@property (readonly) NSString *preferredLikenessSource;
@property (readonly) NSString *preferredApplePersonaIdentifier;
@property (readonly) NSArray *unknownProperties;

+ (id)adapterWithContact:(id)arg1;
+ (id)descriptorForAllSupportedKeys;

- (id)initWithContact:(id)arg1;
- (id)vCardPropertyItemsForProperty:(id)arg1;
- (id)vCardPropertyItemsForProperty:(id)arg1 valueTransform:(CDUnknownBlockType)arg2;
- (id)largeImageHashOfType:(id)arg1;

@end
