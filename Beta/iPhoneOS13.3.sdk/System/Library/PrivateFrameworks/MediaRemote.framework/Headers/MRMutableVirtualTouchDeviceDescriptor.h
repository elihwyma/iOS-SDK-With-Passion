/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRVirtualTouchDeviceDescriptor.h>

__attribute__((visibility("hidden")))
@interface MRMutableVirtualTouchDeviceDescriptor : MRVirtualTouchDeviceDescriptor

@property (nonatomic, getter=isAbsolute) _Bool absolute;
@property (nonatomic, getter=isIntegratedDisplay) _Bool integratedDisplay;
@property (nonatomic) union _MRHIDSize screenSize;

@end
