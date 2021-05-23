/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface FCReadingHistoryMigrator : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)keyValueStore:(id)arg1 canMigrateFromVersion:(unsigned long long)arg2;
- (id)keyValueStore:(id)arg1 migrateObject:(id)arg2 forKey:(id)arg3 fromVersion:(unsigned long long)arg4;

@end
