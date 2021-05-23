/*
 Image: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSNumber, NSString;

@interface FAFamilyMember : NSObject

{
    NSDictionary *_dictionary;
}

@property (copy, nonatomic, readonly) NSDictionary *dictionary;
@property (nonatomic, readonly) _Bool isMe;
@property (copy, nonatomic, readonly) NSString *appleID;
@property (copy, nonatomic, readonly) NSNumber *dsid;
@property (copy, nonatomic, readonly) NSString *hashedDSID;
@property (copy, nonatomic, readonly) NSString *altDSID;
@property (copy, nonatomic, readonly) NSString *firstName;
@property (copy, nonatomic, readonly) NSString *lastName;
@property (nonatomic, readonly) unsigned long long age;
@property (copy, nonatomic, readonly) NSString *memberTypeDisplayString;
@property (copy, nonatomic, readonly) NSString *memberTypeString;
@property (nonatomic, readonly) long long memberType;
@property (copy, nonatomic, readonly) NSDate *joinedDate;
@property (copy, nonatomic, readonly) NSString *statusString;
@property (copy, nonatomic, readonly) NSString *inviteEmail;
@property (nonatomic, readonly) _Bool isChildAccount;
@property (nonatomic, readonly) _Bool hasParentalControlsEnabled;
@property (nonatomic, readonly) _Bool hasAskToBuyEnabled;
@property (nonatomic, readonly) _Bool isParent;
@property (nonatomic, readonly) _Bool isOrganizer;
@property (nonatomic, readonly) _Bool hasLinkediTunesAccount;
@property (nonatomic, readonly) NSNumber *iTunesAccountDSID;
@property (copy, nonatomic, readonly) NSString *iTunesAccountUsername;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (void)fetchFamilyPhotoWithRequestedSize:(unsigned long long)arg1 fallbackToLocalAddressBook:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
