/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <Foundation/NSData.h>

@class NSString;

@interface NSData (HMB)

@property (copy, readonly) NSString *hmbDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)hmbDataWithSQLite3Column:(struct sqlite3_stmt *)arg1 column:(int)arg2;
+ (id)hmbDataWithSQLite3ColumnNoCopy:(struct sqlite3_stmt *)arg1 column:(int)arg2;
+ (id)hmbEncodeQueryableParameter:(id)arg1;
+ (id)hmbDecodeQueryableParameter:(id)arg1;
+ (id)hmbDescriptionForEncodedQueryableVariable:(id)arg1;

- (id)hmbUncompress;
- (id)hmbCompress;

@end
