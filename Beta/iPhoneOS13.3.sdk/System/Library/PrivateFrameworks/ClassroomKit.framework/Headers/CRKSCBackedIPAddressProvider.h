/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class NSSet, NSString;

@interface CRKSCBackedIPAddressProvider : NSObject

{
    NSSet *mInterfaceTypes;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *IPAddress;

+ (id)ethernetIPAddressProvider;
+ (id)WiFiIPAddressProvider;

- (id)init;
- (id)initWithInterfaceType:(id)arg1;
- (id)initWithInterfaceTypes:(id)arg1;
- (_Bool)isAllowedInterfaceType:(id)arg1;

@end
