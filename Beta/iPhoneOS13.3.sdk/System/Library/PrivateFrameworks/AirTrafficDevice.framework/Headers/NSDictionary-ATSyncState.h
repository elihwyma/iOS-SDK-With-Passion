/*
 Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

#import <NSDictionary.h>

@class NSString;

@interface NSDictionary (ATSyncState)

@property (nonatomic) unsigned long long lastServerRevision;
@property (nonatomic) unsigned long long lastClientRevision;
@property (nonatomic) unsigned long long newRevision;
@property (copy, nonatomic) NSString *versionToken;

- (id)displayName;
- (id)model;
- (void)setModel:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (id)osType;
- (id)osVersion;
- (void)setOsVersion:(id)arg1;
- (void)setOsType:(id)arg1;
- (id)devicePairingId;
- (void)setGrappaInfo:(id)arg1;
- (void)setEnabledDataClasses:(id)arg1;
- (void)setDevicePairingId:(id)arg1;
- (id)grappaInfo;
- (id)enabledDataClasses;

@end
