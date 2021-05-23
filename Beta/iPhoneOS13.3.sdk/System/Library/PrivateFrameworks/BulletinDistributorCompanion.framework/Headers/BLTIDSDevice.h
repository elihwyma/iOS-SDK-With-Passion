/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSObject.h>

@class IDSDevice, NSString;

@interface BLTIDSDevice : NSObject

{
    IDSDevice *_device;
}

@property (nonatomic, readonly) _Bool isDefaultPairedDevice;
@property (nonatomic, readonly) _Bool isNearby;
@property (nonatomic, readonly) _Bool isConnected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool isCloudReachable;

- (void)dealloc;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithIDSDevice:(id)arg1;

@end
