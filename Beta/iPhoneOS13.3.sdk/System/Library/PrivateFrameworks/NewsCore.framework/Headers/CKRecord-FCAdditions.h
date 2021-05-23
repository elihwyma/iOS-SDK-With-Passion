/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <CloudKit/CKRecord.h>

@class NSData;

@interface CKRecord (FCAdditions)

@property (retain, nonatomic) NSData *fc_sentinel_encryptionKey;
@property (nonatomic) _Bool fc_sentinel_finishedMigration;
@property (nonatomic) _Bool fc_sentinel_finishedDeletion;
@property (nonatomic) unsigned long long fc_sentinel_version;
@property (retain, nonatomic) NSData *fc_secureSentinel_encryptionKey;
@property (nonatomic) unsigned long long fc_secureSentinel_version;

+ (id)secureSentinelRecordWithEncryptionKey:(id)arg1;

- (_Bool)fc_isDifferentFromRecord:(id)arg1 forKey:(id)arg2;

@end
