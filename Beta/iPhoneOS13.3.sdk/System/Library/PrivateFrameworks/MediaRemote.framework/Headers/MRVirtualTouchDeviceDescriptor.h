/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface MRVirtualTouchDeviceDescriptor : NSObject

{
    _Bool _absolute;
    _Bool _integratedDisplay;
    union _MRHIDSize _screenSize;
}

@property (nonatomic, readonly, getter=isAbsolute) _Bool absolute;
@property (nonatomic, readonly, getter=isIntegratedDisplay) _Bool integratedDisplay;
@property (nonatomic, readonly) union _MRHIDSize screenSize;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)_copyWithZone:(struct _NSZone *)arg1 usingConcreteClass:(Class)arg2;

@end
