/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <CloudKit/CKRecordID.h>

@class NSString;

@interface CKRecordID (HMB)

@property (copy, readonly) NSString *hmbDescription;

+ (id)recordIDFromExternalID:(id)arg1 error:(id *)arg2;

- (id)externalID:(id *)arg1;

@end
