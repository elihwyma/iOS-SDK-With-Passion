/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSString, PLCloudSharedAlbumInvitationRecord;

@interface PXSharedAlbumSubscriberInfo : NSObject

{
    _Bool _isOwner;
    PLCloudSharedAlbumInvitationRecord *_invitationRecord;
    NSString *_identifier;
    NSString *_email;
    NSString *_phone;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_displayName;
}

@property (retain, nonatomic, readonly) PLCloudSharedAlbumInvitationRecord *invitationRecord;
@property (nonatomic, readonly) _Bool isOwner;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *email;
@property (nonatomic, readonly) NSString *phone;
@property (nonatomic, readonly) NSString *firstName;
@property (nonatomic, readonly) NSString *lastName;
@property (nonatomic, readonly) NSString *displayName;

+ (id)allSubscribersForAlbum:(id)arg1;
+ (id)allSubscribersForAvatarViewWithAlbumWithObjectID:(id)arg1 managedObjectContext:(id)arg2;
+ (id)_allSubscribersForAlbum:(id)arg1 includeMyself:(_Bool)arg2;

- (id)init;
- (id)contactStore;
- (id)initWithInvitationRecord:(id)arg1 identifier:(id)arg2 email:(id)arg3 phone:(id)arg4 firstName:(id)arg5 lastName:(id)arg6 displayName:(id)arg7 isOwner:(_Bool)arg8;
- (id)matchingContactWithKeysToFetch:(id)arg1 outMatchingKey:(id *)arg2 outMatchingIdentifier:(id *)arg3;

@end
