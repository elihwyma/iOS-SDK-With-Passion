/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDProfile, HDSQLiteDatabase, NSUUID;

@interface _HDAssociationInsertionContext : NSObject

{
    _Bool _enforceSameSource;
    _Bool _permitPendingAssociations;
    NSUUID *_parentUUID;
    HDProfile *_profile;
    HDSQLiteDatabase *_database;
}

@property (copy, nonatomic, readonly) NSUUID *parentUUID;
@property (nonatomic, readonly) _Bool enforceSameSource;
@property (nonatomic, readonly) _Bool permitPendingAssociations;
@property (nonatomic, readonly) HDProfile *profile;
@property (nonatomic, readonly) HDSQLiteDatabase *database;

- (id)initWithParentUUID:(id)arg1 enforceSameSource:(_Bool)arg2 permitPendingAssociations:(_Bool)arg3 profile:(id)arg4 database:(id)arg5;

@end
