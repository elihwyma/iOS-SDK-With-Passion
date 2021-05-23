/*
 Image: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
 */

#import <Foundation/NSObject.h>

@interface UserRegistryStats : NSObject

{
    long long _fetchRecordZoneChanges;
    long long _lastfetchRecordZoneChangesAtStart;
    long long _pushNotifications;
    long long _zoneReset;
    long long _recordFetch;
    long long _recordModify;
}

@property long long fetchRecordZoneChanges;
@property long long lastfetchRecordZoneChangesAtStart;
@property long long pushNotifications;
@property long long zoneReset;
@property long long recordFetch;
@property long long recordModify;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)printUserRegistryStats:(struct __sFILE *)arg1;
- (id)getUserRegistryStats;

@end
