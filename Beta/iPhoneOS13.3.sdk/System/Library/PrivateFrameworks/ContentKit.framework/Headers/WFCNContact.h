/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <ContentKit/WFContact.h>

@class CNContact, NSString, WFFileRepresentation;

@interface WFCNContact : WFContact

{
    _Bool _fromVCard;
    int _propertyID;
    long long _multivalueIndex;
    WFFileRepresentation *_vCardRepresentation;
    CNContact *_contact;
}

@property (nonatomic, readonly) _Bool fromVCard;
@property (copy, nonatomic, readonly) CNContact *contact;
@property (copy, nonatomic, readonly) NSString *contactIdentifier;

+ (void)contactStoreDidChange:(id)arg1;
+ (id)changeObservers;
+ (id)contactWithCNContact:(id)arg1;
+ (id)requiredKeysToFetch;
+ (id)contactWithVCardData:(id)arg1 propertyID:(int)arg2 multivalueIndex:(long long)arg3;
+ (id)allContactsWithSortOrder:(long long)arg1 passingTest:(CDUnknownBlockType)arg2;
+ (id)allContactsWithSortOrder:(long long)arg1;
+ (id)contactsWithName:(id)arg1;
+ (id)contactsWithVCardData:(id)arg1;
+ (id)addContactsChangeObserver:(CDUnknownBlockType)arg1;
+ (void)removeContactsChangeObserver:(id)arg1;
+ (id)contactWithCNContact:(id)arg1 propertyID:(int)arg2 multivalueIndex:(long long)arg3;
+ (id)contactsWithName:(id)arg1 keysToFetch:(id)arg2;
+ (void)updateContactStoreObservation;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)URLs;
- (id)middleName;
- (id)namePrefix;
- (id)nameSuffix;
- (id)nickname;
- (id)phoneNumbers;
- (id)formattedName;
- (id)organization;
- (id)imageData;
- (id)firstName;
- (id)lastName;
- (id)emailAddresses;
- (id)instantMessageAddresses;
- (id)socialProfiles;
- (id)dates;
- (id)birthday;
- (id)thumbnailImageData;
- (id)vCardRepresentation;
- (int)propertyID;
- (_Bool)hasImageData;
- (_Bool)hasValueForPropertyID:(int)arg1;
- (id)valueForPropertyID:(int)arg1;
- (id)contactWithPropertyID:(int)arg1 multivalueIndex:(long long)arg2;
- (id)streetAddresses;
- (long long)multivalueIndex;
- (id)initWithCNContact:(id)arg1 propertyID:(int)arg2 multivalueIndex:(long long)arg3 fromVCard:(_Bool)arg4;
- (void)refetchContact;
- (_Bool)isPropertyIDRepresented:(int)arg1;

@end
