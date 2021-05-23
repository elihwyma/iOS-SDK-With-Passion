/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <Foundation/NSObject.h>

@class CKRecordZoneID, NSArray, NSString;

@interface SCKZoneSchema : NSObject

{
    _Bool _atomic;
    CKRecordZoneID *_zoneID;
    NSString *_zoneName;
    NSArray *_recordSchemas;
}

@property (copy, nonatomic) NSArray *recordSchemas;
@property (copy, nonatomic, readonly) CKRecordZoneID *zoneID;
@property (copy, nonatomic, readonly) NSString *zoneName;
@property (nonatomic, readonly, getter=isAtomic) _Bool atomic;
@property (copy, nonatomic, readonly) NSArray *allRecordFieldNames;

- (_Bool)isValidRecord:(id)arg1;
- (id)schemaForRecordType:(id)arg1;
- (id)initWithName:(id)arg1 atomic:(_Bool)arg2 recordSchemas:(id)arg3;
- (id)validateRecords:(id)arg1;

@end
