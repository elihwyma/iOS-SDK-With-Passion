/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <Foundation/NSObject.h>

@class CKContainerID, NSArray, NSString;

@interface SCKDatabaseSchema : NSObject

{
    NSString *_name;
    long long _environment;
    NSArray *_zoneSchemas;
    long long _security;
}

@property (nonatomic) long long security;
@property (copy, nonatomic) NSArray *zoneSchemas;
@property (copy, nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long environment;
@property (copy, nonatomic, readonly) CKContainerID *containerID;
@property (copy, nonatomic, readonly) NSArray *zoneIDs;
@property (nonatomic, readonly) _Bool requiresDeviceToDeviceEncryption;

- (id)initWithName:(id)arg1 environment:(long long)arg2 security:(long long)arg3 zoneSchemas:(id)arg4;
- (id)schemaForZoneName:(id)arg1;

@end
