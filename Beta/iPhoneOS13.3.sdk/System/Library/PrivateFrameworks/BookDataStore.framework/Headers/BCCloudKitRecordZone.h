/*
 Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
 */

#import <Foundation/NSObject.h>

@class CKRecordZone;

@interface BCCloudKitRecordZone : NSObject

{
    CKRecordZone *_recordZone;
}

@property (nonatomic, readonly) CKRecordZone *recordZone;

- (id)description;
- (id)initWithRecordZone:(id)arg1;

@end
