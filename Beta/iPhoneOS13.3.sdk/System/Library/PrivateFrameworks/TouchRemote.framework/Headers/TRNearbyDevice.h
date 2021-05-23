/*
 Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

#import <Foundation/NSObject.h>

@class NSUUID, SFDevice;

@interface TRNearbyDevice : NSObject

{
    unsigned long long _supportedService;
    SFDevice *_representedDevice;
}

@property (nonatomic) unsigned long long supportedService;
@property (nonatomic, readonly) SFDevice *representedDevice;
@property (nonatomic, readonly) NSUUID *identifier;

- (id)init;
- (id)description;
- (id)initWithRepresentedDevice:(id)arg1 supportedService:(unsigned long long)arg2;

@end
