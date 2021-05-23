/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSObject.h>

#import <ContentKit/Swift-Protocol.h>

@class NSArray, NSData, NSDate, NSString, WFContactLabeledValue, WFFileRepresentation;

@interface WFContact : NSObject <Swift>

{
    _Bool _hasImageData;
    int _propertyID;
    WFFileRepresentation *_vCardRepresentation;
    long long _multivalueIndex;
    NSString *_nickname;
    NSArray *_socialProfiles;
}

@property (nonatomic, readonly) int propertyID;
@property (nonatomic, readonly) long long multivalueIndex;
@property (nonatomic, readonly) NSString *formattedName;
@property (nonatomic, readonly) NSString *namePrefix;
@property (nonatomic, readonly) NSString *firstName;
@property (nonatomic, readonly) NSString *middleName;
@property (nonatomic, readonly) NSString *lastName;
@property (nonatomic, readonly) NSString *nameSuffix;
@property (nonatomic, readonly) NSString *nickname;
@property (nonatomic, readonly) NSString *organization;
@property (nonatomic, readonly) _Bool hasImageData;
@property (nonatomic, readonly) NSData *imageData;
@property (nonatomic, readonly) NSData *thumbnailImageData;
@property (nonatomic, readonly) WFContactLabeledValue *birthday;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) NSDate *modificationDate;
@property (nonatomic, readonly) NSArray *dates;
@property (nonatomic, readonly) NSArray *phoneNumbers;
@property (nonatomic, readonly) NSArray *emailAddresses;
@property (nonatomic, readonly) NSArray *streetAddresses;
@property (nonatomic, readonly) NSArray *URLs;
@property (nonatomic, readonly) NSArray *socialProfiles;
@property (nonatomic, readonly) NSArray *instantMessageAddresses;
@property (nonatomic, readonly) WFFileRepresentation *vCardRepresentation;
@property (copy, nonatomic, readonly) NSString *wfName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)objectWithWFSerializedRepresentation:(id)arg1;
+ (id)contactWithVCardData:(id)arg1 propertyID:(int)arg2 multivalueIndex:(long long)arg3;
+ (Class)preferredConcreteSubclass;
+ (id)allContactsWithSortOrder:(long long)arg1 passingTest:(CDUnknownBlockType)arg2;
+ (id)allContactsWithSortOrder:(long long)arg1;
+ (id)contactsWithName:(id)arg1;
+ (id)contactsWithVCardData:(id)arg1;
+ (id)addContactsChangeObserver:(CDUnknownBlockType)arg1;
+ (void)removeContactsChangeObserver:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (id)wfSerializedRepresentation;
- (_Bool)hasValueForPropertyID:(int)arg1;
- (id)valueForPropertyID:(int)arg1;
- (id)contactWithPropertyID:(int)arg1 multivalueIndex:(long long)arg2;

@end
