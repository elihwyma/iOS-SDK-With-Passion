/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

#import <HealthDaemon/Swift-Protocol.h>

@class NSString, NSUUID;

@interface HDCloudSyncOwnerIdentifier : NSObject <Swift>

{
    NSString *_deviceIdentifier;
    NSUUID *_databaseIdentifier;
    NSString *_ownerDifferentiator;
    NSString *_ownerIdentifierString;
}

@property (nonatomic, readonly) NSString *string;
@property (nonatomic, readonly) NSString *cloudKitIdentifier;

+ (void)ownerIdentifierForSyncContainer:(id)arg1 profile:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)_databaseUUIDForProfile:(id)arg1 error:(id *)arg2;
+ (id)unitTest_ownerIdentifierWithDatabaseIdentifer:(id)arg1 deviceIdentifier:(id)arg2 ownerDifferentiator:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDatabaseIdentifer:(id)arg1 deviceIdentifier:(id)arg2 ownerDifferentiator:(id)arg3;

@end
