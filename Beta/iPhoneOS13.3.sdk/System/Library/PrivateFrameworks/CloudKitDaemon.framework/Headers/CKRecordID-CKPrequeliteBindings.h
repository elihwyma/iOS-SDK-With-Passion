/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKit/CKRecordID.h>

@class NSString;

@interface CKRecordID (CKPrequeliteBindings)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)newFromSqliteStatement:(struct sqlite3_stmt *)arg1 atIndex:(int)arg2;

- (void)sqliteBind:(struct sqlite3_stmt *)arg1 index:(int)arg2;

@end
