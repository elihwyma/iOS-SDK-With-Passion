/*
 Image: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
 */

#import <TelephonyUtilities/TUCloudCallingDevice.h>

@class NSString;

@interface TUCloudCallingDevice (TelephonyPreferences)

@property (copy, nonatomic, readonly) NSString *tps_modelName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSString *modelIdentifier;
@property (copy, nonatomic, readonly) NSString *uniqueID;
@property (nonatomic, readonly, getter=isDefaultPairedDevice) _Bool defaultPairedDevice;
@property (nonatomic, readonly) _Bool supportsRestrictingSecondaryCalling;

@end
