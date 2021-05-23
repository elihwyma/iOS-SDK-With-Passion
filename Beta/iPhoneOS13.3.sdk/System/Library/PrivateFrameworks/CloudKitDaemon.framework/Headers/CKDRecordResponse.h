/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class CKRecord, CKRecordID, NSString;

__attribute__((visibility("hidden")))
@interface CKDRecordResponse : NSObject

{
    CKRecordID *_recordID;
    NSString *_etag;
    CKRecord *_record;
}

@property (retain, nonatomic) CKRecordID *recordID;
@property (retain, nonatomic) NSString *etag;
@property (retain, nonatomic) CKRecord *record;

- (id)description;
- (id)CKPropertiesDescription;

@end
