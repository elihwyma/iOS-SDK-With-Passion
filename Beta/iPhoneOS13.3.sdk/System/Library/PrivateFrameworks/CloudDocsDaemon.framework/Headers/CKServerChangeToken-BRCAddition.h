/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudKit/CKServerChangeToken.h>

@class NSString;

@interface CKServerChangeToken (BRCAddition)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)newFromSqliteValue:(struct sqlite3_value *)arg1;

- (void)sqliteBind:(struct sqlite3_stmt *)arg1 index:(int)arg2;
- (id)descriptionWithContext:(id)arg1;

@end
