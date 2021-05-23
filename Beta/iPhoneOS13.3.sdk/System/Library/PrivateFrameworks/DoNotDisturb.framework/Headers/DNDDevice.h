/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
 */

#import <NSObject.h>

@interface DNDDevice : NSObject

{
    unsigned long long _deviceClass;
    unsigned long long _deviceCapabilities;
}

@property (nonatomic, readonly) unsigned long long deviceClass;
@property (nonatomic, readonly) unsigned long long deviceCapabilities;

+ (id)currentDevice;
+ (id)deviceWithClass:(unsigned long long)arg1 deviceCapabilities:(unsigned long long)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithClass:(unsigned long long)arg1 deviceCapabilities:(unsigned long long)arg2;

@end
