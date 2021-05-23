/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface CRKInterfaceNameToIPAddressMap : NSObject

{
    NSDictionary *mIPAddressesByInterfaceName;
}

+ (id)makeIPAddressesByInterfaceName;
+ (id)makeEnumerator;

- (id)init;
- (id)IPAddressForInterfaceName:(id)arg1;

@end
