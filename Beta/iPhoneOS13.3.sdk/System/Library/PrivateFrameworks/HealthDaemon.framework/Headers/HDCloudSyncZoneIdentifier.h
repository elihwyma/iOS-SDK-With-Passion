/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

#import <HealthDaemon/Swift-Protocol.h>

@class CKRecordZoneID, NSString;

@interface HDCloudSyncZoneIdentifier : NSObject <Swift>

{
    NSString *_containerIdentifier;
    CKRecordZoneID *_zoneIdentifier;
    long long _scope;
}

@property (copy, nonatomic, readonly) NSString *containerIdentifier;
@property (copy, nonatomic, readonly) CKRecordZoneID *zoneIdentifier;
@property (nonatomic, readonly) long long scope;

+ (id)identifierForZone:(id)arg1 container:(id)arg2;
+ (id)identifierForZone:(id)arg1 container:(id)arg2 scope:(long long)arg3;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initForZone:(id)arg1 container:(id)arg2;
- (id)initForZone:(id)arg1 container:(id)arg2 scope:(long long)arg3;

@end
