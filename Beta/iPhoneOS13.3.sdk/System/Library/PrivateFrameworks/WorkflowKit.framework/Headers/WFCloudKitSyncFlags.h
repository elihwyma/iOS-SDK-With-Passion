/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class CKRecordID, NSString;

@interface WFCloudKitSyncFlags : NSObject

{
    _Bool _migratedVoiceShortcuts;
    CKRecordID *_identifier;
}

@property (nonatomic) _Bool migratedVoiceShortcuts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) CKRecordID *identifier;

+ (id)properties;
+ (id)recordType;
+ (id)recordIDWithZoneID:(id)arg1;

- (id)initWithZoneID:(id)arg1;

@end
