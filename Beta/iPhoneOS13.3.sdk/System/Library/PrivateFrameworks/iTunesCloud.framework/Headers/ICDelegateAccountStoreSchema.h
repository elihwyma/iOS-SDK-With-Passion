/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@interface ICDelegateAccountStoreSchema : NSObject

+ (long long)currentVersion;
+ (id)defaultDatabasePath;
+ (_Bool)setupWithConnection:(id)arg1 error:(id *)arg2;
+ (double)valueForDate:(id)arg1;
+ (_Bool)_createDefaultSchemaWithConnection:(id)arg1 error:(id *)arg2;
+ (id)dateForValue:(double)arg1;

@end
