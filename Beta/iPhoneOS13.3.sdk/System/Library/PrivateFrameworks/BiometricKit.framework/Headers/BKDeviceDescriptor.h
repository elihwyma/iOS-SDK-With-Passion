/*
 Image: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
 */

#import <NSObject.h>

@interface BKDeviceDescriptor : NSObject

{
    long long _type;
}

@property (nonatomic) long long type;

+ (void)initialize;
+ (id)deviceDescriptorForType:(long long)arg1;

@end
