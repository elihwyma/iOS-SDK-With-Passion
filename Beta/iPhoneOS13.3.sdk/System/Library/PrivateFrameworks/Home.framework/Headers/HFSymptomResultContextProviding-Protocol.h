/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/Swift-Protocol.h>

@class NSString, NSUUID;

@protocol HFSymptomResultContextProviding <Swift>

@property (copy, nonatomic, readonly) NSString *homeKitObjectName;
@property (copy, nonatomic, readonly) NSString *accessoryName;
@property (copy, nonatomic, readonly) NSUUID *accessoryUUID;
@property (copy, nonatomic, readonly) NSString *currentDeviceNetworkSSID;
@property (copy, nonatomic, readonly) NSString *accessoryNetworkSSID;
@property (copy, nonatomic, readonly) NSString *currentUserID;
@property (copy, nonatomic, readonly) NSString *currentAppleMusicAccountName;

- (unsigned short)shouldDisplayManualFixOptionForSymptom: /* Error: Ran out of types for this method. */;
- (unsigned short)fixStateForSymptom: /* Error: Ran out of types for this method. */;

@end
