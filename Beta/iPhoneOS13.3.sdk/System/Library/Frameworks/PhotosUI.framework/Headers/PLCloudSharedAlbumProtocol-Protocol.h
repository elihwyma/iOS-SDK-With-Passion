/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/Swift-Protocol.h>

@class NSDate, NSDictionary, NSNumber, NSOrderedSet, NSString;

@protocol PLCloudSharedAlbumProtocol <Swift>

@property (retain, nonatomic) NSString *cloudGUID;
@property (retain, nonatomic) NSDictionary *cloudMetadata;
@property (retain, nonatomic) NSString *cloudOwnerFirstName;
@property (retain, nonatomic) NSString *cloudOwnerLastName;
@property (retain, nonatomic) NSString *cloudOwnerFullName;
@property (retain, nonatomic) NSString *cloudOwnerEmail;
@property (retain, nonatomic) NSString *cloudOwnerHashedPersonID;
@property (nonatomic) _Bool cloudOwnerIsWhitelisted;
@property (retain, nonatomic) NSDate *cloudSubscriptionDate;
@property (retain, nonatomic) NSString *publicURL;
@property (retain, nonatomic) NSOrderedSet *invitationRecords;
@property (retain, nonatomic) NSNumber *unseenAssetsCount;
@property unsigned long long unseenAssetsCountIntegerValue;
@property (retain, nonatomic) NSNumber *cloudPublicURLEnabled;
@property (retain, nonatomic) NSNumber *cloudPublicURLEnabledLocal;
@property (retain, nonatomic) NSNumber *cloudMultipleContributorsEnabled;
@property (retain, nonatomic) NSNumber *cloudMultipleContributorsEnabledLocal;
@property (retain, nonatomic) NSDate *cloudLastInterestingChangeDate;
@property (retain, nonatomic) NSDate *cloudCreationDate;
@property (retain, nonatomic) NSDate *cloudLastContributionDate;
@property (retain, nonatomic) NSString *cloudPersonID;
@property (readonly) int cloudRelationshipStateValue;
@property (readonly) int cloudRelationshipStateLocalValue;
@property (retain, nonatomic, readonly) NSString *localizedSharedWithLabel;
@property (retain, nonatomic, readonly) NSOrderedSet *cloudAlbumSubscriberRecords;
@property (retain, nonatomic, readonly) NSDate *cloudFirstRecentBatchDate;
@property (nonatomic) _Bool cloudNotificationsEnabled;

- (unsigned short)localizedSharedByLabelAllowsEmail: /* Error: Ran out of types for this method. */;
- (unsigned short)cloudOwnerDisplayNameIncludingEmail:allowsEmail: /* Error: Ran out of types for this method. */;
- (unsigned short)updateCloudLastInterestingChangeDateWithDate: /* Error: Ran out of types for this method. */;
- (unsigned short)updateCloudLastContributionDateWithDate: /* Error: Ran out of types for this method. */;
- (unsigned short)getUnseenStartMarkerIndex:count:showsProgress: /* Error: Ran out of types for this method. */;
- (unsigned short)userDeleteSubscriberRecord: /* Error: Ran out of types for this method. */;

@end
