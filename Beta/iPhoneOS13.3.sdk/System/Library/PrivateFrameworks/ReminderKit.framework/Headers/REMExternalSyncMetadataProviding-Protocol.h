/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

@class NSString;

@protocol REMExternalSyncMetadataProviding

@property (nonatomic, readonly) NSString *externalIdentifier;
@property (nonatomic, readonly) NSString *externalModificationTag;
@property (nonatomic, readonly) NSString *daSyncToken;
@property (nonatomic, readonly) NSString *daPushKey;

- (unsigned short)externalIdentifierForMarkedForDeletionObject;

@end
