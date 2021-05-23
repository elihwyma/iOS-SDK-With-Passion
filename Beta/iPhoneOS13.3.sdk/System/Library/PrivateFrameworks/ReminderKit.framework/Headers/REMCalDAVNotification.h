/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

#import <ReminderKit/Swift-Protocol.h>

@class NSString, NSURL, REMObjectID;

@interface REMCalDAVNotification : NSObject <Swift>

{
    NSString *externalIdentifier;
    NSString *externalModificationTag;
    NSString *daPushKey;
    NSString *daSyncToken;
    NSString *_uuidString;
    NSURL *_hostURL;
    REMObjectID *_objectID;
    REMObjectID *_accountID;
    REMObjectID *_listID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) REMObjectID *objectID;
@property (nonatomic, readonly) REMObjectID *accountID;
@property (nonatomic, readonly) NSString *externalIdentifierForMarkedForDeletionObject;
@property (retain, nonatomic) NSString *uuidString;
@property (retain, nonatomic) NSURL *hostURL;
@property (nonatomic, readonly) REMObjectID *objectID;
@property (nonatomic, readonly) REMObjectID *accountID;
@property (nonatomic, readonly) REMObjectID *listID;
@property (copy, nonatomic) NSString *externalIdentifier;
@property (copy, nonatomic) NSString *externalModificationTag;
@property (copy, nonatomic) NSString *daSyncToken;
@property (copy, nonatomic) NSString *daPushKey;
@property (nonatomic, readonly) REMObjectID *remObjectID;

+ (_Bool)supportsSecureCoding;
+ (id)cdEntityName;
+ (id)newObjectID;
+ (id)objectIDWithUUID:(id)arg1;
+ (CDUnknownBlockType)rem_DA_deletedKeyFromTombstoneBlock;
+ (_Bool)rem_DA_supportsFetching;
+ (_Bool)rem_DA_supportsLazyDelete;
+ (CDUnknownBlockType)rem_DA_deletedKeyFromLazyDeletedModelObjectBlock;
+ (CDUnknownBlockType)rem_DA_fetchByObjectIDBlock;
+ (CDUnknownBlockType)rem_DA_fetchByObjectIDsBlock;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initCalDAVNotificationWithObjectID:(id)arg1 accountID:(id)arg2 listID:(id)arg3 uuidString:(id)arg4 hostURL:(id)arg5 externalIdentifier:(id)arg6 externalModificationTag:(id)arg7;

@end
