//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDHealthEntity.h>

@interface HDMetadataValueEntity : HDHealthEntity
{
}

+ (id)_predicateForEntityWithObjectID:(id)arg1;
+ (id)_predicateForEntityWithKeyID:(id)arg1;
+ (id)_insertMetadataValueWithKeyID:(id)arg1 objectID:(id)arg2 value:(id)arg3 database:(id)arg4 error:(id )arg5;
+ (id)deleteStatementForObjectMetadataWithDatabase:(id)arg1;
+ (long long)protectionClass;
+ (id)indices;
+ (const CDStruct_4c492439 )columnDefinitionsWithCount:(NSUInteger )arg1;
+ (id)databaseTable;

@end

