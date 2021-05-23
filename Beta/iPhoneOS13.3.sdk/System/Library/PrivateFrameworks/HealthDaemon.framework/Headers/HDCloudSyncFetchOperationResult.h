/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HDCloudSyncOperationConfiguration, HDCloudSyncZone, NSDictionary, NSSet;

@interface HDCloudSyncFetchOperationResult : NSObject <Swift>

{
    HDCloudSyncOperationConfiguration *_configuration;
    long long _status;
    NSDictionary *_zonesByIdentifier;
    HDCloudSyncZone *_primaryPushZone;
}

@property (nonatomic, readonly) HDCloudSyncOperationConfiguration *configuration;
@property (nonatomic, readonly) long long status;
@property (nonatomic, readonly) NSDictionary *zonesByIdentifier;
@property (nonatomic, readonly) HDCloudSyncZone *primaryPushZone;
@property (nonatomic, readonly) NSSet *seizedZones;
@property (nonatomic, readonly) NSSet *pullZones;
@property (nonatomic, readonly) long long minimumSupportedProtocolVersion;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStatus:(long long)arg1 configuration:(id)arg2 zonesByIdentifier:(id)arg3;
- (id)_storeDescriptionForZone:(id)arg1;
- (id)masterZoneForContainerID:(id)arg1;

@end
