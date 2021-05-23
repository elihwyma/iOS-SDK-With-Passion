/*
 Image: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
 */

#import <TelephonyPreferences/Swift-Protocol.h>

@class NSString;

@protocol TPSCloudCallingDevice <Swift>

@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSString *modelIdentifier;
@property (copy, nonatomic, readonly) NSString *uniqueID;
@property (nonatomic, readonly, getter=isDefaultPairedDevice) _Bool defaultPairedDevice;
@property (nonatomic, readonly) _Bool supportsRestrictingSecondaryCalling;
@property (copy, nonatomic, readonly) NSString *tps_modelName;

@end
