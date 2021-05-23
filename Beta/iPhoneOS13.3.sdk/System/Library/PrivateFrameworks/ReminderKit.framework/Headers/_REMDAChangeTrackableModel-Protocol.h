/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <ReminderKit/Swift-Protocol.h>

@class NSString, REMObjectID;

@protocol _REMDAChangeTrackableModel <Swift>

@property (nonatomic, readonly) REMObjectID *objectID;
@property (nonatomic, readonly) REMObjectID *accountID;
@property (nonatomic, readonly) NSString *externalIdentifierForMarkedForDeletionObject;

+ (unsigned short)rem_DA_deletedKeyFromTombstoneBlock;
+ (unsigned short)rem_DA_supportsFetching;
+ (unsigned short)rem_DA_supportsLazyDelete;
+ (unsigned short)rem_DA_deletedKeyFromLazyDeletedModelObjectBlock;
+ (unsigned short)rem_DA_fetchByObjectIDBlock;
+ (unsigned short)rem_DA_fetchByObjectIDsBlock;

@end
