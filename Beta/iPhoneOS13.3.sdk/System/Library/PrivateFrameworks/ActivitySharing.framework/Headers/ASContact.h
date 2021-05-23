/*
 Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
 */

#import <Foundation/NSObject.h>

@class ASRelationship, CNContactStore, NSSet, NSString, NSUUID;

@interface ASContact : NSObject

{
    CNContactStore *_contactStore;
    NSString *_linkedContactStoreIdentifier;
    NSString *_fullName;
    NSString *_shortName;
    NSSet *_destinations;
    ASRelationship *_relationship;
    ASRelationship *_remoteRelationship;
}

@property (nonatomic, readonly) NSUUID *UUID;
@property (copy, nonatomic) NSString *linkedContactStoreIdentifier;
@property (copy, nonatomic) NSString *fullName;
@property (copy, nonatomic) NSString *shortName;
@property (copy, nonatomic, readonly) NSString *displayName;
@property (copy, nonatomic) NSSet *destinations;
@property (copy, nonatomic) ASRelationship *relationship;
@property (copy, nonatomic) ASRelationship *remoteRelationship;
@property (copy, nonatomic, readonly) NSString *primaryDestinationForMessaging;

+ (id)contactWithCodableContact:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)contactStore;
- (void)setContactStore:(id)arg1;
- (_Bool)isEqualToContact:(id)arg1;
- (id)codableContactIncludingCloudKitFields:(_Bool)arg1;
- (id)_bestDestinationForContact:(id)arg1;
- (id)_bestDestinationFromKnownDestinations;

@end
