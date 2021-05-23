/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <Foundation/NSUUID.h>

@class NSString;

@interface NSUUID (HMB)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)hmbEncodeQueryableParameter:(id)arg1;
+ (id)hmbUUIDWithSQLite3Column:(struct sqlite3_stmt *)arg1 column:(int)arg2;
+ (id)hmbDecodeQueryableParameter:(id)arg1;
+ (id)hmbDescriptionForEncodedQueryableVariable:(id)arg1;
+ (id)hmbUUIDFromData:(id)arg1;

- (id)data;

@end
