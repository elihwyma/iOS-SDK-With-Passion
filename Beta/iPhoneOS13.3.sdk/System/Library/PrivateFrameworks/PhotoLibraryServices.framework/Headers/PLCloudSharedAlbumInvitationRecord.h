/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSArray, NSDate, NSNumber, NSString, PLCloudSharedAlbum;

@interface PLCloudSharedAlbumInvitationRecord : PLManagedObject

@property (retain, nonatomic) NSString *albumGUID;
@property (retain, nonatomic) NSString *cloudGUID;
@property (retain, nonatomic) NSNumber *invitationState;
@property (retain, nonatomic) NSNumber *invitationStateLocal;
@property (retain, nonatomic) NSNumber *inviteeEmailKey;
@property (retain, nonatomic) NSString *inviteeHashedPersonID;
@property (retain, nonatomic) NSString *inviteeFirstName;
@property (retain, nonatomic) NSString *inviteeLastName;
@property (retain, nonatomic) NSString *inviteeFullName;
@property (nonatomic) _Bool isMine;
@property (retain, nonatomic) NSDate *inviteeSubscriptionDate;
@property (retain, nonatomic) PLCloudSharedAlbum *album;
@property (weak, nonatomic, readonly) NSArray *inviteeEmails;
@property (weak, nonatomic, readonly) NSArray *inviteePhones;

+ (id)entityName;
+ (id)insertNewInvitationRecordIntoAlbum:(id)arg1 withFirstName:(id)arg2 lastName:(id)arg3 fullName:(id)arg4 emails:(id)arg5 phones:(id)arg6 inLibrary:(id)arg7;
+ (id)cloudSharedAlbumInvitationRecordWithGUID:(id)arg1 inLibrary:(id)arg2;
+ (id)cloudSharedAlbumInvitationRecordsWithAlbumGUID:(id)arg1 inLibrary:(id)arg2;

- (id)init;
- (void)delete;
- (void)awakeFromInsert;
- (void)prepareForDeletion;
- (void)willSave;
- (id)inviteeDisplayNameIncludingEmail:(_Bool)arg1;
- (void)setInviteeEmails:(id)arg1 phones:(id)arg2;
- (id)invitationStateDescription;

@end
