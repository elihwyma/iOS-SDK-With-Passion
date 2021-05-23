/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <Foundation/NSObject.h>

@class CKRecord, NSDate, NSString;

@interface MSPEncryptedCloudRecord : NSObject

{
    _Bool _compressNewData;
    CKRecord *_record;
}

@property (nonatomic, readonly) CKRecord *record;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *cloudRecordName;
@property (nonatomic, readonly) NSDate *cloudRecordModificationDate;

+ (id)arrayOfCKRecordsFromArray:(id)arg1;
+ (id)arrayOfEncryptedRecordsFromArray:(id)arg1;

- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)initWithCKRecord:(id)arg1 isNewlyCreatedRecord:(_Bool)arg2;

@end
