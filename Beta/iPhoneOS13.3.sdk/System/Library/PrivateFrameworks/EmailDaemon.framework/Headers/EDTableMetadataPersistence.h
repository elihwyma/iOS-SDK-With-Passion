/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@interface EDTableMetadataPersistence : NSObject

+ (_Bool)updateLargestDeletedRowID:(long long)arg1 forTableName:(id)arg2 withConnection:(id)arg3;
+ (id)tablesAndForeignKeysToResolve:(id *)arg1 associationsToResolve:(id *)arg2;
+ (long long)largestDeletedRowIDForTableName:(id)arg1 withConnection:(id)arg2;

@end
