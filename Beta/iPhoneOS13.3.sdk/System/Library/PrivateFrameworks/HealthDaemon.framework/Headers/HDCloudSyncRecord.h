/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class CKRecord;

@interface HDCloudSyncRecord : NSObject

{
    CKRecord *_record;
}

@property (retain, nonatomic) CKRecord *record;

+ (id)_valueInRecord:(id)arg1 forKey:(id)arg2 type:(Class)arg3 encrypted:(_Bool)arg4 error:(id *)arg5;
+ (id)recordWithCKRecord:(id)arg1 error:(id *)arg2;
+ (_Bool)hasFutureSchema:(id)arg1;
+ (_Bool)_validateOptionalValueInRecord:(id)arg1 forKey:(id)arg2 type:(Class)arg3 encrypted:(_Bool)arg4 error:(id *)arg5;

- (id)initWithCKRecord:(id)arg1 schemaVersion:(long long)arg2;

@end
