/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface CKDVolume : NSObject

{
    NSUUID *_volumeUUID;
    NSNumber *_deviceID;
    NSString *_mountToPath;
}

@property (retain, nonatomic) NSUUID *volumeUUID;
@property (retain, nonatomic) NSNumber *deviceID;
@property (retain, nonatomic) NSString *mountToPath;

- (id)description;
- (id)CKPropertiesDescription;
- (id)initWithVolumeUUID:(id)arg1 deviceID:(id)arg2 mountToPath:(id)arg3;

@end
