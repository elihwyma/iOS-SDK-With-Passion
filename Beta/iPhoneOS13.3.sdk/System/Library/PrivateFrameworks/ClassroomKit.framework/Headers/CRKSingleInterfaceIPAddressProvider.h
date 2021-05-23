/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CRKSingleInterfaceIPAddressProvider : NSObject

{
    NSString *mInterfaceName;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *IPAddress;

- (id)init;
- (id)initWithInterfaceName:(id)arg1;

@end
