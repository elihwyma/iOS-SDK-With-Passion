/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

@class NSString;

@protocol REMExternalSyncMetadataWritableProviding

@property (copy, nonatomic) NSString *externalIdentifier;
@property (copy, nonatomic) NSString *externalModificationTag;
@property (copy, nonatomic) NSString *daSyncToken;
@property (copy, nonatomic) NSString *daPushKey;

@end
