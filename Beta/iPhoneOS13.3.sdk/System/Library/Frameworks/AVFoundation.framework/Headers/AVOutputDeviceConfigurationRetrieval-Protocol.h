/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSString;

@protocol AVOutputDeviceConfigurationRetrieval <Swift>

@property (nonatomic, readonly) NSString *deviceName;
@property (nonatomic, readonly) NSString *devicePassword;
@property (nonatomic, readonly) NSString *deviceID;
@property (nonatomic, readonly) NSData *devicePublicKey;
@property (nonatomic, readonly) _Bool automaticallyAllowsConnectionsFromPeersInHomeGroup;
@property (nonatomic, readonly) _Bool onlyAllowsConnectionsFromPeersInHomeGroup;
@property (nonatomic, readonly) NSArray *peersInHomeGroup;

@end
