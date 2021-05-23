/*
 Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

#import <Foundation/NSObject.h>

@class NRDevice, NSString;

@protocol OS_dispatch_queue;

@interface NRActiveDeviceAssertion : NSObject

{
    NSString *_identifier;
    NSObject<OS_dispatch_queue> *_queue;
    NRDevice *_device;
}

@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NRDevice *device;
@property (nonatomic, readonly) _Bool isActive;

- (void)dealloc;
- (id)description;
- (void)invalidate;
- (void)_invalidate;
- (id)initWithDevice:(id)arg1 identifier:(id)arg2;

@end
