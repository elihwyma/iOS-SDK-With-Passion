/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

@class CKRecord, CKRecordID;

__attribute__((visibility("hidden")))
@interface BRCShareDeleteInfo : NSObject

{
    CKRecordID *_shareID;
    CKRecord *_emptyRecord;
}

@property (nonatomic, readonly) CKRecordID *shareID;
@property (nonatomic, readonly) CKRecord *emptyRecord;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithShareID:(id)arg1 emptyRecord:(id)arg2;

@end
