/*
 Image: /System/Library/PrivateFrameworks/vCard.framework/vCard
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSDateComponents, NSDictionary, NSString;

@interface CNVCardPerson : NSObject

{
    NSString *_firstName;
    NSString *_lastName;
    NSString *_middleName;
    NSString *_title;
    NSString *_suffix;
    NSString *_nickname;
    NSString *_maidenName;
    NSString *_phoneticFirstName;
    NSString *_phoneticMiddleName;
    NSString *_phoneticLastName;
    NSString *_pronunciationFirstName;
    NSString *_pronunciationLastName;
    NSString *_organization;
    NSString *_phoneticOrganization;
    NSString *_department;
    NSString *_jobTitle;
    _Bool _isMe;
    _Bool _isCompany;
    int _nameOrder;
    NSArray *_emailAddresses;
    NSArray *_phoneNumbers;
    NSArray *_postalAddresses;
    NSArray *_socialProfiles;
    NSArray *_instantMessagingAddresses;
    NSArray *_urls;
    NSArray *_calendarURIs;
    NSDictionary *_activityAlerts;
    NSArray *_imageReferences;
    NSDictionary *_imageCropRects;
    NSDictionary *_largeImageCropRects;
    NSData *_largeImageData;
    NSData *_imageData;
    NSDateComponents *_birthdayComponents;
    NSDateComponents *_alternateBirthdayComponents;
    NSArray *_otherDateComponents;
    NSArray *_relatedNames;
    NSString *_note;
    NSArray *_namesOfParentGroups;
    NSString *_cardDAVUID;
    NSString *_uid;
    NSString *_phonemeData;
    int _downtimeWhitelistAuthorization;
    NSArray *_unknownProperties;
    NSString *_preferredLikenessSource;
    NSString *_preferredApplePersonaIdentifier;
}

@property (retain) NSString *firstName;
@property (retain) NSString *lastName;
@property (retain) NSString *middleName;
@property (retain) NSString *title;
@property (retain) NSString *suffix;
@property (retain) NSString *nickname;
@property (retain) NSString *maidenName;
@property (retain) NSString *phoneticFirstName;
@property (retain) NSString *phoneticMiddleName;
@property (retain) NSString *phoneticLastName;
@property (retain) NSString *pronunciationFirstName;
@property (retain) NSString *pronunciationLastName;
@property (retain) NSString *organization;
@property (retain) NSString *phoneticOrganization;
@property (retain) NSString *department;
@property (retain) NSString *jobTitle;
@property _Bool isMe;
@property _Bool isCompany;
@property int nameOrder;
@property (retain) NSArray *emailAddresses;
@property (retain) NSArray *phoneNumbers;
@property (retain) NSArray *postalAddresses;
@property (retain) NSArray *socialProfiles;
@property (retain) NSArray *instantMessagingAddresses;
@property (retain) NSArray *urls;
@property (retain) NSArray *calendarURIs;
@property (retain) NSDictionary *activityAlerts;
@property (retain) NSArray *imageReferences;
@property (retain) NSDictionary *imageCropRects;
@property (retain) NSDictionary *largeImageCropRects;
@property (retain) NSData *largeImageData;
@property (retain) NSData *imageData;
@property (retain) NSDateComponents *birthdayComponents;
@property (retain) NSDateComponents *alternateBirthdayComponents;
@property (retain) NSArray *otherDateComponents;
@property (retain) NSArray *relatedNames;
@property (retain) NSString *note;
@property (retain) NSString *phonemeData;
@property (retain) NSArray *namesOfParentGroups;
@property (retain) NSString *cardDAVUID;
@property (retain) NSString *uid;
@property (retain) NSString *preferredLikenessSource;
@property (retain) NSString *preferredApplePersonaIdentifier;
@property int downtimeWhitelistAuthorization;
@property (retain) NSArray *unknownProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NSString *companyName;

- (id)largeImageHashOfType:(id)arg1;

@end
