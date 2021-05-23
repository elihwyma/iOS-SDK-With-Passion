/*
 Image: /System/Library/PrivateFrameworks/SensorKit.framework/SensorKit
 */

#import <Foundation/NSObject.h>

@class SRDevice;

@interface SRFetchRequest : NSObject

{
    double _from;
    double _to;
    SRDevice *_device;
}

@property double from;
@property double to;
@property (retain) SRDevice *device;

- (id)init;
- (void)dealloc;

@end
