/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface NEIKEv2VendorData : NSObject

{
    NSData *_vendorData;
}

@property (retain) NSData *vendorData;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
