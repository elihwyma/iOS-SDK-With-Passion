/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface NUDeviceTrait : NSObject

{
    unsigned long long _deviceTraitSize;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long deviceTraitSize;
@property (nonatomic, readonly, getter=isLandscape) _Bool landscape;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDeviceTraitSize:(unsigned long long)arg1;

@end
