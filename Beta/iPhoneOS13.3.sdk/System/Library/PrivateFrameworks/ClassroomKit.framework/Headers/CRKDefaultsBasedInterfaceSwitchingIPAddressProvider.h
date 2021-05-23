/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol CRKIPAddressProviding;

@interface CRKDefaultsBasedInterfaceSwitchingIPAddressProvider : NSObject

{
    id <CRKIPAddressProviding> mBaseProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *IPAddress;

- (id)init;
- (void)makeProvider;
- (_Bool)prefersEthernet;

@end
