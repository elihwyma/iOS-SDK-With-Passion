/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class HMAccessory, NSData;

__attribute__((visibility("hidden")))
@interface CUHomeKitResolvableAccessory : NSObject

{
    HMAccessory *_accessory;
    NSData *_irkData;
}

@property (retain, nonatomic) HMAccessory *accessory;
@property (retain, nonatomic) NSData *irkData;

@end
