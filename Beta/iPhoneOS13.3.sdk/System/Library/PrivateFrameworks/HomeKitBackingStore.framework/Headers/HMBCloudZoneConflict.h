/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <HMFoundation/HMFObject.h>

@class CKRecord;

@interface HMBCloudZoneConflict : HMFObject

{
    CKRecord *_client;
    CKRecord *_server;
    CKRecord *_ancestor;
}

@property (nonatomic, readonly) CKRecord *client;
@property (nonatomic, readonly) CKRecord *server;
@property (nonatomic, readonly) CKRecord *ancestor;

- (id)initWithError:(id)arg1;
- (id)initWithClientRecord:(id)arg1 serverRecord:(id)arg2 ancestorRecord:(id)arg3;

@end
