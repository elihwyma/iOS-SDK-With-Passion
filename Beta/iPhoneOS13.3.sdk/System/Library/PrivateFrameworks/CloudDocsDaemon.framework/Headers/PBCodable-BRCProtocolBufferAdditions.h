/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface PBCodable (BRCProtocolBufferAdditions)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)newFromSqliteValue:(struct sqlite3_value *)arg1;

- (void)sqliteBind:(struct sqlite3_stmt *)arg1 index:(int)arg2;

@end
