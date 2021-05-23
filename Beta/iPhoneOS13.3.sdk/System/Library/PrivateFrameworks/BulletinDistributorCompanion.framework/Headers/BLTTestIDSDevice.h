/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface BLTTestIDSDevice : NSObject

{
    _Bool _isDefaultPairedDevice;
    _Bool _isNearby;
    _Bool _isConnected;
    _Bool _isCloudReachable;
}

@property (nonatomic) _Bool isDefaultPairedDevice;
@property (nonatomic) _Bool isNearby;
@property (nonatomic) _Bool isConnected;
@property (nonatomic) _Bool isCloudReachable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

@end
